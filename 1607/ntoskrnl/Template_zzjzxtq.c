/*
 * XREFs of Template_zzjzxtq @ 0x1401CF760
 * Callers:
 *     PiDevCfgLogDeviceMigrated @ 0x14063A210 (PiDevCfgLogDeviceMigrated.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzxtq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rcx
  int v12; // r8d
  __int64 v13; // rax
  ULONG v14; // edx
  const wchar_t *v15; // r10
  const wchar_t *v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  const wchar_t *v19; // rax
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  const wchar_t *v23; // [rsp+40h] [rbp-49h]
  int v24; // [rsp+48h] [rbp-41h]
  int v25; // [rsp+4Ch] [rbp-3Dh]
  __int64 v26; // [rsp+50h] [rbp-39h]
  __int64 v27; // [rsp+58h] [rbp-31h]
  const wchar_t *v28; // [rsp+60h] [rbp-29h]
  int v29; // [rsp+68h] [rbp-21h]
  int v30; // [rsp+6Ch] [rbp-1Dh]
  char *v31; // [rsp+70h] [rbp-19h]
  __int64 v32; // [rsp+78h] [rbp-11h]
  char *v33; // [rsp+80h] [rbp-9h]
  __int64 v34; // [rsp+88h] [rbp-1h]
  char *v35; // [rsp+90h] [rbp+7h]
  __int64 v36; // [rsp+98h] [rbp+Fh]

  v10 = -1LL;
  v12 = 10;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  UserData.Size = v14;
  v15 = L"NULL";
  v16 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v16 = a4;
  UserData.Ptr = (ULONGLONG)v16;
  if ( a5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a5[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v24 = v18;
  v19 = L"NULL";
  v25 = 0;
  if ( a5 )
    v19 = a5;
  v27 = 16LL;
  v23 = v19;
  v26 = a6;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v12 = 2 * v10 + 2;
    v20 = a7 == 0LL;
  }
  if ( !v20 )
    v15 = a7;
  v29 = v12;
  v28 = v15;
  v31 = &a8;
  v30 = 0;
  v33 = &a9;
  v32 = 8LL;
  v35 = &a10;
  v34 = 4LL;
  v36 = 4LL;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 7u, &UserData);
}
