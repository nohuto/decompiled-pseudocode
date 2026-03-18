/*
 * XREFs of PpmGetIdleGenerationCounter @ 0x14012E660
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x1401242B4 (PpmContinueTimeAccumulation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetIdleGenerationCounter(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rcx

  _m_prefetchw((const void *)(a1 + 23840));
  v2 = *(_QWORD *)(a1 + 23840);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v2, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  if ( v2 && *(_DWORD *)(a1 + 24024) == 3 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 24592) + 8LL * DWORD2(xmmword_140332008)) >> 1) & -(__int64)((*(_QWORD *)(*(_QWORD *)(a1 + 24592) + 8LL * DWORD2(xmmword_140332008)) & 1) != 0);
  return v4;
}
