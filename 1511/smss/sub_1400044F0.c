/*
 * XREFs of sub_1400044F0 @ 0x1400044F0
 * Callers:
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400044F0(__int64 a1)
{
  int v2; // esi
  int v3; // edi

  v2 = 0;
  RtlAcquireSRWLockExclusive(a1);
  if ( (unsigned int)(++*(_DWORD *)(a1 + 20) + 1) > *(_DWORD *)(a1 + 16) )
  {
    v3 = *(_DWORD *)(a1 + 20) + 1;
    v2 = TpSetPoolMinThreads(*(_QWORD *)(a1 + 8));
    if ( v2 < 0 )
      --*(_DWORD *)(a1 + 20);
    else
      *(_DWORD *)(a1 + 16) = v3;
  }
  RtlReleaseSRWLockExclusive(a1);
  return (unsigned int)v2;
}
