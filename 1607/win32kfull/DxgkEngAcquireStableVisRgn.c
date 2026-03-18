/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C02601D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0]
    && ((v5 = *(_QWORD *)(v3[0] + 48LL), (*(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 8LL) & 0x4000) != 0)
     || (*(_DWORD *)(v3[0] + 36LL) & 0x8200) == 0x8200)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v4);
}
