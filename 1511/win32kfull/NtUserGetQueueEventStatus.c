/*
 * XREFs of NtUserGetQueueEventStatus @ 0x1C00ECB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetQueueEventStatus()
{
  __int64 v0; // rcx
  int v1; // ebx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v0 = *(_QWORD *)(EnterSharedCrit(0LL, 1LL) + 400);
  v1 = *(unsigned __int16 *)(v0 + 6);
  v2 = *(unsigned __int16 *)(v0 + 4);
  v3 = (v2 | (v1 << 16)) & 0x20002000;
  UserSessionSwitchLeaveCrit(v2, v4);
  return v3;
}
