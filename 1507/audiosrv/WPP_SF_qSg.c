/*
 * XREFs of WPP_SF_qSg @ 0x18007C5D8
 * Callers:
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x180078728 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qSg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  _WORD *v8; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

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
  return EtwTraceMessage(a1, 43LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, 208LL, (__int64 *)va);
}
