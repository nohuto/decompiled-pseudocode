/*
 * XREFs of WPP_RECORDER_SF_qdSD @ 0x1C00D8F40
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const wchar_t *v11; // r8
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v17; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const wchar_t *v19; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, const wchar_t *);
  v5 = (__int64)v19;
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v19 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v19[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = L"NULL";
    if ( v19 )
      v11 = v19;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      v11,
      2 * v10,
      va2);
  }
  if ( v5 )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 2 * v8) );
    v12 = v8 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( v5 )
    v6 = (const wchar_t *)v5;
  LOWORD(v14) = 11;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           v6,
           2 * v12);
}
