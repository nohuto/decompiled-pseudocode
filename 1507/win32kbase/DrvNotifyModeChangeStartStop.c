/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C0061290
 * Callers:
 *     ApplyPathsModality @ 0x1C00610F8 (ApplyPathsModality.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0034590 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rdx
  int v5; // edx
  __int64 v6; // r8
  struct PDEV *i; // rcx
  struct PDEV *v8; // rax
  struct PDEV *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v13; // rax
  struct _SURFOBJ *v14; // rdx
  struct PDEV *v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v3, a3);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i, v5, v6);
    v9 = v8;
    if ( !v8 )
      break;
    v15 = v8;
    if ( (*((_DWORD *)v8 + 14) & 0x20401) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v15) )
    {
      GreLockDisplayDevice(v9);
      v13 = *((_QWORD *)v9 + 322);
      if ( v13 )
        v14 = (struct _SURFOBJ *)(v13 + 24);
      else
        v14 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v15, v14, 0LL, (a1 != 0 ? 0xC : 0) | 0x12);
      GreUnlockDisplayDevice(v9);
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, v6);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v10);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v11);
  return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
