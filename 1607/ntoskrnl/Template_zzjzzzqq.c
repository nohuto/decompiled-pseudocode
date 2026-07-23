/*
 * XREFs of Template_zzjzzzqq @ 0x1401CF8B8
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14063A2D0 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzzzqq(
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
        char a11)
{
  __int64 v11; // rcx
  int v13; // edx
  __int64 v14; // rax
  ULONG v15; // r8d
  const wchar_t *v16; // r10
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  const wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  const wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  const wchar_t *v26; // rax
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-71h] BYREF
  const wchar_t *v30; // [rsp+40h] [rbp-61h]
  int v31; // [rsp+48h] [rbp-59h]
  int v32; // [rsp+4Ch] [rbp-55h]
  __int64 v33; // [rsp+50h] [rbp-51h]
  __int64 v34; // [rsp+58h] [rbp-49h]
  const wchar_t *v35; // [rsp+60h] [rbp-41h]
  int v36; // [rsp+68h] [rbp-39h]
  int v37; // [rsp+6Ch] [rbp-35h]
  const wchar_t *v38; // [rsp+70h] [rbp-31h]
  int v39; // [rsp+78h] [rbp-29h]
  int v40; // [rsp+7Ch] [rbp-25h]
  const wchar_t *v41; // [rsp+80h] [rbp-21h]
  int v42; // [rsp+88h] [rbp-19h]
  int v43; // [rsp+8Ch] [rbp-15h]
  char *v44; // [rsp+90h] [rbp-11h]
  __int64 v45; // [rsp+98h] [rbp-9h]
  char *v46; // [rsp+A0h] [rbp-1h]
  __int64 v47; // [rsp+A8h] [rbp+7h]

  v11 = -1LL;
  v13 = 10;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  UserData.Size = v15;
  v16 = L"NULL";
  v17 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v17 = a4;
  UserData.Ptr = (ULONGLONG)v17;
  if ( a5 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a5[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v31 = v19;
  v20 = L"NULL";
  v32 = 0;
  if ( a5 )
    v20 = a5;
  v34 = 16LL;
  v30 = v20;
  v33 = a6;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v36 = v22;
  v23 = L"NULL";
  v37 = 0;
  if ( a7 )
    v23 = a7;
  v35 = v23;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v39 = v25;
  v26 = L"NULL";
  v40 = 0;
  if ( a8 )
    v26 = a8;
  v38 = v26;
  v27 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v11;
    while ( a9[v11] );
    v13 = 2 * v11 + 2;
    v27 = a9 == 0LL;
  }
  if ( !v27 )
    v16 = a9;
  v42 = v13;
  v41 = v16;
  v44 = &a10;
  v43 = 0;
  v46 = &a11;
  v45 = 4LL;
  v47 = 4LL;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 8u, &UserData);
}
