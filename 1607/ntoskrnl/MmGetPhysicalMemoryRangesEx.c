/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x1404C843C
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x1404C8434 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MmGetPhysicalMemoryRangesEx(int **BugCheckParameter2)
{
  int *v1; // rbx
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  if ( BugCheckParameter2 )
  {
    v1 = *BugCheckParameter2;
    if ( (*BugCheckParameter2)[2] != 305535296 || !*((_QWORD *)v1 + 2) || (v1[1] & 1) != 0 )
      KeBugCheckEx(0x1Au, 0x1400uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v1 = MiSystemPartition;
  }
  v2 = (_DWORD *)MiReferencePageRuns((__int64)v1, 0);
  if ( v2 )
    v3 = *((_QWORD *)v1 + 786) != 0LL ? *v2 : 0;
  else
    v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v3 + 1), 0x68506D4Du);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = PoolWithTag;
    if ( v3 )
    {
      v7 = (__int64 *)(v2 + 6);
      v8 = v3;
      do
      {
        *v6 = *(v7 - 1) << 12;
        v9 = *v7;
        v7 += 2;
        v6[1] = v9 << 12;
        v6 += 2;
        --v8;
      }
      while ( v8 );
    }
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  if ( v2 )
    MiDereferencePageRuns((__int64)v2);
  return v5;
}
