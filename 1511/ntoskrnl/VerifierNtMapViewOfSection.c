/*
 * XREFs of VerifierNtMapViewOfSection @ 0x1406D05A4
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 */

NTSTATUS __fastcall VerifierNtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T a5,
        LARGE_INTEGER *a6,
        ULONG_PTR *a7,
        SECTION_INHERIT a8,
        ULONG a9,
        int a10)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  return pXdvNtMapViewOfSection(SectionHandle, ProcessHandle, BaseAddress, ZeroBits, a5, a6, a7, a8, a9, a10);
}
