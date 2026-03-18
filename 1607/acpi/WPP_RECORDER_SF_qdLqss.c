/*
 * XREFs of WPP_RECORDER_SF_qdLqss @ 0x1C0047420
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0080000 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C008F2C0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008FBC4 (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const char *v25; // rcx
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-98h]
  int v29; // [rsp+90h] [rbp-28h] BYREF
  __int64 v30; // [rsp+98h] [rbp-20h] BYREF

  v30 = 0LL;
  v11 = "NULL";
  v12 = -1LL;
  v13 = (__int64)a11;
  v15 = (__int64)a10;
  v29 = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = "NULL";
    if ( a11 )
      v19 = a11;
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = "NULL";
    if ( a10 )
      v22 = a10;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, int *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
      a4,
      &v30,
      8LL,
      &v29,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v13 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v13 + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  v25 = "NULL";
  if ( v13 )
    v25 = (const char *)v13;
  if ( v15 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v15 + v12) );
    v26 = v12 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( v15 )
    v11 = (const char *)v15;
  LOWORD(v28) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           5LL,
           &WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
           v28,
           &v30,
           8LL,
           &v29,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v11,
           v26,
           v25,
           v24,
           0LL);
}
