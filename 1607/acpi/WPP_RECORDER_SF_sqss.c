/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1C0025DA4
 * Callers:
 *     ACPIBuildProcessSynchronizationList @ 0x1C0025CA4 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0043B48 (ACPIBuildDeviceResetPowerNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // r14
  __int64 v10; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rdx
  __int64 v22; // rbx
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r8
  const char *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rdx
  const char *v33; // rcx
  int v34; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+70h] [rbp-38h]
  __int64 v36; // [rsp+78h] [rbp-30h]
  __int64 v37; // [rsp+80h] [rbp-28h]
  __int64 v38; // [rsp+88h] [rbp-20h]
  unsigned __int16 v41; // [rsp+C8h] [rbp+20h]

  v41 = a4;
  v9 = "NULL";
  v10 = (__int64)a9;
  v12 = (__int64)a8;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = -1LL;
  v15 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v16 = 5LL;
  if ( _bittest(&v15, (a3 - 1) & 0x1F) )
  {
    v24 = 10 * v13;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
    {
      if ( a9 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a9[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = "NULL";
      if ( a9 )
        v27 = a9;
      if ( a8 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a8[v28] );
        v29 = v28 + 1;
      }
      else
      {
        v29 = 5LL;
      }
      v30 = "NULL";
      if ( a8 )
        v30 = a8;
      if ( a6 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( a6[v31] );
        v32 = v31 + 1;
      }
      else
      {
        v32 = 5LL;
      }
      v33 = "NULL";
      if ( a6 )
        v33 = a6;
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v24),
        43LL,
        &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
        v41,
        v33,
        v32,
        &a7,
        8LL,
        v30,
        v29,
        v27,
        v26,
        0LL);
      a4 = v41;
      v16 = 5LL;
    }
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v10 + v17) );
    v16 = v17 + 1;
  }
  v18 = "NULL";
  if ( v10 )
    v18 = (const char *)v10;
  if ( v12 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v19 + v12) );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  v21 = "NULL";
  if ( v12 )
    v21 = (const char *)v12;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v22 = v14 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( a6 )
    v9 = a6;
  LOWORD(v34) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
           v34,
           v9,
           v22,
           &a7,
           8LL,
           v21,
           v20,
           v18,
           v16,
           0LL,
           v35,
           v36,
           v37,
           v38);
}
