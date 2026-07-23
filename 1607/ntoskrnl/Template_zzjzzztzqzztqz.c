/*
 * XREFs of Template_zzjzzztzqzztqz @ 0x1401CFA70
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzzztzqzztqz(
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
        char a16,
        const wchar_t *a17)
{
  __int64 v17; // rcx
  int v19; // edx
  __int64 v20; // rax
  ULONG v21; // r8d
  const wchar_t *v22; // r10
  const wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  const wchar_t *v26; // rax
  __int64 v27; // rax
  int v28; // r9d
  const wchar_t *v29; // rax
  __int64 v30; // rax
  int v31; // r9d
  const wchar_t *v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  const wchar_t *v35; // rax
  __int64 v36; // rax
  int v37; // r9d
  const wchar_t *v38; // rax
  __int64 v39; // rax
  int v40; // r9d
  const wchar_t *v41; // rax
  __int64 v42; // rax
  int v43; // r9d
  const wchar_t *v44; // rax
  bool v45; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+4Ch] [rbp-B4h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  const wchar_t *v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+8Ch] [rbp-74h]
  char *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  const wchar_t *v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  char *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  const wchar_t *v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+CCh] [rbp-34h]
  const wchar_t *v72; // [rsp+D0h] [rbp-30h]
  int v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+DCh] [rbp-24h]
  char *v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  char *v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  const wchar_t *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]

  v17 = -1LL;
  v19 = 10;
  if ( a4 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a4[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  UserData.Size = v21;
  v22 = L"NULL";
  v23 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v23 = a4;
  UserData.Ptr = (ULONGLONG)v23;
  if ( a5 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a5[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v49 = v25;
  v26 = L"NULL";
  v50 = 0;
  if ( a5 )
    v26 = a5;
  v52 = 16LL;
  v48 = v26;
  v51 = a6;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v54 = v28;
  v29 = L"NULL";
  v55 = 0;
  if ( a7 )
    v29 = a7;
  v53 = v29;
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v57 = v31;
  v32 = L"NULL";
  v58 = 0;
  if ( a8 )
    v32 = a8;
  v56 = v32;
  if ( a9 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a9[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v60 = v34;
  v35 = L"NULL";
  v61 = 0;
  if ( a9 )
    v35 = a9;
  v63 = 4LL;
  v59 = v35;
  v62 = &a10;
  if ( a11 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a11[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v65 = v37;
  v38 = L"NULL";
  v66 = 0;
  if ( a11 )
    v38 = a11;
  v68 = 4LL;
  v64 = v38;
  v67 = &a12;
  if ( a13 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a13[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v70 = v40;
  v41 = L"NULL";
  v71 = 0;
  if ( a13 )
    v41 = a13;
  v69 = v41;
  if ( a14 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a14[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v43 = 10;
  }
  v73 = v43;
  v44 = L"NULL";
  v74 = 0;
  if ( a14 )
    v44 = a14;
  v76 = 4LL;
  v72 = v44;
  v75 = &a15;
  v77 = &a16;
  v78 = 4LL;
  v45 = a17 == 0LL;
  if ( a17 )
  {
    do
      ++v17;
    while ( a17[v17] );
    v19 = 2 * v17 + 2;
    v45 = a17 == 0LL;
  }
  if ( !v45 )
    v22 = a17;
  v80 = v19;
  v79 = v22;
  v81 = 0;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0xEu, &UserData);
}
