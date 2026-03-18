/*
 * XREFs of NtUserTranslateMessage @ 0x14005BD50
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 */

__int64 __fastcall NtUserTranslateMessage(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  _OWORD v7[3]; // [rsp+30h] [rbp-38h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v7[0] = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  v5 = 0;
  if ( ValidateHwnd(*(_QWORD *)&v7[0]) )
    v5 = xxxTranslateMessage(v7, a2);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
