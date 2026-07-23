/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140078404
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x1400783A0 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14007B640 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _QWORD *FileObjectExtension; // rdi
  char v7; // r9
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  LOBYTE(a4) = 0;
  v10 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v10, a3, a4);
    v4 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a1, 6LL, &v10, a4);
  if ( !FileObjectExtension )
  {
LABEL_7:
    v9 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = v9;
    if ( !v9 )
      return 3221225626LL;
    memset(v9, 0, 0x30uLL);
    v7 = 1;
  }
  FileObjectExtension[5] = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    v4 = IopSetTypeSpecificFoExtension(v10, 6LL, FileObjectExtension);
    if ( v4 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, FileObjectExtension);
  }
  return (unsigned int)v4;
}
