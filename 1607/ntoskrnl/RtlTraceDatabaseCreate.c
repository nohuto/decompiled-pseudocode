/*
 * XREFs of RtlTraceDatabaseCreate @ 0x1402159B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpTraceDatabaseAllocate @ 0x140215CF4 (RtlpTraceDatabaseAllocate.c)
 */

PRTL_TRACE_DATABASE __stdcall RtlTraceDatabaseCreate(
        ULONG Buckets,
        SIZE_T MaximumSize,
        ULONG Flags,
        ULONG Tag,
        RTL_TRACE_HASH_FUNCTION HashFunction)
{
  PRTL_TRACE_DATABASE result; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  void *v13; // rax
  size_t v14; // r8

  if ( Buckets > 0x100000 )
    return 0LL;
  v10 = RtlpTraceDatabaseAllocate((8LL * Buckets + 4368) & 0xFFFFFFFFFFFFF000uLL, 6LL, Tag);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  v12 = v10 + 216;
  *(_QWORD *)(v10 + 144) = 0LL;
  *(_QWORD *)(v10 + 136) = 0LL;
  *(_DWORD *)(v10 + 4) = Flags | 2;
  *(_DWORD *)v10 = -1412576052;
  *(_DWORD *)(v10 + 8) = Tag;
  *(_QWORD *)(v10 + 24) = MaximumSize;
  *(_QWORD *)(v10 + 32) = 4096LL;
  memset((void *)(v10 + 152), 0, 0x40uLL);
  if ( (*(_DWORD *)(v11 + 4) & 4) != 0 )
  {
    *(_QWORD *)(v11 + 56) = 0LL;
  }
  else
  {
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_DWORD *)(v11 + 72) = 0;
    *(_DWORD *)(v11 + 56) = 1;
    *(_DWORD *)(v11 + 84) = 0;
    *(_WORD *)(v11 + 80) = 1;
    *(_BYTE *)(v11 + 82) = 6;
    *(_QWORD *)(v11 + 96) = v11 + 88;
    *(_QWORD *)(v11 + 88) = v11 + 88;
  }
  v13 = HashFunction;
  *(_DWORD *)(v11 + 112) = Buckets;
  if ( !HashFunction )
    v13 = RtlStackTraceHashFunction;
  *(_QWORD *)(v11 + 128) = v13;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_DWORD *)v12 = -1412580421;
  *(_QWORD *)(v12 + 8) = v11;
  *(_QWORD *)(v12 + 24) = 4096LL;
  v14 = 8LL * *(unsigned int *)(v11 + 112);
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 120) = v12 + 56;
  memset((void *)(v12 + 56), 0, v14);
  *(_QWORD *)(v12 + 32) = v11;
  *(_QWORD *)(v12 + 40) = v11 + 4096;
  result = (PRTL_TRACE_DATABASE)v11;
  *(_QWORD *)(v12 + 48) = v12 + 8 * (*(unsigned int *)(v11 + 112) + 7LL);
  return result;
}
