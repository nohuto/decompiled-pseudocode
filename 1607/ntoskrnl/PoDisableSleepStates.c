/*
 * XREFs of PoDisableSleepStates @ 0x14066BE6C
 * Callers:
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v8; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64536F50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = a1;
    *((_DWORD *)PoolWithTag + 5) = a2;
    ExAcquireFastMutex(&PopDisableSleepMutex);
    v8 = (_QWORD *)qword_140304A88;
    if ( *(__int64 **)qword_140304A88 != &PopDisableSleepList )
      __fastfail(3u);
    *PoolWithTag = &PopDisableSleepList;
    PoolWithTag[1] = v8;
    *v8 = PoolWithTag;
    qword_140304A88 = (__int64)PoolWithTag;
    KeReleaseGuardedMutex(&PopDisableSleepMutex);
    *a3 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
