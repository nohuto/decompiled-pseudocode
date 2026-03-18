/*
 * XREFs of Template_pqz @ 0x1C00CC378
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002F3B0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS Template_pqz(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  int v4; // edx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const wchar_t *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  const wchar_t *v17; // [rsp+A8h] [rbp+38h]
  va_list va2; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 4LL;
  if ( v17 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v17[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v11 = v4;
  v12 = 0;
  v5 = L"NULL";
  if ( v17 )
    v5 = v17;
  v10 = v5;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &LockAcquireExclusive, &W32kControlGuid, 3u, &UserData);
}
