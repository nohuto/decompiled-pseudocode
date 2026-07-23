/*
 * XREFs of Template_zq @ 0x1401CFD4C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14008610C (PnpLogActionQueueEvent.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  ULONG v6; // ecx
  const wchar_t *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  UserData.Size = v6;
  v7 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v7 = a4;
  v11 = 4LL;
  UserData.Ptr = (ULONGLONG)v7;
  v10 = &a5;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 2u, &UserData);
}
