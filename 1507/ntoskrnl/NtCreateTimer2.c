/*
 * XREFs of NtCreateTimer2 @ 0x140470F5C
 * Callers:
 *     NtCreateIRTimer @ 0x14058454C (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ExpCheckIRTimerAccess @ 0x140557A34 (ExpCheckIRTimerAccess.c)
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
  _QWORD *p_Lock; // rcx
  int inserted; // ecx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  v5 = Attributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 && !KeGetCurrentThread()->ApcState.Process->SecurePid )
    return -1073741790;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  if ( !p_Lock[90] )
  {
    p_Lock = TimerHandle;
    if ( (unsigned __int64)TimerHandle >= MmUserProbeAddress )
      p_Lock = (_QWORD *)MmUserProbeAddress;
    *p_Lock = *p_Lock;
  }
  if ( Attributes != 8 && Attributes != 2 )
    return -1073741582;
  if ( (Attributes & 2) == 0 || (LOBYTE(p_Lock) = PreviousMode, result = ExpCheckIRTimerAccess(p_Lock), result >= 0) )
  {
    LOBYTE(Attributes) = 1;
    LOBYTE(p_Lock) = 1;
    inserted = ObCreateObject(
                 (_DWORD)p_Lock,
                 (_DWORD)ExpIRTimerObjectType,
                 0,
                 Attributes,
                 0,
                 136,
                 0,
                 0,
                 (__int64)&Object);
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
