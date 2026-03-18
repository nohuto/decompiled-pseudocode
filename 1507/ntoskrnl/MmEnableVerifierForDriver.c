/*
 * XREFs of MmEnableVerifierForDriver @ 0x140735D38
 * Callers:
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
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
