/*
 * XREFs of AllocateRefCountedBuffer @ 0x1C014726C
 * Callers:
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C006991C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall AllocateRefCountedBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax

  v4 = (unsigned int)a1;
  if ( (int)a1 + 8 >= (unsigned int)a1 )
    return operator new[]((unsigned int)(a1 + 8), 0x4B677844u, (POOL_TYPE)512);
  v6 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  WdLogEvent5_WdWarning(v6);
  return 0LL;
}
