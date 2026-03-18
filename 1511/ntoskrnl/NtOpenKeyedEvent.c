/*
 * XREFs of NtOpenKeyedEvent @ 0x140675C24
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenKeyedEvent(PHANDLE OutHandle, ACCESS_MASK AccessMask, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  NTSTATUS result; // eax
  void *v7; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)OutHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *OutHandle = 0LL;
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             ExpKeyedEventObjectType,
             PreviousMode,
             0LL,
             AccessMask,
             0LL,
             &v7);
  if ( result >= 0 )
    *OutHandle = v7;
  return result;
}
