/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059020
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055678 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 **v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( !*((_DWORD *)this + 4) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 1858LL;
    WdLogEvent5_WdAssertion(v11);
  }
  --*((_DWORD *)this + 4);
  v6 = a2 + 4;
  v7 = a2[4];
  v8 = (__int64 **)a2[5];
  if ( *(_QWORD **)(v7 + 8) != a2 + 4 || *v8 != v6 )
    __fastfail(3u);
  *v8 = (__int64 *)v7;
  v9 = (__int64 *)((char *)this + 56);
  *(_QWORD *)(v7 + 8) = v8;
  v10 = *v9;
  *v6 = *v9;
  a2[5] = v9;
  if ( *(__int64 **)(v10 + 8) != v9 )
    __fastfail(3u);
  *(_QWORD *)(v10 + 8) = v6;
  *v9 = (__int64)v6;
  *(_DWORD *)a2 = 3;
}
