/*
 * XREFs of ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0049A4C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C0055828 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(VIDMM_GLOBAL *this)
{
  char v1; // bl
  unsigned int i; // edi
  __int64 v4; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 926); ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * i);
    if ( (*(_DWORD *)(v4 + 56) & 0x1001) != 0 && *(_QWORD *)(v4 + 168) != v4 + 168 )
      v1 |= VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations((VIDMM_SEGMENT *)v4);
  }
  return v1;
}
