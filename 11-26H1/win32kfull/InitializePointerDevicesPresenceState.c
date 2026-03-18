/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x140139DA0
 * Callers:
 *     <none>
 * Callees:
 *     FreePointerDeviceClientList @ 0x140138E88 (FreePointerDeviceClientList.c)
 *     ClosePointerDeviceProcessEvents @ 0x140138F1C (ClosePointerDeviceProcessEvents.c)
 */

int __fastcall InitializePointerDevicesPresenceState(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_DWORD)a1 )
  {
    v2 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 16704);
    v2[1] = v2;
    *v2 = v2;
  }
  else
  {
    FreePointerDeviceClientList(a1, a2);
    LODWORD(v2) = ClosePointerDeviceProcessEvents(v4, v3);
  }
  return (int)v2;
}
