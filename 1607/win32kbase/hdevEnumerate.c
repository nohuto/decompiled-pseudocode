/*
 * XREFs of hdevEnumerate @ 0x1C0034350
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C005DA28 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0065808 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00699B0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C007AA00 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007DF10 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C007E850 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 */

struct _LIST_ENTRY *__fastcall hdevEnumerate(struct _LIST_ENTRY *a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rbx
  unsigned int Flink; // eax
  __int64 v8; // rcx
  struct _LIST_ENTRY *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    LODWORD(v3) = (_DWORD)ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)a1, a2, a3, (_DWORD)v3, 12, (__int64)L"ghsemDriverMgmt");
  Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  if ( a1 )
    Blink = a1;
  v10 = Blink;
  if ( a1 )
    v6 = Blink[1].Blink;
  else
    v6 = Blink;
  while ( v6 )
  {
    if ( ((__int64)v6[3].Blink & 1) != 0 )
    {
      ++LODWORD(v6[2].Flink);
      break;
    }
    v6 = v6[1].Blink;
  }
  if ( a1 )
  {
    Flink = (unsigned int)Blink[2].Flink;
    if ( Flink <= 1 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::vUnreferencePdev(&v10, 0);
      return v6;
    }
    LODWORD(Blink[2].Flink) = Flink - 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return v6;
}
