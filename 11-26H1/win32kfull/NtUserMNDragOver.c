/*
 * XREFs of NtUserMNDragOver @ 0x1402B7DC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMNDragOver @ 0x1402F97D8 (xxxMNDragOver.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 a1, void *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int128 Src; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 ULong64FromUser; // [rsp+70h] [rbp+18h] BYREF

  Src = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  ULong64FromUser = RtlReadULong64FromUser(a1);
  v5 = xxxMNDragOver(&ULong64FromUser, &Src);
  if ( v5 )
  {
    DWORD1(Src) = 0;
    DWORD1(v8) = 0;
    RtlCopyToUser(a2, &Src, 0x20uLL);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
