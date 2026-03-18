/*
 * XREFs of VfZwMapViewOfSection @ 0x1407562B0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *a3,
        ULONG_PTR ZeroBits,
        SIZE_T a5,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT a8,
        ULONG a9,
        ULONG Win32Protect)
{
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  VfCheckPageProtection(Win32Protect, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a3, retaddr);
    ViZwCheckVirtualAddress((int)SectionOffset, retaddr);
    ViZwCheckVirtualAddress((int)ViewSize, retaddr);
  }
  return pXdvZwMapViewOfSection(
           SectionHandle,
           ProcessHandle,
           a3,
           ZeroBits,
           a5,
           SectionOffset,
           ViewSize,
           a8,
           a9,
           Win32Protect);
}
