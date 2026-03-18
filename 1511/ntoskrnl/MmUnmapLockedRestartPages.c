/*
 * XREFs of MmUnmapLockedRestartPages @ 0x140620ED4
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *PteAddress; // rdi
  unsigned __int64 v5; // r14
  _KPROCESS *v6; // rdx
  _BYTE v7[192]; // [rsp+20h] [rbp-E8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  MiInitializeTbFlushList((__int64)v7, 0, 20);
  PteAddress = (_QWORD *)MiGetPteAddress(v2);
  v5 = v3;
  MiInsertTbFlushEntry((__int64)v7, v2 & 0xFFFFFFFFFFFFF000uLL, v3, 0);
  if ( v3 )
  {
    do
    {
      *PteAddress = 0LL;
      if ( MiPteInShadowRange((__int64)PteAddress) )
        MiWritePteShadow((__int64)PteAddress, 0LL);
      ++PteAddress;
      --v5;
    }
    while ( v5 );
  }
  MiFlushTbList((__int64)v7, v6);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  MiReleaseDriverPtes(0, (unsigned __int64)&PteAddress[-v3], v3);
}
