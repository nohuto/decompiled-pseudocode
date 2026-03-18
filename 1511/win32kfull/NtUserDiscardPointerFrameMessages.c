/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C0218CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01E18C4 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  int v6; // ecx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( !a1 || HIWORD(a1) )
  {
    v6 = 87;
    goto LABEL_10;
  }
  v4 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v5 = *(_DWORD **)(gptiCurrent + 1112LL);
    if ( !v5 || (*v5 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x100) != 0 )
    {
LABEL_6:
      v6 = 5;
LABEL_10:
      v2 = 0;
      UserSetLastError(v6);
      goto LABEL_11;
    }
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
