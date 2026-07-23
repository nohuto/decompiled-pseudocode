/*
 * XREFs of HvpViewMapAcquireLockExclusive @ 0x1401B6648
 * Callers:
 *     HvViewMapPinFile @ 0x1401B65E8 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401B6620 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x14060FB84 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FF34 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
