/*
 * XREFs of WPP_SF_dSd @ 0x1800A13C0
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180029B80 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dSd(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  const wchar_t *v6; // rcx
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v10; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const wchar_t *);
  if ( v10 )
  {
    if ( *v10 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v10[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( v10 )
  {
    v6 = L"<NULL>";
    if ( *v10 )
      v6 = v10;
  }
  else
  {
    v6 = L"NULL";
  }
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, va, 4LL, v6, v4, va1, 4LL, 0LL);
}
