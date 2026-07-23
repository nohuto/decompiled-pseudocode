/*
 * XREFs of Template_zjqq @ 0x1401CE134
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zjqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  ULONG v8; // ecx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  char *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  char *v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]

  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  UserData.Size = v8;
  v9 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v9 = a4;
  v13 = 16LL;
  UserData.Ptr = (ULONGLONG)v9;
  v12 = a5;
  v14 = &a6;
  v16 = &a7;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 4u, &UserData);
}
