/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00762FC
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070C80 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 **v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rcx

  if ( !*((_DWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1751LL;
    WdLogEvent5_WdAssertion(v6);
  }
  --*((_DWORD *)this + 4);
  v7 = a2 + 4;
  v8 = a2[4];
  v9 = (__int64 **)a2[5];
  if ( *(_QWORD **)(v8 + 8) != a2 + 4 || *v9 != v7 )
    __fastfail(3u);
  *v9 = (__int64 *)v8;
  v10 = (__int64 *)((char *)this + 56);
  *(_QWORD *)(v8 + 8) = v9;
  v11 = *v10;
  *v7 = *v10;
  a2[5] = v10;
  if ( *(__int64 **)(v11 + 8) != v10 )
    __fastfail(3u);
  *(_QWORD *)(v11 + 8) = v7;
  *v10 = (__int64)v7;
  *(_DWORD *)a2 = 3;
}
