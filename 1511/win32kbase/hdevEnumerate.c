/*
 * XREFs of hdevEnumerate @ 0x1C0037B90
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00600E8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C00770F0 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007C590 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C007D220 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B82D0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C __fastcall hdevEnumerate(
        struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C a1,
        int a2,
        __int64 a3)
{
  struct _ERESOURCE *v3; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v5; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rbx
  unsigned int v7; // eax
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    v3 = ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    Template_pqz(*(_DWORD *)&a1, a2, a3, (_DWORD)v3, 12, (__int64)L"ghsemDriverMgmt");
    v3 = ghsemDriverMgmt;
  }
  v5 = WPP_MAIN_CB.DeviceQueue.1;
  if ( a1 )
    v5 = a1;
  v11 = v5;
  if ( a1 )
    v6 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v5 + 24LL);
  else
    v6 = v5;
  if ( v6 )
  {
    while ( (*(_DWORD *)(*(_QWORD *)&v6 + 56LL) & 1) == 0 )
    {
      v6 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v6 + 24LL);
      if ( !*(_QWORD *)&v6 )
        goto LABEL_16;
    }
    ++*(_DWORD *)(*(_QWORD *)&v6 + 32LL);
    v3 = ghsemDriverMgmt;
  }
LABEL_16:
  if ( !*(_QWORD *)&a1 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Template_pz)(
        v5,
        &LockRelease,
        a3,
        v3,
        L"ghsemDriverMgmt");
      v3 = ghsemDriverMgmt;
    }
    if ( !v3 )
      return v6;
    v8 = v3;
LABEL_29:
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v9);
    return v6;
  }
  v7 = *(_DWORD *)(*(_QWORD *)&v5 + 32LL);
  if ( v7 <= 1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v11, 0LL);
    return v6;
  }
  *(_DWORD *)(*(_QWORD *)&v5 + 32LL) = v7 - 1;
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Template_pz)(
      v5,
      &LockRelease,
      a3,
      ghsemDriverMgmt,
      L"ghsemDriverMgmt");
  v8 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
    goto LABEL_29;
  return v6;
}
