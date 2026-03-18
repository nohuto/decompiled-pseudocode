/*
 * XREFs of Template_zzjzzztzqzztq @ 0x1401FC3FC
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzzztzqzztq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const wchar_t *a13,
        const wchar_t *a14,
        char a15,
        char a16)
{
  __int64 v16; // rcx
  int v18; // edx
  __int64 v19; // rax
  ULONG v20; // r8d
  const wchar_t *v21; // r10
  const wchar_t *v22; // rax
  __int64 v23; // rax
  int v24; // r9d
  const wchar_t *v25; // rax
  __int64 v26; // rax
  int v27; // r9d
  const wchar_t *v28; // rax
  __int64 v29; // rax
  int v30; // r9d
  const wchar_t *v31; // rax
  __int64 v32; // rax
  int v33; // r9d
  const wchar_t *v34; // rax
  __int64 v35; // rax
  int v36; // r9d
  const wchar_t *v37; // rax
  __int64 v38; // rax
  int v39; // r9d
  const wchar_t *v40; // rax
  bool v41; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+4Ch] [rbp-B4h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  const wchar_t *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+8Ch] [rbp-74h]
  char *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  const wchar_t *v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+ACh] [rbp-54h]
  char *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  const wchar_t *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  const wchar_t *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  char *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  char *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]

  v16 = -1LL;
  v18 = 10;
  if ( a4 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a4[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  UserData.Size = v20;
  v21 = L"NULL";
  v22 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v22 = a4;
  UserData.Ptr = (ULONGLONG)v22;
  if ( a5 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a5[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v45 = v24;
  v25 = L"NULL";
  v46 = 0;
  if ( a5 )
    v25 = a5;
  v48 = 16LL;
  v44 = v25;
  v47 = a6;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v50 = v27;
  v28 = L"NULL";
  v51 = 0;
  if ( a7 )
    v28 = a7;
  v49 = v28;
  if ( a8 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a8[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v53 = v30;
  v31 = L"NULL";
  v54 = 0;
  if ( a8 )
    v31 = a8;
  v52 = v31;
  if ( a9 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a9[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v56 = v33;
  v34 = L"NULL";
  v57 = 0;
  if ( a9 )
    v34 = a9;
  v59 = 4LL;
  v55 = v34;
  v58 = &a10;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v61 = v36;
  v37 = L"NULL";
  v62 = 0;
  if ( a11 )
    v37 = a11;
  v64 = 4LL;
  v60 = v37;
  v63 = &a12;
  if ( a13 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a13[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v39 = 10;
  }
  v66 = v39;
  v40 = L"NULL";
  v67 = 0;
  if ( a13 )
    v40 = a13;
  v65 = v40;
  v41 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v16;
    while ( a14[v16] );
    v18 = 2 * v16 + 2;
    v41 = a14 == 0LL;
  }
  if ( !v41 )
    v21 = a14;
  v69 = v18;
  v68 = v21;
  v71 = &a15;
  v70 = 0;
  v73 = &a16;
  v72 = 4LL;
  v74 = 4LL;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0xDu, &UserData);
}
