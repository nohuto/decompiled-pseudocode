/*
 * XREFs of IoGetContainerInformation @ 0x1406244C8
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     MmGetIoSessionState @ 0x1405488E4 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // zf
  int v11; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v8, v9);
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState((__int64)SessionObjectById, &v11);
  v10 = v11 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v11;
  *((_BYTE *)Buffer + 8) = v10;
  return 0;
}
