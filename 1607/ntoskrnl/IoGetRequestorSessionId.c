/*
 * XREFs of IoGetRequestorSessionId @ 0x1401306D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 */

NTSTATUS __stdcall IoGetRequestorSessionId(PIRP Irp, PULONG pSessionId)
{
  PETHREAD Thread; // rcx
  int SessionId; // eax
  _DWORD *v4; // rdx

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
  {
    SessionId = MmGetSessionId(Thread->Process);
    *v4 = SessionId;
    return 0;
  }
  else
  {
    *pSessionId = -1;
    return -1073741823;
  }
}
