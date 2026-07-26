/*
 * XREFs of Template_jqxz @ 0x1C005648C
 * Callers:
 *     NdisCloseAdapter @ 0x1C00E6D70 (NdisCloseAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxz(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v7; // rax
  int v8; // ecx
  const wchar_t *v9; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  char *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  const wchar_t *v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  UserData.Ptr = a4;
  v12 = &a5;
  *(_QWORD *)&UserData.Size = 16LL;
  v14 = &a6;
  v15 = 8LL;
  v13 = 4LL;
  if ( a7 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a7[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v17 = v8;
  v18 = 0;
  v9 = L"NULL";
  if ( a7 )
    v9 = a7;
  v16 = v9;
  return EtwWrite(Microsoft_Windows_NDISHandle, &CloseAdapter, a3, 4u, &UserData);
}
