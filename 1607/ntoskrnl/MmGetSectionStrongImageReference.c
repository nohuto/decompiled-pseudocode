/*
 * XREFs of MmGetSectionStrongImageReference @ 0x140663080
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeGetStrongImageReference @ 0x14068CA5C (SeGetStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, PVOID a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  int StrongImageReference; // ebx
  PVOID v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 )
  {
    result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, 0, &v10, 0LL);
    a2 = v10;
    if ( result < 0 )
      return result;
  }
  v7 = MiSectionControlArea((__int64)a2);
  if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 || (*(_DWORD *)(v7 + 92) & 0xC000000) == 0 )
  {
    StrongImageReference = -1073741811;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(v7 + 96);
  if ( *(_QWORD *)(v8 + 16) )
    goto LABEL_8;
  StrongImageReference = SeGetStrongImageReference(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8uLL, &v11);
  if ( StrongImageReference >= 0 )
  {
    *(_QWORD *)(v8 + 16) = v11;
LABEL_8:
    StrongImageReference = 0;
    *a3 = *(_QWORD *)(v8 + 16);
  }
LABEL_10:
  if ( a1 )
    ObfDereferenceObject(a2);
  return StrongImageReference;
}
