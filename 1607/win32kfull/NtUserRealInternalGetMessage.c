/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C0106A10
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int Message; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  _OWORD v16[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((__int64)v16, a2, a3, a4, a5, a6);
    HIDWORD(v16[0]) = 0;
    HIDWORD(v16[2]) = 0;
    v13 = v16[1];
    v14 = v16[2];
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    *a1 = v16[0];
    a1[1] = v13;
    a1[2] = v14;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return Message;
}
