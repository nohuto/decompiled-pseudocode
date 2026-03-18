/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C0024DF8
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008E800 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        const char *a13,
        const char *a14)
{
  const char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rsi
  const char *v19; // rax
  __int64 v20; // r10
  const char *v21; // rax
  __int64 v22; // r9
  __int64 v23; // r9
  const char *v24; // r12
  __int64 v25; // r8
  __int64 v26; // r8
  const char *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rdx
  const char *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rcx
  const char *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  const char *v36; // r11
  __int64 v37; // rbx
  __int64 v39; // r12
  __int64 v40; // r12
  const char *v41; // rax
  __int64 v42; // r15
  __int64 v43; // r15
  const char *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  const char *v47; // rcx
  __int64 v48; // r11
  __int64 v49; // r11
  const char *v50; // rax
  __int64 v51; // r10
  __int64 v52; // r10
  const char *v53; // rax
  __int64 v54; // r9
  __int64 v55; // r9
  const char *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r8
  const char *v59; // r14
  __int64 v60; // rcx
  __int64 v61; // rcx
  const char *v62; // rdx
  int v63; // [rsp+20h] [rbp-E8h]
  const char *v64; // [rsp+C0h] [rbp-48h]
  const char *v65; // [rsp+C8h] [rbp-40h]
  const char *v67; // [rsp+130h] [rbp+28h]

  v14 = "NULL";
  v15 = (__int64)a14;
  v16 = (__int64)a13;
  v17 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( a14[v39] );
      v40 = v39 + 1;
    }
    else
    {
      v40 = 5LL;
    }
    v41 = "NULL";
    if ( a14 )
      v41 = a14;
    a14 = v41;
    if ( a13 )
    {
      v42 = -1LL;
      do
        ++v42;
      while ( a13[v42] );
      v43 = v42 + 1;
    }
    else
    {
      v43 = 5LL;
    }
    v44 = "NULL";
    if ( a13 )
      v44 = a13;
    a13 = v44;
    if ( a11 )
    {
      v45 = -1LL;
      do
        ++v45;
      while ( a11[v45] );
      v46 = v45 + 1;
    }
    else
    {
      v46 = 5LL;
    }
    v47 = "NULL";
    if ( a11 )
      v47 = a11;
    v67 = v47;
    if ( a10 )
    {
      v48 = -1LL;
      do
        ++v48;
      while ( a10[v48] );
      v49 = v48 + 1;
    }
    else
    {
      v49 = 5LL;
    }
    v50 = "NULL";
    if ( a10 )
      v50 = a10;
    v64 = v50;
    if ( a9 )
    {
      v51 = -1LL;
      do
        ++v51;
      while ( a9[v51] );
      v52 = v51 + 1;
    }
    else
    {
      v52 = 5LL;
    }
    v53 = "NULL";
    if ( a9 )
      v53 = a9;
    v65 = v53;
    if ( a8 )
    {
      v54 = -1LL;
      do
        ++v54;
      while ( a8[v54] );
      v55 = v54 + 1;
    }
    else
    {
      v55 = 5LL;
    }
    v56 = "NULL";
    if ( a8 )
      v56 = a8;
    if ( a7 )
    {
      v57 = -1LL;
      do
        ++v57;
      while ( a7[v57] );
      v58 = v57 + 1;
    }
    else
    {
      v58 = 5LL;
    }
    v59 = "NULL";
    if ( a7 )
      v59 = a7;
    if ( a6 )
    {
      v60 = -1LL;
      do
        ++v60;
      while ( a6[v60] );
      v61 = v60 + 1;
    }
    else
    {
      v61 = 5LL;
    }
    v62 = "NULL";
    if ( a6 )
      v62 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
      22LL,
      v62,
      v61,
      v59,
      v58,
      v56,
      v55,
      v65,
      v52,
      v64,
      v49,
      v67,
      v46,
      &a12,
      8LL,
      a13,
      v43,
      a14,
      v40,
      0LL);
  }
  if ( v15 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v18 + v15) );
  }
  v19 = "NULL";
  if ( v15 )
    v19 = (const char *)v15;
  a14 = v19;
  if ( v16 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v20 + v16) );
  }
  v21 = "NULL";
  if ( v16 )
    v21 = (const char *)v16;
  a13 = v21;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  v24 = "NULL";
  if ( a11 )
    v24 = a11;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  v27 = "NULL";
  if ( a10 )
    v27 = a10;
  if ( a9 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a9[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  v30 = "NULL";
  if ( a9 )
    v30 = a9;
  if ( a8 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a8[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5LL;
  }
  v33 = "NULL";
  if ( a8 )
    v33 = a8;
  if ( a7 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a7[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5LL;
  }
  v36 = "NULL";
  if ( a7 )
    v36 = a7;
  if ( a6 )
  {
    do
      ++v17;
    while ( a6[v17] );
    v37 = v17 + 1;
  }
  else
  {
    v37 = 5LL;
  }
  if ( a6 )
    v14 = a6;
  LOWORD(v63) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
           v63,
           v14,
           v37,
           v36,
           v35,
           v33,
           v32,
           v30,
           v29,
           v27,
           v26,
           v24,
           v23,
           &a12);
}
