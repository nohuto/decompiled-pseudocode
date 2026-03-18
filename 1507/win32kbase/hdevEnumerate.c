/*
 * XREFs of hdevEnumerate @ 0x1C0034180
 * Callers:
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0014680 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0061290 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0081BD0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C008243C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00824D0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C00830D0 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B5BE0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

struct PDEV *__fastcall hdevEnumerate(struct PDEV *a1, int a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rdi
  struct PDEV *v5; // rcx
  struct PDEV *v6; // rbx
  unsigned int v7; // eax
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx
  struct PDEV *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    Template_pqz((_DWORD)a1, a2, a3, (_DWORD)v3, 12, (__int64)L"ghsemDriverMgmt");
    v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  }
  v5 = gppdevList;
  if ( a1 )
    v5 = a1;
  v11 = v5;
  if ( a1 )
    v6 = (struct PDEV *)*((_QWORD *)v5 + 3);
  else
    v6 = v5;
  if ( v6 )
  {
    while ( (*((_DWORD *)v6 + 14) & 1) == 0 )
    {
      v6 = (struct PDEV *)*((_QWORD *)v6 + 3);
      if ( !v6 )
        goto LABEL_16;
    }
    ++*((_DWORD *)v6 + 8);
    v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  }
LABEL_16:
  if ( !a1 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pz(v5, &LockRelease, a3, v3);
      v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
    }
    if ( !v3 )
      return v6;
    v8 = v3;
LABEL_29:
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v9);
    return v6;
  }
  v7 = *((_DWORD *)v5 + 8);
  if ( v7 <= 1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)v3, a3);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v11, 0LL);
    return v6;
  }
  *((_DWORD *)v5 + 8) = v7 - 1;
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v5, &LockRelease, a3, ghsemDriverMgmt);
  v8 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
    goto LABEL_29;
  return v6;
}
