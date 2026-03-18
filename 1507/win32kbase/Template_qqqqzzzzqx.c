/*
 * XREFs of Template_qqqqzzzzqx @ 0x1C00AA638
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0050760 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqzzzzqx(
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
        const wchar_t *a11,
        char a12,
        char a13)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  const wchar_t *v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  const wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  const wchar_t *v23; // rax
  int v24; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-A1h] BYREF
  char *v27; // [rsp+48h] [rbp-91h]
  __int64 v28; // [rsp+50h] [rbp-89h]
  char *v29; // [rsp+58h] [rbp-81h]
  __int64 v30; // [rsp+60h] [rbp-79h]
  char *v31; // [rsp+68h] [rbp-71h]
  __int64 v32; // [rsp+70h] [rbp-69h]
  const wchar_t *v33; // [rsp+78h] [rbp-61h]
  int v34; // [rsp+80h] [rbp-59h]
  int v35; // [rsp+84h] [rbp-55h]
  const wchar_t *v36; // [rsp+88h] [rbp-51h]
  int v37; // [rsp+90h] [rbp-49h]
  int v38; // [rsp+94h] [rbp-45h]
  const wchar_t *v39; // [rsp+98h] [rbp-41h]
  int v40; // [rsp+A0h] [rbp-39h]
  int v41; // [rsp+A4h] [rbp-35h]
  const wchar_t *v42; // [rsp+A8h] [rbp-31h]
  int v43; // [rsp+B0h] [rbp-29h]
  int v44; // [rsp+B4h] [rbp-25h]
  char *v45; // [rsp+B8h] [rbp-21h]
  __int64 v46; // [rsp+C0h] [rbp-19h]
  char *v47; // [rsp+C8h] [rbp-11h]
  __int64 v48; // [rsp+D0h] [rbp-9h]
  int v49; // [rsp+110h] [rbp+37h] BYREF

  v49 = a4;
  UserData.Ptr = (ULONGLONG)&v49;
  v13 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v27 = &a5;
  v29 = &a6;
  v31 = &a7;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
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
  v34 = v15;
  v16 = L"NULL";
  v35 = 0;
  v17 = L"NULL";
  if ( a8 )
    v17 = a8;
  v33 = v17;
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
  v37 = v19;
  v20 = L"NULL";
  v38 = 0;
  if ( a9 )
    v20 = a9;
  v36 = v20;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v40 = v22;
  v23 = L"NULL";
  v41 = 0;
  if ( a10 )
    v23 = a10;
  v39 = v23;
  if ( a11 )
  {
    do
      ++v13;
    while ( a11[v13] );
    v24 = 2 * v13 + 2;
  }
  else
  {
    v24 = 10;
  }
  v43 = v24;
  v44 = 0;
  if ( a11 )
    v16 = a11;
  v46 = 4LL;
  v42 = v16;
  v45 = &a12;
  v48 = 8LL;
  v47 = &a13;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &ImmersiveMessageCheckDelayEvent, &W32kControlGuid, 0xAu, &UserData);
}
