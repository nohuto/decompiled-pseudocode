/*
 * XREFs of NtUserPeekMessage @ 0x1C007F4F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C0104E3C (ClientGetMessageMPH.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, int a2, int a3, int a4, int a5)
{
  int MessageMPH; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-30h]
  __int128 v18; // [rsp+68h] [rbp-20h]

  v16 = 0uLL;
  v17 = 0uLL;
  v18 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    v12 = 0;
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)&v16, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v16, a2, a3, a4, a5, 0);
    v12 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v16) = 0;
      HIDWORD(v18) = 0;
      v13 = v17;
      v14 = v18;
      v11 = W32UserProbeAddress;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (_OWORD *)W32UserProbeAddress;
      *a1 = v16;
      a1[1] = v13;
      a1[2] = v14;
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
