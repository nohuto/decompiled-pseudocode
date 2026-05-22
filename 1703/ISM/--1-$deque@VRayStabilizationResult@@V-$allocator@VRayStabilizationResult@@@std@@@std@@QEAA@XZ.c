/*
 * XREFs of ??1?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA@XZ @ 0x18002EF70
 * Callers:
 *     ??1RayStabilizer@@QEAA@XZ @ 0x18002EF54 (--1RayStabilizer@@QEAA@XZ.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>(__int64 a1)
{
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx

  while ( *(_QWORD *)(a1 + 32) )
  {
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate(v4, 1uLL, 0x64uLL);
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    std::_Deallocate(v5, *(_QWORD *)(a1 + 16), 8uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate(*(char **)a1, 1uLL, 0x10uLL);
  *(_QWORD *)a1 = 0LL;
}
