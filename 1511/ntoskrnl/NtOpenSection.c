/*
 * XREFs of NtOpenSection @ 0x140422110
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  _QWORD *v6; // rdx
  NTSTATUS result; // eax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes )
  {
    v6 = SectionHandle;
    if ( (unsigned __int64)SectionHandle >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  result = ObOpenObjectByName(
             v3,
             (_DWORD)MmSectionObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v8);
  *SectionHandle = v8;
  return result;
}
