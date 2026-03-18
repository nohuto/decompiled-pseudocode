/*
 * XREFs of bDrvDisconnect @ 0x1C02B81B0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0203410 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0203600 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C012F844 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C012F938 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 bDrvDisconnect()
{
  PVOID v0; // rdi
  HANDLE v1; // rsi
  unsigned int v2; // ebx
  struct _SURFOBJ *v3; // rdx
  __int64 (__fastcall *v4)(HANDLE, PVOID); // rax
  _BYTE v6[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v7; // [rsp+110h] [rbp+18h] BYREF

  v0 = gConsoleShadowThinwireFileObject;
  v1 = ghConsoleShadowThinwireChannel;
  v7 = (_QWORD *)gConsoleShadowhDev;
  if ( gConsoleShadowhDev && (v2 = 1, (*(_DWORD *)(gConsoleShadowhDev + 56) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v6,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(gConsoleShadowhDev + 72),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v7[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v7[8], 11LL);
    v3 = (struct _SURFOBJ *)v7[322];
    if ( v3 )
      v3 = (struct _SURFOBJ *)((char *)v3 + 24);
    PDEVOBJ::vSync((PDEVOBJ *)&v7, v3, 0LL, 0);
    v4 = (__int64 (__fastcall *)(HANDLE, PVOID))v7[418];
    if ( v4 )
    {
      v2 = v4(v1, v0);
      if ( v2 )
        *(_DWORD *)(v7[227] + 896LL) = 3;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v7[8]);
    GreReleaseSemaphoreInternal(v7[8]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v6);
  }
  else
  {
    return 0;
  }
  return v2;
}
