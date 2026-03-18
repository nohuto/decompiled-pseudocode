/*
 * XREFs of PoDisableSleepStates @ 0x14051AEE4
 * Callers:
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rbx
  __int64 **v8; // rax

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
    v8 = (__int64 **)qword_1402DF4E8;
    *PoolWithTag = &PopDisableSleepList;
    PoolWithTag[1] = v8;
    if ( *v8 != &PopDisableSleepList )
      __fastfail(3u);
    *v8 = PoolWithTag;
    qword_1402DF4E8 = (__int64)PoolWithTag;
    KeReleaseGuardedMutex(&PopDisableSleepMutex);
    *a3 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
