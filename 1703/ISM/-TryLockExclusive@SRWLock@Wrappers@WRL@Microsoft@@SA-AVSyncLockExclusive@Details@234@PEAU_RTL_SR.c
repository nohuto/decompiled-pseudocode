/*
 * XREFs of ?TryLockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18008F27C
 * Callers:
 *     ?TryLockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18008F2B4 (-TryLockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive(unsigned __int64 *a1)
{
  bool v2; // cf
  unsigned __int64 *result; // rax

  v2 = TryAcquireSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton) != 0;
  result = a1;
  *a1 = (unsigned __int64)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton & -(__int64)v2;
  return result;
}
