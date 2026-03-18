/*
 * XREFs of ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C025D93C
 * Callers:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00522F4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0052360 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053714 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpNotifyLSurfaceTracking(_QWORD *a1, HLSURF a2, int a3)
{
  unsigned int v6; // edi
  HLSURF v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  GreAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[8], 11LL);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v10) )
  {
    v8 = a2;
    v9 = a3;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, HLSURF *))a1[432])(a1[228], 65544LL, 16LL, &v8);
  }
  else
  {
    v6 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[8]);
  GreReleaseSemaphoreInternal(a1[8]);
  return v6;
}
