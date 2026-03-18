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

__int64 __fastcall NtCreateTimer2(HANDLE *a1, __int64 a2, __int64 a3, int a4, ACCESS_MASK DesiredAccess)
{
  int v5; // edi
  char PreviousMode; // dl
  _QWORD *p_Lock; // rcx
  NTSTATUS inserted; // ecx
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  v5 = a4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 && !KeGetCurrentThread()->ApcState.Process->SecurePid )
    return 3221225506LL;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  if ( !p_Lock[90] )
  {
    p_Lock = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      p_Lock = (_QWORD *)MmUserProbeAddress;
    *p_Lock = *p_Lock;
  }
  if ( a4 != 8 && a4 != 2 )
    return 3221225714LL;
  if ( (a4 & 2) == 0 || (LOBYTE(p_Lock) = PreviousMode, result = ExpCheckIRTimerAccess(p_Lock), (int)result >= 0) )
  {
    LOBYTE(a4) = 1;
    LOBYTE(p_Lock) = 1;
    inserted = ObCreateObject((_DWORD)p_Lock, (_DWORD)ExpIRTimerObjectType, 0, a4, 0, 136, 0, 0, (__int64)&Object);
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
