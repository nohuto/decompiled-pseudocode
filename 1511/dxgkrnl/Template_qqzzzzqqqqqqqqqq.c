/*
 * XREFs of Template_qqzzzzqqqqqqqqqq @ 0x1C0029D20
 * Callers:
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqzzzzqqqqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // r10d
  const wchar_t *v23; // r9
  const wchar_t *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r10d
  const wchar_t *v27; // rax
  __int64 v28; // rax
  int v29; // r10d
  const wchar_t *v30; // rax
  bool v31; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-D0h] BYREF
  char *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  const wchar_t *v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  const wchar_t *v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  const wchar_t *v40; // [rsp+78h] [rbp-90h]
  int v41; // [rsp+80h] [rbp-88h]
  int v42; // [rsp+84h] [rbp-84h]
  const wchar_t *v43; // [rsp+88h] [rbp-80h]
  int v44; // [rsp+90h] [rbp-78h]
  int v45; // [rsp+94h] [rbp-74h]
  char *v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  char *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  char *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  char *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  char *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  char *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  char *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  char *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  int v66; // [rsp+170h] [rbp+68h] BYREF

  v66 = a4;
  UserData.Ptr = (ULONGLONG)&v66;
  v19 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v34 = &a5;
  v35 = 4LL;
  v20 = 10;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v37 = v22;
  v23 = L"NULL";
  v24 = L"NULL";
  if ( a6 )
    v24 = a6;
  v36 = v24;
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v39 = v26;
  v27 = L"NULL";
  if ( a7 )
    v27 = a7;
  v38 = v27;
  if ( a8 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a8[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v41 = v29;
  v30 = L"NULL";
  v42 = 0;
  if ( a8 )
    v30 = a8;
  v40 = v30;
  v31 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v19;
    while ( a9[v19] );
    v20 = 2 * v19 + 2;
    v31 = a9 == 0LL;
  }
  if ( !v31 )
    v23 = a9;
  v44 = v20;
  v43 = v23;
  v46 = &a10;
  v45 = 0;
  v48 = &a11;
  v47 = 4LL;
  v50 = &a12;
  v49 = 4LL;
  v52 = &a13;
  v51 = 4LL;
  v54 = &a14;
  v56 = &a15;
  v58 = &a16;
  v60 = &a17;
  v62 = &a18;
  v64 = &a19;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventMiracastGlobalConfiguration, 0LL, 0x10u, &UserData);
}
