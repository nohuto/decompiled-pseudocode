/*
 * XREFs of VidSchiComputeWorkerThreadPriority @ 0x1C002F060
 * Callers:
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C002EF10 (VidSchiAdjustWorkerThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeWorkerThreadPriority(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v6; // r8d
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rcx

  if ( a2 < 15 )
    a2 = 15;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(_DWORD *)(a1 + 384);
  if ( v4 != a2 )
  {
    v6 = 0;
    if ( v4 > 15 )
    {
      v8 = v4 - 16;
      if ( (*(_DWORD *)(v3 + 4 * v8 + 2080))-- == 1 )
      {
        v6 = 1;
        *(_DWORD *)(v3 + 2076) &= ~(1 << *(_DWORD *)(a1 + 384));
      }
    }
    if ( a2 > 15 )
    {
      v10 = a2 - 16;
      if ( ++*(_DWORD *)(v3 + 4 * v10 + 2080) == 1 )
      {
        v6 = 1;
        *(_DWORD *)(v3 + 2076) |= 1 << a2;
      }
    }
    *(_DWORD *)(a1 + 384) = a2;
    if ( v6 )
    {
      v7 = *(_DWORD *)(v3 + 2076);
      if ( v7 )
        *(_DWORD *)(v3 + 168) = RtlFindMostSignificantBit(v7);
      else
        *(_DWORD *)(v3 + 168) = 15;
    }
  }
  return *(unsigned int *)(v3 + 168);
}
