/*
 * XREFs of HvpViewMapAcquireLockShared @ 0x1401B67C0
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 *     CmpDoSystemCacheRead @ 0x140603F98 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FA68 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x14060FB24 (HvViewMapFlush.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall HvpViewMapAcquireLockShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (volatile signed __int64 *)(a1 + 8);
  v3 = KeAbPreAcquire(a1 + 8, 0LL, 0);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v2, v3, (ULONG_PTR)v2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
