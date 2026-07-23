/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1404B5B90
 * Callers:
 *     NtUnmapViewOfSection @ 0x140540D0C (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( BaseAddress > MmHighestUserAddress && PreviousMode == 1 )
    return -1073741799;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v7 = MiUnmapViewOfSection(Object, BaseAddress, Flags);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v7;
  }
  return result;
}
