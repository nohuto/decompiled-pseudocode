/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1400578B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v7; // rcx
  int Message; // ebx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  ULONG64 v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]
  __int128 v16; // [rsp+60h] [rbp-18h]

  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
    Message = 0;
  }
  else
  {
    PsGetCurrentThreadWin32Thread(v7);
    LODWORD(v13) = a5;
    Message = xxxRealInternalGetMessage((__int64)v14, v13, a6);
    HIDWORD(v14[1]) = 0;
    HIDWORD(v16) = 0;
    v9 = v15;
    v10 = v16;
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)v14;
    a1[1] = v9;
    a1[2] = v10;
  }
  UserSessionSwitchLeaveCrit(v11);
  return Message;
}
