/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1404B5B90
 * Callers:
 *     NtUnmapViewOfSection @ 0x140540D0C (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 */

NTSTATUS __fastcall NtUnmapViewOfSectionEx(void *a1, unsigned __int64 a2, unsigned int a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  int v7; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 > (unsigned __int64)MmHighestUserAddress && PreviousMode == 1 )
    return -1073741799;
  result = ObReferenceObjectByHandleWithTag(
             a1,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v7 = MiUnmapViewOfSection(Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v7;
  }
  return result;
}
