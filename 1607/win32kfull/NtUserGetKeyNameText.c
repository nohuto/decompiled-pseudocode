/*
 * XREFs of NtUserGetKeyNameText @ 0x1C0213CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetKeyNameText @ 0x1C0229A04 (_GetKeyNameText.c)
 */

__int64 __fastcall NtUserGetKeyNameText(unsigned int a1, volatile void *a2, unsigned int a3)
{
  unsigned int KeyNameText; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a2, 2LL * a3, 2u);
  KeyNameText = GetKeyNameText(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7);
  return KeyNameText;
}
