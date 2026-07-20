/*
 * XREFs of sub_14000449C @ 0x14000449C
 * Callers:
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000449C(__int64 a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 20))-- < *(_DWORD *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 20) + 1;
    if ( (int)TpSetPoolMinThreads(*(_QWORD *)(a1 + 8)) >= 0 )
      *(_DWORD *)(a1 + 16) = v2;
  }
  return RtlReleaseSRWLockExclusive(a1);
}
