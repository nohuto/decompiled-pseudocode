/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x14041BF20
 * Callers:
 *     NtUnmapViewOfSection @ 0x1404B1F1C (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 */

NTSTATUS __fastcall NtUnmapViewOfSectionEx(void *a1, unsigned __int64 a2, int a3)
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
    v7 = MiUnmapViewOfSection((_KPROCESS *)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v7;
  }
  return result;
}
