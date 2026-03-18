/*
 * XREFs of Template_qqqzzzzqx @ 0x1C00AEFC8
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0072540 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  int v15; // r9d
  const wchar_t *v16; // r10
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  const wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  const wchar_t *v23; // rax
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-89h] BYREF
  char *v27; // [rsp+40h] [rbp-79h]
  __int64 v28; // [rsp+48h] [rbp-71h]
  char *v29; // [rsp+50h] [rbp-69h]
  __int64 v30; // [rsp+58h] [rbp-61h]
  const wchar_t *v31; // [rsp+60h] [rbp-59h]
  int v32; // [rsp+68h] [rbp-51h]
  int v33; // [rsp+6Ch] [rbp-4Dh]
  const wchar_t *v34; // [rsp+70h] [rbp-49h]
  int v35; // [rsp+78h] [rbp-41h]
  int v36; // [rsp+7Ch] [rbp-3Dh]
  const wchar_t *v37; // [rsp+80h] [rbp-39h]
  int v38; // [rsp+88h] [rbp-31h]
  int v39; // [rsp+8Ch] [rbp-2Dh]
  const wchar_t *v40; // [rsp+90h] [rbp-29h]
  int v41; // [rsp+98h] [rbp-21h]
  int v42; // [rsp+9Ch] [rbp-1Dh]
  char *v43; // [rsp+A0h] [rbp-19h]
  __int64 v44; // [rsp+A8h] [rbp-11h]
  char *v45; // [rsp+B0h] [rbp-9h]
  __int64 v46; // [rsp+B8h] [rbp-1h]
  int v47; // [rsp+F8h] [rbp+3Fh] BYREF

  v47 = a4;
  UserData.Ptr = (ULONGLONG)&v47;
  v12 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v27 = &a5;
  v29 = &a6;
  v13 = 10;
  v28 = 4LL;
  v30 = 4LL;
  if ( a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a7[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v32 = v15;
  v16 = L"NULL";
  v33 = 0;
  v17 = L"NULL";
  if ( a7 )
    v17 = a7;
  v31 = v17;
  if ( a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a8[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v20 = L"NULL";
  v36 = 0;
  if ( a8 )
    v20 = a8;
  v34 = v20;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v38 = v22;
  v23 = L"NULL";
  v39 = 0;
  if ( a9 )
    v23 = a9;
  v37 = v23;
  v24 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v12;
    while ( a10[v12] );
    v13 = 2 * v12 + 2;
    v24 = a10 == 0LL;
  }
  if ( !v24 )
    v16 = a10;
  v41 = v13;
  v40 = v16;
  v43 = &a11;
  v42 = 0;
  v45 = &a12;
  v44 = 4LL;
  v46 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &ImmersiveInputProcessDelayEvent, &W32kControlGuid, 9u, &UserData);
}
