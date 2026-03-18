/*
 * XREFs of HvpViewMapAcquireLockExclusive @ 0x1401B6764
 * Callers:
 *     HvViewMapPinFile @ 0x1401B6704 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401B673C (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x14060FAD0 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x14060FC6C (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FE80 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall HvpViewMapAcquireLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 8);
  result = (_BYTE *)KeAbPreAcquire(a1 + 8, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
