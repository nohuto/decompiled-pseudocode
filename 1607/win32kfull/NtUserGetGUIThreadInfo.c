/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00EDF70
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetGUIThreadInfo @ 0x1C00EE078 (_GetGUIThreadInfo.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(int a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  _BYTE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int GUIThreadInfo; // ebx
  _OWORD v11[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v5 = PtiFromThreadId(a1);
    if ( !v5 )
    {
      UserSetLastError(87LL);
      GUIThreadInfo = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  if ( ((PsGetCurrentProcessWow64Process(v4) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= W32UserProbeAddress )
    v6 = (_BYTE *)W32UserProbeAddress;
  *v6 = *v6;
  v6[71] = v6[71];
  LODWORD(v11[0]) = *(_DWORD *)a2;
  GUIThreadInfo = GetGUIThreadInfo(v5, v11);
  if ( GUIThreadInfo )
  {
    *(_OWORD *)a2 = v11[0];
    *(_OWORD *)(a2 + 16) = v11[1];
    *(_OWORD *)(a2 + 32) = v11[2];
    *(_OWORD *)(a2 + 48) = v11[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v11[4];
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  return GUIThreadInfo;
}
