/*
 * XREFs of IoGetFileObjectFilterContext @ 0x14007B5DC
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14007AFF0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B0F0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14046A554 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax

  v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    if ( !(_BYTE)a3 )
    {
      result = 0LL;
      goto LABEL_6;
    }
    result = IopAllocateFileObjectExtension(a1, 0LL, a3, a4);
    if ( (int)result < 0 )
      goto LABEL_6;
  }
  v7 = *(_QWORD **)(a1 + 208);
  if ( v7 && v7 != IopRevocationExtension )
    v4 = v7[4];
  result = 0LL;
LABEL_6:
  *a2 = v4;
  return result;
}
