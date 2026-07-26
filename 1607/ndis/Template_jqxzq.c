/*
 * XREFs of Template_jqxzq @ 0x1C0062EEC
 * Callers:
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // ecx
  const wchar_t *v10; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v13; // [rsp+40h] [rbp-19h]
  __int64 v14; // [rsp+48h] [rbp-11h]
  char *v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  const wchar_t *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  char *v20; // [rsp+70h] [rbp+17h]
  __int64 v21; // [rsp+78h] [rbp+1Fh]

  UserData.Ptr = a4;
  v13 = &a5;
  v15 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v14 = 4LL;
  v16 = 8LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v18 = v9;
  v19 = 0;
  v10 = L"NULL";
  if ( a7 )
    v10 = a7;
  v21 = 4LL;
  v17 = v10;
  v20 = &a8;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 5u, &UserData);
}
