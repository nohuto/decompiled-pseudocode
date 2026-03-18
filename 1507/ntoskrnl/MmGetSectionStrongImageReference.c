/*
 * XREFs of MmGetSectionStrongImageReference @ 0x1406AA510
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeGetStrongImageReference @ 0x1406D07B4 (SeGetStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, PVOID a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  int StrongImageReference; // ebx
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 )
  {
    result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, 0, &v11, 0LL);
    a2 = v11;
    if ( result < 0 )
      return result;
  }
  v7 = MiSectionControlArea((__int64)a2);
  if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 || (*(_DWORD *)(v7 + 92) & 0xC000000) == 0 )
  {
    StrongImageReference = -1073741811;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(v7 + 96);
  if ( *(_QWORD *)(v9 + 16) )
    goto LABEL_8;
  StrongImageReference = SeGetStrongImageReference(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL, &v12, v8);
  if ( StrongImageReference >= 0 )
  {
    *(_QWORD *)(v9 + 16) = v12;
LABEL_8:
    StrongImageReference = 0;
    *a3 = *(_QWORD *)(v9 + 16);
  }
LABEL_10:
  if ( a1 )
    ObfDereferenceObject(a2);
  return StrongImageReference;
}
