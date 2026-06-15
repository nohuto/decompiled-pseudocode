/*
 * XREFs of WPP_SF_PS @ 0x180083750
 * Callers:
 *     ServiceDeviceEvent @ 0x180083344 (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_PS(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  const wchar_t *v9; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, const wchar_t *);
  if ( v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
  }
  v5 = L"NULL";
  if ( v9 )
    v5 = v9;
  return EtwTraceMessage(a1, 43LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, 22LL, (__int64 *)va, 8LL, v5);
}
