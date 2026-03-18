/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C006FC98
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00702E8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0070D60 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax

  v4 = *((_QWORD *)this + 26);
  if ( v4 < v4 - a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, v4, a4);
    *(_QWORD *)(v7 + 24) = 237LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + 26) -= a2;
  v8 = 264LL * *((unsigned int *)this + 93);
  v9 = *((_QWORD *)this + 1);
  v10 = *((int *)this + 108);
  v11 = *(_QWORD *)(v9 + 40832) + v8;
  v12 = *(_QWORD *)(v11 + 8 * v10 + 232);
  if ( v12 < v12 - a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, a2, v4, a4);
    *(_QWORD *)(v13 + 24) = 244LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)(v11 + 8 * v10 + 232) -= a2;
}
