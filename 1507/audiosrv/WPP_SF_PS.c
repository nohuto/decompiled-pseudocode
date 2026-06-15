/*
 * XREFs of WPP_SF_PS @ 0x18009E12C
 * Callers:
 *     ServiceDeviceEvent @ 0x18009DD20 (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_PS(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  _WORD *v8; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _WORD *);
  if ( v8 && *v8 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v8[v4] );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_908455377377748732ca9cb03e87474b_Traceguids, 22LL, (__int64 *)va);
}
