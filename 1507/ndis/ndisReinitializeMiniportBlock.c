/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C00F4BF8
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C0057DAC (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C00EB2AC (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(char *DeferredContext)
{
  KIRQL v2; // al
  int v3; // edi
  KIRQL v4; // r15
  int v5; // esi
  int v6; // r14d
  int v7; // ebx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x59u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeferredContext);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = *((unsigned __int16 *)DeferredContext + 1);
  v4 = v2;
  v5 = *((_DWORD *)DeferredContext + 31) & 0x8613000;
  v6 = *((_DWORD *)DeferredContext + 30) & 0x40000000;
  v7 = *((_DWORD *)DeferredContext + 468) & 0x4000;
  memset(DeferredContext + 4, 0, 0xE88uLL);
  ndisMInitializeMiniportBlockFront(DeferredContext, v3);
  v8 = *((_QWORD *)DeferredContext + 477);
  *((_DWORD *)DeferredContext + 1120) = 0;
  *((_DWORD *)DeferredContext + 1121) = 0;
  *((_DWORD *)DeferredContext + 31) = v5;
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
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((__int64)(DeferredContext + 4496));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Au, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeferredContext);
}
