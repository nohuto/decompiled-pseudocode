/*
 * XREFs of MmEnableVerifierForDriver @ 0x14070188C
 * Callers:
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140483400 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x14048342C (MmAcquireLoadLock.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 */

__int64 __fastcall MmEnableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  struct _KTHREAD *Lock; // rdi

  *a2 = 0;
  v2 = a2;
  Lock = MmAcquireLoadLock();
  LODWORD(v2) = VfDriverEnableVerifier(a1, 0LL, v2);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
