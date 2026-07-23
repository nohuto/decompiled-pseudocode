/*
 * XREFs of PiLastGoodRevertCopyCallback @ 0x1407CEE78
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFileUtilRename @ 0x1407B9164 (IopFileUtilRename.c)
 */

__int64 __fastcall PiLastGoodRevertCopyCallback(UNICODE_STRING *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  unsigned __int16 v5; // bx
  wchar_t *PoolWithTag; // rsi
  wchar_t *Buffer; // rax
  __int16 v9; // ax
  unsigned int v10; // ebx
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a4 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, a1->Length, 0x674C7050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  Buffer = a1->Buffer;
  *(_OWORD *)PoolWithTag = *(_OWORD *)Buffer;
  *((_QWORD *)PoolWithTag + 2) = *((_QWORD *)Buffer + 2);
  memmove(PoolWithTag + 12, &a1->Buffer[(unsigned __int64)v5 >> 1], a1->Length - v5);
  v9 = a1->Length - v5;
  v11.Buffer = PoolWithTag;
  v11.Length = v9 + 24;
  v11.MaximumLength = v9 + 24;
  v10 = IopFileUtilRename(a1, &v11, 1);
  ExFreePoolWithTag(PoolWithTag, 0);
  return v10;
}
