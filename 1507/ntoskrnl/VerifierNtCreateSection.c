/*
 * XREFs of VerifierNtCreateSection @ 0x140754010
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 */

NTSTATUS __fastcall VerifierNtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        int a5,
        ULONG a6,
        void *a7)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return pXdvNtCreateSection(SectionHandle, DesiredAccess, ObjectAttributes, MaximumSize, a5, a6, a7);
}
