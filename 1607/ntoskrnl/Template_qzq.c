/*
 * XREFs of Template_qzq @ 0x1401CCB84
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qzq(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, char a6)
{
  __int64 v6; // rax
  int v7; // edx
  const wchar_t *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  char *v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+98h] [rbp+28h] BYREF

  v16 = a4;
  UserData.Ptr = (ULONGLONG)&v16;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v12 = v7;
  v8 = L"NULL";
  v13 = 0;
  if ( a5 )
    v8 = a5;
  v15 = 4LL;
  v11 = v8;
  v14 = &a6;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DriverOverride_SetOverride, 0LL, 3u, &UserData);
}
