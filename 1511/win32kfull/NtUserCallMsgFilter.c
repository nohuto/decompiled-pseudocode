/*
 * XREFs of NtUserCallMsgFilter @ 0x1C00F14B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxCallMsgFilter @ 0x1C01E75E4 (xxxCallMsgFilter.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _OWORD v9[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v9, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v4 = (_OWORD *)W32UserProbeAddress;
  *v4 = *v4;
  v4[1] = v4[1];
  v4[2] = v4[2];
  v9[0] = *a1;
  v9[1] = a1[1];
  v9[2] = a1[2];
  if ( (DWORD2(v9[0]) & 0xFFFE0000) != 0 )
  {
    v7 = 0;
    UserSetLastError(87);
  }
  else
  {
    v7 = xxxCallMsgFilter(v9, a2);
    *a1 = v9[0];
    a1[1] = v9[1];
    a1[2] = v9[2];
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
