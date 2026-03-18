/*
 * XREFs of Template_qqzzzqqqqqqqqqq @ 0x1C00311A8
 * Callers:
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqzzzqqqqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rax
  unsigned int v21; // r9d
  const wchar_t *v22; // r10
  const wchar_t *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r9d
  const wchar_t *v26; // rax
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-D0h] BYREF
  char *v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  const wchar_t *v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  const wchar_t *v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  const wchar_t *v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  char *v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  char *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  char *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  char *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  char *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  char *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  char *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  char *v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  int v59; // [rsp+160h] [rbp+58h] BYREF

  v59 = a4;
  UserData.Ptr = (ULONGLONG)&v59;
  v18 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v30 = &a5;
  v31 = 4LL;
  v19 = 10;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v33 = v21;
  v22 = L"NULL";
  v23 = L"NULL";
  if ( a6 )
    v23 = a6;
  v32 = v23;
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v35 = v25;
  v26 = L"NULL";
  if ( a7 )
    v26 = a7;
  v34 = v26;
  v27 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v18;
    while ( a8[v18] );
    v19 = 2 * v18 + 2;
    v27 = a8 == 0LL;
  }
  if ( !v27 )
    v22 = a8;
  v37 = v19;
  v36 = v22;
  v39 = &a9;
  v38 = 0;
  v41 = &a10;
  v40 = 4LL;
  v43 = &a11;
  v42 = 4LL;
  v45 = &a12;
  v44 = 4LL;
  v47 = &a13;
  v49 = &a14;
  v51 = &a15;
  v53 = &a16;
  v55 = &a17;
  v57 = &a18;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventMiracastGlobalConfiguration, 0LL, 0xFu, &UserData);
}
