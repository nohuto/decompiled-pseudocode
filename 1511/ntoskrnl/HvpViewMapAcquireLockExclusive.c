/*
 * XREFs of HvpViewMapAcquireLockExclusive @ 0x1401AAC78
 * Callers:
 *     HvViewMapPinFile @ 0x1401AAC18 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401AAC50 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x1405EB02C (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1405EB3DC (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall HvpViewMapAcquireLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 8);
  result = KeAbPreAcquire(a1 + 8, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
