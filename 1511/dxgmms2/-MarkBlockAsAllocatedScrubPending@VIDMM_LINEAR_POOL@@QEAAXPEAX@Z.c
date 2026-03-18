/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C008A208
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx

  a2[3] |= 1uLL;
  *(_DWORD *)a2 = 5;
  v2 = a2 + 4;
  v3 = *v2;
  v4 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD *)((char *)this + 56);
  v6 = *((_QWORD *)this + 7);
  *v2 = v6;
  v2[1] = v5;
  if ( *(_QWORD **)(v6 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v2;
  *v5 = v2;
}
