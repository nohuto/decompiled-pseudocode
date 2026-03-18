/*
 * XREFs of WPP_RECORDER_SF_qDDqssdddd @ 0x1C00099F4
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0008940 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qDDqssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // r14
  const char *v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  const char *v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  int v21; // [rsp+28h] [rbp-A9h]
  __int64 v22; // [rsp+120h] [rbp+4Fh] BYREF
  va_list va; // [rsp+120h] [rbp+4Fh]
  __int64 v24; // [rsp+128h] [rbp+57h] BYREF
  va_list va1; // [rsp+128h] [rbp+57h]
  __int64 v26; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+5Fh]
  __int64 v28; // [rsp+138h] [rbp+67h] BYREF
  va_list va3; // [rsp+138h] [rbp+67h]
  const char *v30; // [rsp+140h] [rbp+6Fh]
  const char *v31; // [rsp+148h] [rbp+77h]
  __int64 v32; // [rsp+150h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+7Fh]
  __int64 v34; // [rsp+158h] [rbp+87h] BYREF
  va_list va5; // [rsp+158h] [rbp+87h]
  __int64 v36; // [rsp+160h] [rbp+8Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+8Fh]
  va_list va7; // [rsp+168h] [rbp+97h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  v30 = va_arg(va4, const char *);
  v31 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v32 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v34 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v36 = va_arg(va7, _QWORD);
  v5 = "NULL";
  v6 = v31;
  v7 = v30;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v31 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v31[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = "NULL";
    if ( v31 )
      v17 = v31;
    if ( v30 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v30[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = "NULL";
    if ( v30 )
      v20 = v30;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      v20,
      v19,
      v17,
      v16,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v6[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  v12 = "NULL";
  if ( v6 )
    v12 = v6;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( v7 )
    v5 = v7;
  LOWORD(v21) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
           v21,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           v5,
           v13,
           v12,
           v11,
           (__int64 *)va4);
}
