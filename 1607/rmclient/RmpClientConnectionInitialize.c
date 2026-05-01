/*
 * XREFs of RmpClientConnectionInitialize @ 0x180009BE4
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x180009A28 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(_QWORD *a1)
{
  _QWORD *v2; // rax

  memset_0(a1, 0, 0x50uLL);
  memset_0(a1 + 3, 0, 0x38uLL);
  a1[6] = 0LL;
  a1[7] = 0LL;
  RtlInitializeSRWLock(a1 + 4);
  a1[9] = a1 + 8;
  a1[8] = a1 + 8;
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = (_QWORD *)qword_180016678;
  if ( *(__int64 **)qword_180016678 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *a1 = &RmpClientConnectionListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_180016678 = (__int64)a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
