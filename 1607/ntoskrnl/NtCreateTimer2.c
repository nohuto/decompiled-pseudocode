/*
 * XREFs of NtCreateTimer2 @ 0x1404712EC
 * Callers:
 *     NtCreateIRTimer @ 0x140548890 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DD48 (KeInitializeTimer2.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 *     ExpCheckIRTimerAccess @ 0x1404EE310 (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(HANDLE *a1, __int64 a2, __int64 a3, int a4, ACCESS_MASK DesiredAccess)
{
  int v5; // edi
  char PreviousMode; // dl
  __int64 Process; // rcx
  NTSTATUS inserted; // ecx
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  v5 = a4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 && !KeGetCurrentThread()->ApcState.Process->SecurePid )
    return 3221225506LL;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( !*(_QWORD *)(Process + 720) )
  {
    Process = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      Process = 0x7FFFFFFF0000LL;
    *(_QWORD *)Process = *(_QWORD *)Process;
  }
  if ( a4 != 8 && a4 != 2 )
    return 3221225714LL;
  if ( (a4 & 2) == 0 || (LOBYTE(Process) = PreviousMode, result = ExpCheckIRTimerAccess(Process), (int)result >= 0) )
  {
    LOBYTE(a4) = 1;
    LOBYTE(Process) = 1;
    inserted = ObCreateObject(Process, (_DWORD)ExpIRTimerObjectType, 0, a4, 0, 136, 0, 0, (__int64)&Object);
    if ( inserted >= 0 )
    {
      KeInitializeTimer2((__int64)Object, 0LL, 0LL, v5);
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      LODWORD(Object) = inserted;
      if ( inserted >= 0 )
        *a1 = Handle;
    }
    return (unsigned int)inserted;
  }
  return result;
}
