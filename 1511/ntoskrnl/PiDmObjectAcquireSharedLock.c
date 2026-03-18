/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x14043E03C
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14043D764 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14043EA04 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14043F444 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectIsEnumerable @ 0x14044046C (PiDmObjectIsEnumerable.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14045CD10 (PiDmObjectGetCachedObjectReference.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1404E4F54 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140518AC0 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140605934 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140605B28 (PiDmListRemoveObject.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)a1, v3, (ULONG_PTR)a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
