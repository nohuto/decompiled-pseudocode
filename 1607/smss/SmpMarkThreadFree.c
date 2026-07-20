/*
 * XREFs of SmpMarkThreadFree @ 0x14000459C
 * Callers:
 *     SmpApiCallback @ 0x1400039F0 (SmpApiCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpMarkThreadFree(__int64 a1)
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
