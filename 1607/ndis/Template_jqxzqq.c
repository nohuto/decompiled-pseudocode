/*
 * XREFs of Template_jqxzqq @ 0x1C0023D8C
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  int v10; // ecx
  const wchar_t *v11; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  char *v14; // [rsp+40h] [rbp-31h]
  __int64 v15; // [rsp+48h] [rbp-29h]
  char *v16; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+58h] [rbp-19h]
  const wchar_t *v18; // [rsp+60h] [rbp-11h]
  int v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+6Ch] [rbp-5h]
  char *v21; // [rsp+70h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  char *v23; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+17h]

  UserData.Ptr = a4;
  v14 = &a5;
  v16 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v15 = 4LL;
  v17 = 8LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  v20 = 0;
  v11 = L"NULL";
  if ( a7 )
    v11 = a7;
  v22 = 4LL;
  v18 = v11;
  v24 = 4LL;
  v21 = &a8;
  v23 = &a9;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 6u, &UserData);
}
