/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0064374
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0064500 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0064BC8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_QWORD *)this + 26) < (unsigned __int64)(*((_QWORD *)this + 26) - a2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 238LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_QWORD *)this + 26) -= a2;
  v4 = 264LL * *((unsigned int *)this + 93);
  v5 = *((_QWORD *)this + 1);
  v6 = *((int *)this + 117);
  v7 = *(_QWORD *)(v5 + 41200) + v4;
  v8 = *(_QWORD *)(v7 + 8 * v6 + 232);
  if ( v8 < v8 - a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, a2);
    *(_QWORD *)(v10 + 24) = 245LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *(_QWORD *)(v7 + 8 * v6 + 232) -= a2;
}
