/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C0104510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = *(_QWORD *)(EnterSharedCrit(0LL, 1LL) + 400);
  v3 = a1 | (a1 << 16);
  v4 = v3 & *(_DWORD *)(v2 + 4);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
