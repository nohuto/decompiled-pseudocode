/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00AF894
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0069DA4 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
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
