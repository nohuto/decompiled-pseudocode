/*
 * XREFs of NtOpenSection @ 0x140404CE4
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r14d
  char PreviousMode; // si
  __int64 v7; // rdx
  int v8; // ebx
  __int64 CurrentSilo; // rax
  int v10; // r8d
  NTSTATUS result; // eax
  void *v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)SectionHandle;
    if ( (unsigned __int64)SectionHandle >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = (int)MmSectionObjectType;
  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v10) = PreviousMode;
  result = ObOpenObjectByNameEx(v3, v8, v10, 0, DesiredAccess, 0LL, CurrentSilo, (__int64)&v12);
  *SectionHandle = v12;
  return result;
}
