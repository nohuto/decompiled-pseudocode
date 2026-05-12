/*
 * XREFs of Template_zqcccjqqbx @ 0x1C003BC88
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C003ADC0 (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqcccjqqbx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        int a11,
        __int64 a12,
        char a13)
{
  __int64 v13; // rax
  unsigned int v14; // ecx
  const wchar_t *v15; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-A1h] BYREF
  char *v18; // [rsp+40h] [rbp-91h]
  __int64 v19; // [rsp+48h] [rbp-89h]
  char *v20; // [rsp+50h] [rbp-81h]
  __int64 v21; // [rsp+58h] [rbp-79h]
  char *v22; // [rsp+60h] [rbp-71h]
  __int64 v23; // [rsp+68h] [rbp-69h]
  char *v24; // [rsp+70h] [rbp-61h]
  __int64 v25; // [rsp+78h] [rbp-59h]
  __int64 v26; // [rsp+80h] [rbp-51h]
  __int64 v27; // [rsp+88h] [rbp-49h]
  char *v28; // [rsp+90h] [rbp-41h]
  __int64 v29; // [rsp+98h] [rbp-39h]
  int *v30; // [rsp+A0h] [rbp-31h]
  __int64 v31; // [rsp+A8h] [rbp-29h]
  __int64 v32; // [rsp+B0h] [rbp-21h]
  int v33; // [rsp+B8h] [rbp-19h]
  int v34; // [rsp+BCh] [rbp-15h]
  char *v35; // [rsp+C0h] [rbp-11h]
  __int64 v36; // [rsp+C8h] [rbp-9h]

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
  UserData.Reserved = 0;
  if ( a4 )
    v15 = a4;
  v19 = 4LL;
  UserData.Ptr = (unsigned __int64)v15;
  v21 = 1LL;
  v18 = &a5;
  v23 = 1LL;
  v20 = &a6;
  v25 = 1LL;
  v22 = &a7;
  v24 = &a8;
  v26 = a9;
  v28 = &a10;
  v30 = &a11;
  v32 = a12;
  v33 = a11;
  v35 = &a13;
  v27 = 16LL;
  v29 = 4LL;
  v31 = 4LL;
  v34 = 0;
  v36 = 8LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventMiniportBugResetBroken, a3, 0xAu, &UserData);
}
