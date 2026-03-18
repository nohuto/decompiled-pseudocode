/*
 * XREFs of IcCopyData @ 0x1C006A1B0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C006A110 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006D578 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcCopyData(int a1)
{
  __int64 i; // r11
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // ecx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v3 = 0;
      v4 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v5 = i + 136;
        do
        {
          if ( a1 == 1 )
          {
            v6 = *(_OWORD *)(v5 - 88);
            v7 = *(_OWORD *)(v5 - 72);
            *(_DWORD *)(v5 - 100) = *(_DWORD *)(v5 - 104);
            v8 = *(_DWORD *)(v5 - 96);
            *(_OWORD *)v5 = v6;
            *(_DWORD *)(v5 - 92) = v8;
            v9 = *(_OWORD *)(v5 - 56);
            LOBYTE(v8) = *(_BYTE *)(v5 + 88);
            *(_OWORD *)(v5 + 16) = v7;
            *(_BYTE *)(v5 + 89) = v8;
            v10 = *(_OWORD *)(v5 - 40);
            *(_OWORD *)(v5 + 32) = v9;
            v11 = *(_OWORD *)(v5 - 24);
            *(_OWORD *)(v5 + 48) = v10;
            *(_QWORD *)&v10 = *(_QWORD *)(v5 - 8);
            *(_OWORD *)(v5 + 64) = v11;
            *(_QWORD *)(v5 + 80) = v10;
            *(_DWORD *)v5 = 0;
            *(_DWORD *)(v5 + 56) = v3 + *(_DWORD *)(i + 16);
          }
          else
          {
            v13 = *(_OWORD *)v5;
            v14 = *(_OWORD *)(v5 + 16);
            *(_DWORD *)(v5 - 104) = *(_DWORD *)(v5 - 100);
            v15 = *(_DWORD *)(v5 - 92);
            *(_OWORD *)(v5 - 88) = v13;
            *(_DWORD *)(v5 - 96) = v15;
            v16 = *(_OWORD *)(v5 + 32);
            LOBYTE(v15) = *(_BYTE *)(v5 + 89);
            *(_OWORD *)(v5 - 72) = v14;
            *(_BYTE *)(v5 + 88) = v15;
            v17 = *(_OWORD *)(v5 + 48);
            *(_OWORD *)(v5 - 56) = v16;
            v18 = *(_OWORD *)(v5 + 64);
            *(_OWORD *)(v5 - 40) = v17;
            *(_QWORD *)&v17 = *(_QWORD *)(v5 + 80);
            *(_OWORD *)(v5 - 24) = v18;
            *(_QWORD *)(v5 - 8) = v17;
          }
          ++v3;
          v5 += 200LL;
        }
        while ( v3 < v4 );
      }
    }
  }
  return 0LL;
}
