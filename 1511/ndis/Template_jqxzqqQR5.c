/*
 * XREFs of Template_jqxzqqQR5 @ 0x1C00572BC
 * Callers:
 *     NdisWriteErrorLogEntry @ 0x1C0016460 (NdisWriteErrorLogEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzqqQR5(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rax
  int v11; // edx
  const wchar_t *v12; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  char *v15; // [rsp+40h] [rbp-49h]
  __int64 v16; // [rsp+48h] [rbp-41h]
  char *v17; // [rsp+50h] [rbp-39h]
  __int64 v18; // [rsp+58h] [rbp-31h]
  const wchar_t *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  char *v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  int *v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  __int64 v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]

  UserData.Ptr = a4;
  v15 = &a5;
  v17 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v16 = 4LL;
  v18 = 8LL;
  if ( a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v20 = v11;
  v21 = 0;
  v12 = L"NULL";
  if ( a7 )
    v12 = a7;
  v28 = 0;
  v19 = v12;
  v23 = 4LL;
  v22 = &a8;
  v25 = 4LL;
  v24 = &a9;
  v26 = a10;
  v27 = 4 * a9;
  return EtwWrite(Microsoft_Windows_NDISHandle, &NdisErrorLogEntry, a3, 7u, &UserData);
}
