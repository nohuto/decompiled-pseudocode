/*
 * XREFs of IoGetContainerInformation @ 0x1405FA980
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     MmGetIoSessionState @ 0x14050D000 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  int CurrentProcessSessionId; // eax
  bool v8; // zf
  int v9; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState((__int64)SessionObjectById, &v9);
  v8 = v9 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v9;
  *((_BYTE *)Buffer + 8) = v8;
  return 0;
}
