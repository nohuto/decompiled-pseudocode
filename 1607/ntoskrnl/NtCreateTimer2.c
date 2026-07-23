/*
 * XREFs of NtCreateTimer2 @ 0x1404701BC
 * Callers:
 *     NtCreateIRTimer @ 0x140548DD0 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ExpCheckIRTimerAccess @ 0x1404D03D8 (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  ULONG v5; // edi
  char PreviousMode; // dl
  __int64 Process; // rcx
  int inserted; // ecx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  v5 = Attributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 && !KeGetCurrentThread()->ApcState.Process->SecurePid )
    return -1073741790;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( !*(_QWORD *)(Process + 720) )
  {
    Process = (__int64)TimerHandle;
    if ( (unsigned __int64)TimerHandle >= 0x7FFFFFFF0000LL )
      Process = 0x7FFFFFFF0000LL;
    *(_QWORD *)Process = *(_QWORD *)Process;
  }
  if ( Attributes != 8 && Attributes != 2 )
    return -1073741582;
  if ( (Attributes & 2) == 0 || (LOBYTE(Process) = PreviousMode, result = ExpCheckIRTimerAccess(Process), result >= 0) )
  {
    LOBYTE(Attributes) = 1;
    LOBYTE(Process) = 1;
    inserted = ObCreateObject(Process, (_DWORD)ExpIRTimerObjectType, 0, Attributes, 0, 136, 0, 0, (__int64)&Object);
    if ( inserted >= 0 )
    {
      KeInitializeTimer2((__int64)Object, 0LL, 0LL, v5);
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      LODWORD(Object) = inserted;
      if ( inserted >= 0 )
        *TimerHandle = Handle;
    }
    return inserted;
  }
  return result;
}
