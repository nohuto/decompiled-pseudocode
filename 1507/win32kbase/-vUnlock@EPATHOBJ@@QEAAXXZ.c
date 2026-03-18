/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0026110
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C00B0240 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00BF648 (--1EPATHOBJGC@@QEAA@XZ.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C00261A0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct HOBJ__ **v3; // rcx
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
      v3 = (struct HOBJ__ **)*((_QWORD *)this + 1);
      v4 = *v3;
      HmgDecrementShareReferenceCount(v3);
      if ( HmgRemoveObjectImpl(v4, 0, 0, 1u, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeObject(*((_QWORD *)this + 1), 7LL);
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
