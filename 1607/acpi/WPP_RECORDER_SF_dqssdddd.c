/*
 * XREFs of WPP_RECORDER_SF_dqssdddd @ 0x1C0009654
 * Callers:
 *     ACPIThermalEvent @ 0x1C0057060 (ACPIThermalEvent.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqssdddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  const char *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  const char *v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  const char *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rdx
  int v22; // [rsp+28h] [rbp-89h]
  __int64 v23; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v25; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v27; // [rsp+110h] [rbp+5Fh]
  const char *v28; // [rsp+118h] [rbp+67h]
  __int64 v29; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+6Fh]
  __int64 v31; // [rsp+128h] [rbp+77h] BYREF
  va_list va3; // [rsp+128h] [rbp+77h]
  __int64 v33; // [rsp+130h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+130h] [rbp+7Fh]
  va_list va5; // [rsp+138h] [rbp+87h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  v27 = va_arg(va2, const char *);
  v28 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v31 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v33 = va_arg(va5, _QWORD);
  v5 = "NULL";
  v6 = (__int64)v28;
  v7 = -1LL;
  v8 = (__int64)v27;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v28 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v28[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = "NULL";
    if ( v28 )
      v18 = v28;
    if ( v27 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v27[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = "NULL";
    if ( v27 )
      v21 = v27;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      v21,
      v20,
      v18,
      v17,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      va5);
  }
  if ( v6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v6 + v11) );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  v13 = "NULL";
  if ( v6 )
    v13 = (const char *)v6;
  if ( v8 )
  {
    do
      ++v7;
    while ( *(_BYTE *)(v8 + v7) );
    v14 = v7 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( v8 )
    v5 = (const char *)v8;
  LOWORD(v22) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_e71e3bd19733322e69664c086501e10c_Traceguids,
           v22,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           v5,
           v14,
           v13,
           v12,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           4LL,
           (__int64 *)va4);
}
