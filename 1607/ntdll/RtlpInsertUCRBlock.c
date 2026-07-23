/*
 * XREFs of RtlpInsertUCRBlock @ 0x18004D01C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x18004CEC0 (RtlpCreateUCREntry.c)
 * Callees:
 *     RtlpUpdateUCRIndexInsert @ 0x18004D0C4 (RtlpUpdateUCRIndexInsert.c)
 *     RtlpFindUCREntry @ 0x18004D120 (RtlpFindUCREntry.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 *v5; // rcx
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rcx
  __int64 **v8; // r8
  __int64 *v9; // rbx
  __int64 result; // rax
  __int64 v11; // r9

  if ( a2[5] )
  {
    UCREntry = RtlpFindUCREntry();
    v5 = *(__int64 **)(UCREntry + 8);
    if ( *v5 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (__int64)v5;
      *v5 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, UCREntry, 0, *v5, 0LL);
    }
    RtlpUpdateUCRIndexInsert(a1, a2);
  }
  v6 = *((_BYTE *)a2 - 2);
  if ( v6 )
    v7 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v6 << 16) + 0x10000;
  else
    v7 = a1;
  v8 = (__int64 **)(v7 + 96);
  v9 = a2 + 2;
  result = *(_QWORD *)(v7 + 96);
  v11 = *(_QWORD *)(result + 8);
  if ( v11 != v7 + 96 )
    return RtlpLogHeapFailure(12, 0, (_DWORD)v8, v11, 0LL, 0LL);
  *v9 = result;
  v9[1] = (__int64)v8;
  *(_QWORD *)(result + 8) = v9;
  *v8 = v9;
  return result;
}
