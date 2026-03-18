/*
 * XREFs of WPP_RECORDER_SF_qdDSD @ 0x1C00CA3D0
 * Callers:
 *     RIMOpenDev @ 0x1C00105AC (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  _WORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  int v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  __int64 v16; // [rsp+E0h] [rbp+38h] BYREF
  va_list va1; // [rsp+E0h] [rbp+38h]
  __int64 v18; // [rsp+E8h] [rbp+40h] BYREF
  va_list va2; // [rsp+E8h] [rbp+40h]
  _WORD *v20; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, _WORD *);
  v5 = v20;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v20 )
    {
      if ( *v20 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v20[v10] );
        v9 = 2 * v10 + 2;
      }
      else
      {
        v9 = 14LL;
      }
    }
    else
    {
      v9 = 10LL;
    }
    if ( v20 )
    {
      v11 = L"<NULL>";
      if ( *v20 )
        v11 = v20;
    }
    else
    {
      v11 = L"NULL";
    }
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v11,
      v9,
      va3,
      4LL,
      0LL);
  }
  if ( v5 && *v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 3LL, 5LL, &WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids, v13, (__int64 *)va);
}
