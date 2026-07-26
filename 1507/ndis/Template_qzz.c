/*
 * XREFs of Template_qzz @ 0x1C00496A8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qzz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rax
  int v9; // r8d
  const wchar_t *v10; // r10
  const wchar_t *v11; // rax
  bool v12; // zf
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  const wchar_t *v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+98h] [rbp+28h] BYREF

  v21 = a4;
  UserData.Ptr = (unsigned __int64)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v6 = -1LL;
  v7 = 10;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v16 = v9;
  v10 = L"NULL";
  v17 = 0;
  v11 = L"NULL";
  if ( a5 )
    v11 = a5;
  v15 = v11;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v7 = 2 * v6 + 2;
    v12 = a6 == 0LL;
  }
  if ( !v12 )
    v10 = a6;
  v19 = v7;
  v18 = v10;
  v20 = 0;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, &NDIS_PROVIDER_ID, 3u, &UserData);
}
