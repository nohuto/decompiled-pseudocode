/*
 * XREFs of NtUserGetMessage @ 0x1C0059520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C00563CC (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  unsigned int MessageMPH; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rcx
  __int128 v15; // [rsp+48h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-20h]

  v15 = 0uLL;
  v16 = 0uLL;
  v17 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    v10 = 0;
    UserSetLastError(87);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v15, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v15, a2, a3, a4, 1, 1);
    v10 = MessageMPH;
    HIDWORD(v15) = 0;
    HIDWORD(v17) = 0;
    v11 = v16;
    v12 = v17;
    v13 = W32UserProbeAddress;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    *a1 = v15;
    a1[1] = v11;
    a1[2] = v12;
  }
  UserSessionSwitchLeaveCrit(v13, v9);
  return v10;
}
