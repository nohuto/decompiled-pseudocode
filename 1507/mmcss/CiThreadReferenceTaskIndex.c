/*
 * XREFs of CiThreadReferenceTaskIndex @ 0x1C0002510
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A2A0 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiReleaseProcessLock @ 0x1C000A000 (CiReleaseProcessLock.c)
 *     CiAcquireProcessLock @ 0x1C000A020 (CiAcquireProcessLock.c)
 */

__int64 __fastcall CiThreadReferenceTaskIndex(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  CiAcquireProcessLock(a1);
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 48)) <= 1 )
      __fastfail(0xEu);
  }
  CiReleaseProcessLock(a1);
  return v2;
}
