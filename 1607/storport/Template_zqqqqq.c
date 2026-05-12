/*
 * XREFs of Template_zqqqqq @ 0x1C0039B9C
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0039714 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  unsigned int v10; // ecx
  const wchar_t *v11; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  char *v14; // [rsp+40h] [rbp-31h]
  __int64 v15; // [rsp+48h] [rbp-29h]
  char *v16; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+58h] [rbp-19h]
  char *v18; // [rsp+60h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-9h]
  char *v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  char *v22; // [rsp+80h] [rbp+Fh]
  __int64 v23; // [rsp+88h] [rbp+17h]

  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  UserData.Size = v10;
  UserData.Reserved = 0;
  v11 = L"NULL";
  if ( a4 )
    v11 = a4;
  v15 = 4LL;
  UserData.Ptr = (unsigned __int64)v11;
  v17 = 4LL;
  v14 = &a5;
  v19 = 4LL;
  v16 = &a6;
  v21 = 4LL;
  v18 = &a7;
  v23 = 4LL;
  v20 = &a8;
  v22 = &a9;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventIncreaseAdapterResourceList, 0LL, 6u, &UserData);
}
