/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140073CAC
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140073C48 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400718D8 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *FileObjectExtension; // rdi
  char v5; // r9
  __int64 result; // rax
  _QWORD *v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v8);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a1, 6, &v8);
  if ( !FileObjectExtension )
  {
LABEL_7:
    v7 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = v7;
    if ( !v7 )
      return 3221225626LL;
    memset(v7, 0, 0x30uLL);
    v5 = 1;
  }
  FileObjectExtension[5] = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v2 = IopSetTypeSpecificFoExtension(v8, 6u, (signed __int64)FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, FileObjectExtension);
  }
  return (unsigned int)v2;
}
