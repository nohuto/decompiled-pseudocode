/*
 * XREFs of Template_zqq @ 0x1800051EC
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  ULONG v6; // ecx
  const wchar_t *v7; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  char *v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  UserData.Size = v6;
  v7 = L"NULL";
  if ( a3 )
    v7 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v7;
  v11 = 4LL;
  v10 = &v14;
  v13 = 4LL;
  v12 = &a5;
  return EventWrite(Microsoft_Windows_AudioHandle, a2, 3u, &UserData);
}
