/*
 * XREFs of Template_zq @ 0x180010FF0
 * Callers:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x180001D80 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-38h] BYREF
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  v5.Ptr = (ULONGLONG)L"DevPlat::Shared::BindToRPCServerInSession";
  v5.Reserved = 0;
  v5.Size = 84;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return EventWrite(0LL, &ExecGenericTraceFunctionError, 2u, &v5);
}
