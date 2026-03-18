/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00657D0
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064AA0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( !*((_DWORD *)this + 4) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 1866LL;
    WdLogEvent5_WdAssertion(v9);
  }
  --*((_DWORD *)this + 4);
  v4 = a2 + 3;
  v5 = a2[3];
  v6 = (_QWORD *)a2[4];
  if ( *(_QWORD **)(v5 + 8) != a2 + 3 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  v7 = (char *)this + 56;
  *(_QWORD *)(v5 + 8) = v6;
  v8 = *(_QWORD *)v7;
  if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
    __fastfail(3u);
  a2[4] = v7;
  *v4 = v8;
  *(_QWORD *)(v8 + 8) = v4;
  *(_QWORD *)v7 = v4;
  *((_BYTE *)a2 + 56) = 3;
}
