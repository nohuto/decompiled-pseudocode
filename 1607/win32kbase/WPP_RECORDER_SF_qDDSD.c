/*
 * XREFs of WPP_RECORDER_SF_qdDSD @ 0x1C00D928C
 * Callers:
 *     RIMOpenDev @ 0x1C000CD84 (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rdx
  int v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v16; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v18; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const wchar_t *v20; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, const wchar_t *);
  v5 = (__int64)v20;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v20 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v20[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = L"NULL";
    if ( v20 )
      v11 = v20;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aefc60ae4ec5334359e431e3f568280a_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v11,
      2 * v10,
      va3,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_aefc60ae4ec5334359e431e3f568280a_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL);
}
