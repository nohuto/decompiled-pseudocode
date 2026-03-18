/*
 * XREFs of NtOpenThread @ 0x14046F934
 * Callers:
 *     <none>
 * Callees:
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 */

NTSTATUS __stdcall NtOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenThread(
           (_DWORD)ThreadHandle,
           DesiredAccess,
           (_DWORD)ObjectAttributes,
           (_DWORD)ClientId,
           PreviousMode,
           PreviousMode);
}
