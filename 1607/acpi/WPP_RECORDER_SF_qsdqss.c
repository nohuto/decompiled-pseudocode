/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C0027040
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0080550 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C008ED00 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00983E0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00987C0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rdx
  __int64 v24; // rbx
  __int64 v26; // r9
  __int64 v27; // r9
  const char *v28; // r11
  __int64 v29; // r8
  __int64 v30; // r8
  const char *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  const char *v34; // rdx
  int v35; // [rsp+20h] [rbp-98h]

  v11 = "NULL";
  v12 = (__int64)a11;
  v13 = -1LL;
  v14 = (__int64)a10;
  v15 = (__int64)a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a11[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = "NULL";
    if ( a11 )
      v28 = a11;
    if ( a10 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( a10[v29] );
      v30 = v29 + 1;
    }
    else
    {
      v30 = 5LL;
    }
    v31 = "NULL";
    if ( a10 )
      v31 = a10;
    if ( a7 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( a7[v32] );
      v33 = v32 + 1;
    }
    else
    {
      v33 = 5LL;
    }
    v34 = "NULL";
    if ( a7 )
      v34 = a7;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v34,
      v33,
      &a8,
      4LL,
      &a9,
      8LL,
      v31,
      v30,
      v28,
      v27,
      0LL);
  }
  if ( v12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v12 + v18) );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  v20 = "NULL";
  if ( v12 )
    v20 = (const char *)v12;
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v14 + v21) );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  v23 = "NULL";
  if ( v14 )
    v23 = (const char *)v14;
  if ( v15 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v15 + v13) );
    v24 = v13 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( v15 )
    v11 = (const char *)v15;
  LOWORD(v35) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v35, &a6, 8LL, v11, v24, &a8, 4LL, &a9, 8LL, v23, v22, v20, v19, 0LL);
}
