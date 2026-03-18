/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00B3454
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0059CB8 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(*(_QWORD *)this + 632LL) )
  {
    Win32FreePool();
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL), a3);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*(_QWORD *)this + 528LL));
}
