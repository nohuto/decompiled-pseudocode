/*
 * XREFs of MiUnlockDriverCode @ 0x1404C32F0
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400A1DD0 (MiUnlockCodePage.c)
 */

__int64 __fastcall MiUnlockDriverCode(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // r14
  unsigned int v5; // ebp
  unsigned int *v6; // r15
  unsigned int v7; // edx
  unsigned __int64 v8; // rdi
  __int64 PteAddress; // rbx
  unsigned __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (result = MiGetPdeAddress(v1), (*(_BYTE *)result & 0x81) != 0x81) )
  {
    result = v1 + 0x70000000000LL;
    if ( v1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    {
      v4 = RtlImageNtHeader((PVOID)v1);
      v5 = 0;
      result = v4->FileHeader.SizeOfOptionalHeader;
      if ( v4->FileHeader.NumberOfSections )
      {
        v6 = (unsigned int *)((char *)&v4->OptionalHeader.SizeOfInitializedData + result);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = *v6;
            if ( v6[2] >= *v6 )
              v7 = v6[2];
            v8 = v1 + v6[1];
            PteAddress = MiGetPteAddress((v8 + v7 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
            v10 = MiGetPteAddress(v8);
            MiUnlockCodePage(v10, PteAddress - 8);
          }
          result = v4->FileHeader.NumberOfSections;
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)result );
      }
    }
  }
  return result;
}
