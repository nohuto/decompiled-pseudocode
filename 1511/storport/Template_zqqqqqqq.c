/*
 * XREFs of Template_zqqqqqqq @ 0x1C0036A1C
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rax
  unsigned int v12; // ecx
  const wchar_t *v13; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-71h] BYREF
  char *v16; // [rsp+40h] [rbp-61h]
  __int64 v17; // [rsp+48h] [rbp-59h]
  char *v18; // [rsp+50h] [rbp-51h]
  __int64 v19; // [rsp+58h] [rbp-49h]
  char *v20; // [rsp+60h] [rbp-41h]
  __int64 v21; // [rsp+68h] [rbp-39h]
  char *v22; // [rsp+70h] [rbp-31h]
  __int64 v23; // [rsp+78h] [rbp-29h]
  char *v24; // [rsp+80h] [rbp-21h]
  __int64 v25; // [rsp+88h] [rbp-19h]
  char *v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]
  char *v28; // [rsp+A0h] [rbp-1h]
  __int64 v29; // [rsp+A8h] [rbp+7h]

  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  UserData.Size = v12;
  UserData.Reserved = 0;
  v13 = L"NULL";
  if ( a4 )
    v13 = a4;
  v17 = 4LL;
  UserData.Ptr = (unsigned __int64)v13;
  v19 = 4LL;
  v16 = &a5;
  v21 = 4LL;
  v18 = &a6;
  v23 = 4LL;
  v20 = &a7;
  v25 = 4LL;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v27 = 4LL;
  v29 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterResourceListFailure, 0LL, 8u, &UserData);
}
