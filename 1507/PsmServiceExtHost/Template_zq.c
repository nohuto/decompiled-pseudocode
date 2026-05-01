/*
 * XREFs of Template_zq @ 0x18004D2C4
 * Callers:
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022A80 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 *     ?ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z @ 0x18004D1FC (-ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zq(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  ULONG v5; // ecx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  int *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  UserData.Size = v5;
  UserData.Reserved = 0;
  v6 = L"NULL";
  if ( a3 )
    v6 = a3;
  v10 = 4LL;
  UserData.Ptr = (ULONGLONG)v6;
  v9 = &v11;
  return EventWrite(0LL, &ExecGenericTraceFunctionError, 2u, &UserData);
}
