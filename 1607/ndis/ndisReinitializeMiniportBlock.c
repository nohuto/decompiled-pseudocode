/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C00F59E8
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00ACA60 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CD13C (ndisIMInitializeDeviceInstance_ea_1C00CD13C.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C005C26C (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C00E7254 (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(char *DeferredContext)
{
  KIRQL v2; // r12
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // r15d
  int v7; // ebx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x59u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)DeferredContext);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = *((unsigned __int16 *)DeferredContext + 1);
  v4 = *((_DWORD *)DeferredContext + 31) & 0x8613000;
  v5 = *((_DWORD *)DeferredContext + 672) & 0x200;
  v6 = *((_DWORD *)DeferredContext + 30) & 0x40000000;
  v7 = *((_DWORD *)DeferredContext + 468) & 0x4000;
  memset(DeferredContext + 4, 0, 0xE88uLL);
  ndisMInitializeMiniportBlockFront(DeferredContext, v3);
  v8 = *((_QWORD *)DeferredContext + 477);
  *((_DWORD *)DeferredContext + 1120) = 0;
  *((_DWORD *)DeferredContext + 1121) = 0;
  *((_DWORD *)DeferredContext + 31) = v4;
  *((_DWORD *)DeferredContext + 672) = v5;
  *((_DWORD *)DeferredContext + 30) = v6;
  *((_DWORD *)DeferredContext + 468) = v7;
  if ( (*(_BYTE *)(v8 + 26) & 1) != 0 )
    *((_DWORD *)DeferredContext + 30) = v6 | 0x8000;
  v9 = (void *)*((_QWORD *)DeferredContext + 399);
  if ( v9 )
    memset(v9, 0, 112LL * ndisMaxNumberOfProcessors);
  v10 = (void *)*((_QWORD *)DeferredContext + 519);
  if ( v10 )
    memset(v10, 0, 0x4A8uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  ndisOpenULongRef((__int64)(DeferredContext + 4496));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Au, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)DeferredContext);
}
