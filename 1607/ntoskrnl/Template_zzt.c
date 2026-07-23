/*
 * XREFs of Template_zzt @ 0x1401D0C88
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzt(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5, char a6)
{
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rax
  ULONG v9; // edx
  const wchar_t *v10; // r10
  const wchar_t *v11; // rax
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  char *v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  v6 = -1LL;
  v7 = 10;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  UserData.Size = v9;
  v10 = L"NULL";
  UserData.Reserved = 0;
  v11 = L"NULL";
  if ( a4 )
    v11 = a4;
  UserData.Ptr = (ULONGLONG)v11;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
    v12 = a5 == 0LL;
  }
  if ( !v12 )
    v10 = a5;
  v16 = v7;
  v15 = v10;
  v18 = &a6;
  v17 = 0;
  v19 = 4LL;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_CfgMgr_DeviceList_Start, 0LL, 3u, &UserData);
}
