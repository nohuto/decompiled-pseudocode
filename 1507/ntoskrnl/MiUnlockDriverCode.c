/*
 * XREFs of MiUnlockDriverCode @ 0x1404532D8
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 */

char __fastcall MiUnlockDriverCode(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 SizeOfOptionalHeader; // rax
  PIMAGE_NT_HEADERS v4; // rsi
  unsigned int v5; // edi
  unsigned int *v6; // r14
  unsigned int v7; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(SizeOfOptionalHeader) = *(_BYTE *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81,
        (_BYTE)SizeOfOptionalHeader != 0x81) )
  {
    LOBYTE(SizeOfOptionalHeader) = *(_QWORD *)(a1 + 48);
    if ( v1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    {
      v4 = RtlImageNtHeader((PVOID)v1);
      v5 = 0;
      SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
      if ( v4->FileHeader.NumberOfSections )
      {
        v6 = (unsigned int *)((char *)&v4->OptionalHeader.SizeOfInitializedData + SizeOfOptionalHeader);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = *v6;
            if ( v6[2] >= *v6 )
              v7 = v6[2];
            MiUnlockCodePage(
              (_QWORD *)((((v1 + v6[1]) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              (((v1 + v6[1] + v7 + 4095LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
          }
          LODWORD(SizeOfOptionalHeader) = v4->FileHeader.NumberOfSections;
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)SizeOfOptionalHeader );
      }
    }
  }
  return SizeOfOptionalHeader;
}
