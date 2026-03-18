/*
 * XREFs of Template_qqqqzzzqx @ 0x1C00AA4B0
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0050760 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rax
  int v15; // r9d
  const wchar_t *v16; // r10
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  const wchar_t *v20; // rax
  bool v21; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-89h] BYREF
  char *v24; // [rsp+48h] [rbp-79h]
  __int64 v25; // [rsp+50h] [rbp-71h]
  char *v26; // [rsp+58h] [rbp-69h]
  __int64 v27; // [rsp+60h] [rbp-61h]
  char *v28; // [rsp+68h] [rbp-59h]
  __int64 v29; // [rsp+70h] [rbp-51h]
  const wchar_t *v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+80h] [rbp-41h]
  int v32; // [rsp+84h] [rbp-3Dh]
  const wchar_t *v33; // [rsp+88h] [rbp-39h]
  int v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+94h] [rbp-2Dh]
  const wchar_t *v36; // [rsp+98h] [rbp-29h]
  int v37; // [rsp+A0h] [rbp-21h]
  int v38; // [rsp+A4h] [rbp-1Dh]
  char *v39; // [rsp+A8h] [rbp-19h]
  __int64 v40; // [rsp+B0h] [rbp-11h]
  char *v41; // [rsp+B8h] [rbp-9h]
  __int64 v42; // [rsp+C0h] [rbp-1h]
  int v43; // [rsp+100h] [rbp+3Fh] BYREF

  v43 = a4;
  UserData.Ptr = (ULONGLONG)&v43;
  v12 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v24 = &a5;
  v26 = &a6;
  v28 = &a7;
  v13 = 10;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  if ( a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a8[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v31 = v15;
  v16 = L"NULL";
  v32 = 0;
  v17 = L"NULL";
  if ( a8 )
    v17 = a8;
  v30 = v17;
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a9[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v34 = v19;
  v20 = L"NULL";
  v35 = 0;
  if ( a9 )
    v20 = a9;
  v33 = v20;
  v21 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v12;
    while ( a10[v12] );
    v13 = 2 * v12 + 2;
    v21 = a10 == 0LL;
  }
  if ( !v21 )
    v16 = a10;
  v37 = v13;
  v36 = v16;
  v39 = &a11;
  v38 = 0;
  v41 = &a12;
  v40 = 4LL;
  v42 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &MessageCheckDelayEvent, &W32kControlGuid, 9u, &UserData);
}
