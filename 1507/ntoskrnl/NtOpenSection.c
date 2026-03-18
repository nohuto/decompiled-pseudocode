/*
 * XREFs of NtOpenSection @ 0x14052D710
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  _QWORD *v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = SectionHandle;
    if ( (unsigned __int64)SectionHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSectionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v9);
  *SectionHandle = v9;
  return result;
}
