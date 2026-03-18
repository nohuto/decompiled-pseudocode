/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x1400CAF20
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x1400CAEBC (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140074A60 (IopAllocateFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400CC3B4 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140166CC0 (memset.c)
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
    v2 = IopSetTypeSpecificFoExtension(v8, 6LL, FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, FileObjectExtension);
  }
  return (unsigned int)v2;
}
