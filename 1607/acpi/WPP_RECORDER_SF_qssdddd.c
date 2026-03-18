/*
 * XREFs of WPP_RECORDER_SF_qssdddd @ 0x1C0057690
 * Callers:
 *     ACPIThermalRereadTemperature @ 0x1C005723C (ACPIThermalRereadTemperature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rbp
  const char *v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  const char *v24; // [rsp+F0h] [rbp+38h]
  const char *v25; // [rsp+F8h] [rbp+40h]
  __int64 v26; // [rsp+100h] [rbp+48h] BYREF
  va_list va1; // [rsp+100h] [rbp+48h]
  __int64 v28; // [rsp+108h] [rbp+50h] BYREF
  va_list va2; // [rsp+108h] [rbp+50h]
  __int64 v30; // [rsp+110h] [rbp+58h] BYREF
  va_list va3; // [rsp+110h] [rbp+58h]
  va_list va4; // [rsp+118h] [rbp+60h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, const char *);
  v25 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  v5 = "NULL";
  v6 = v25;
  v7 = v24;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v25 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v25[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = "NULL";
    if ( v25 )
      v12 = v25;
    if ( v24 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v24[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    if ( v24 )
      v15 = v24;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      v15,
      v14,
      v12,
      v11,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      va4,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v6[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  v18 = "NULL";
  if ( v6 )
    v18 = v6;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v19 = v8 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( v7 )
    v5 = v7;
  LOWORD(v21) = 18;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
           v21,
           (__int64 *)va,
           8LL,
           v5,
           v19,
           v18,
           v17,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           4LL,
           va4);
}
