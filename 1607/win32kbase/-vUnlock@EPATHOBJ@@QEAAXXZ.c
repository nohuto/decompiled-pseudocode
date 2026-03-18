/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0047300
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0047A90 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C00BE1E0 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00CCEA4 (--1EPATHOBJGC@@QEAA@XZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0047390 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  unsigned int *v3; // rcx
  struct HOBJ__ *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 88) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      *(_DWORD *)(v2 + 96) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = *(_DWORD *)this;
      v3 = (unsigned int *)*((_QWORD *)this + 1);
      v4 = *(struct HOBJ__ **)v3;
      HmgDecrementShareReferenceCount(v3);
      if ( HmgRemoveObjectImpl(v4, 0, 0, 1u, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeObject(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
