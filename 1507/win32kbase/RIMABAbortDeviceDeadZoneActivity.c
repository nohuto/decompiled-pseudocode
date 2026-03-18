/*
 * XREFs of RIMABAbortDeviceDeadZoneActivity @ 0x1C00D1FE0
 * Callers:
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 * Callees:
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D2328 (RIMABAssessContactForArbitrationSuspension.c)
 */

__int64 __fastcall RIMABAbortDeviceDeadZoneActivity(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax

  v3 = 0;
  v4 = 0;
  if ( !*(_DWORD *)(a2 + 704) )
    return 0;
  v8 = 1;
  do
  {
    v9 = 2400LL * v4;
    v10 = *(_QWORD *)(a2 + 680);
    if ( *(_DWORD *)(v9 + v10 + 2336)
      && (*(_DWORD *)(v9 + v10 + 2392) & 0x20) == 0
      && !(unsigned int)RIMABAssessContactForArbitrationSuspension(a1, a2, v4, a3) )
    {
      ++v3;
    }
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 704) );
  if ( !v3 )
    return 0;
  return v8;
}
