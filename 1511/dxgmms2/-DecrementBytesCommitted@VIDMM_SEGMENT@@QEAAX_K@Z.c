/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0055A2C
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0055750 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0055BC0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = *((_QWORD *)this + 26);
  if ( v4 < v4 - a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, v4, a4);
    *(_QWORD *)(v12 + 24) = 237LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_QWORD *)this + 26) -= a2;
  v7 = 264LL * *((unsigned int *)this + 93);
  v8 = *((_QWORD *)this + 1);
  v9 = *((int *)this + 108);
  v10 = *(_QWORD *)(v8 + 40888) + v7;
  v11 = *(_QWORD *)(v10 + 8 * v9 + 232);
  if ( v11 < v11 - a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, a2, v4, a4);
    *(_QWORD *)(v13 + 24) = 244LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)(v10 + 8 * v9 + 232) -= a2;
}
