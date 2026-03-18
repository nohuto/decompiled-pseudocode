/*
 * XREFs of MiGetPteFromCopyList @ 0x1400FE324
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v6; // ecx
  __int64 v8; // rdx
  _KPROCESS *v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 *v11; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r9
  unsigned __int64 ValidKernelPte; // rbx
  int v19; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v20; // [rsp+24h] [rbp-F4h]
  int v21; // [rsp+28h] [rbp-F0h]
  int v22; // [rsp+2Ch] [rbp-ECh]
  __int64 v23; // [rsp+30h] [rbp-E8h]
  __int64 v24; // [rsp+38h] [rbp-E0h]

  v3 = 2;
  v6 = *a1;
  if ( a3 == -1 )
    v3 = 1;
  if ( v6 + v3 > a1[1] )
  {
    v8 = *((_QWORD *)a1 + 2);
    v22 = 0;
    v19 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v20 = 0;
    v21 = 20;
    MiInsertTbFlushEntry((__int64)&v19, v8 << 25 >> 16, v6, 0);
    MiFlushTbList((__int64)&v19, v9);
    *a1 = 0;
  }
  v10 = *a1;
  v11 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v10);
  *a1 = v10 + v3;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  v14 = MiMakeValidKernelPte(a2, ProtectionPfnCompatible, (unsigned __int64)v11, v13) | 0x42;
  *v11 = v14;
  if ( (unsigned int)MiPteInShadowRange(v11) )
    MiWritePteShadow(v11, v14);
  if ( a3 != -1 )
  {
    v15 = MiMakeProtectionPfnCompatible(1, 48 * a3 - 0x58000000000LL);
    ValidKernelPte = MiMakeValidKernelPte(a3, v15, (unsigned __int64)v11, v16);
    v11[1] = ValidKernelPte;
    if ( (unsigned int)MiPteInShadowRange(v11 + 1) )
      MiWritePteShadow(v11 + 1, ValidKernelPte);
  }
  return v11;
}
