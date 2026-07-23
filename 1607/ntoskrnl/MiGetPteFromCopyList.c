/*
 * XREFs of MiGetPteFromCopyList @ 0x140034700
 * Callers:
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v5; // ebp
  unsigned int v6; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  char v13; // al
  __int64 ValidKernelPte; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+24h] [rbp-F4h]
  __int64 v24; // [rsp+28h] [rbp-F0h]
  __int64 v25; // [rsp+30h] [rbp-E8h]
  __int64 v26; // [rsp+38h] [rbp-E0h]

  v4 = *a1;
  v5 = 2;
  v6 = 1;
  if ( a3 == -1 )
    v5 = 1;
  if ( v4 + v5 > a1[1] )
  {
    v9 = *((_QWORD *)a1 + 2);
    v22 = 0;
    v23 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v24 = 20LL;
    MiInsertTbFlushEntry(&v22, v9 << 25 >> 16, v4);
    MiFlushTbList(&v22);
    *a1 = 0;
  }
  v10 = *a1;
  v11 = (__int64 *)(*((_QWORD *)a1 + 2) + 8 * v10);
  *a1 = v10 + v5;
  v12 = 4LL;
  v13 = *(_BYTE *)(48 * a2 - 0x58000000000LL + 34) >> 6;
  if ( v13 )
  {
    if ( v13 == 2 )
      v12 = 28LL;
  }
  else
  {
    v12 = 12LL;
  }
  ValidKernelPte = MiMakeValidKernelPte(a2, v12, v11);
  *v11 = ValidKernelPte | 0x42;
  if ( (unsigned int)MiPteInShadowRange(v11, ValidKernelPte | 0x42) )
    MiWritePteShadow(v16, v15);
  if ( a3 != -1 )
  {
    v17 = *(_BYTE *)(48 * a3 - 0x58000000000LL + 34) >> 6;
    if ( v17 )
    {
      if ( v17 == 2 )
        v6 = 25;
    }
    else
    {
      v6 = 9;
    }
    v18 = MiMakeValidKernelPte(a3, v6, v11);
    v11[1] = v18;
    if ( (unsigned int)MiPteInShadowRange(v11 + 1, v18) )
      MiWritePteShadow(v20, v19);
  }
  return v11;
}
