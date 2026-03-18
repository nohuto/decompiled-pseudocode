/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1404FFB50
 * Callers:
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1404DE73C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140500AB8 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectIsEnumerable @ 0x140501280 (PiDmObjectIsEnumerable.c)
 *     PiDmListAddObject @ 0x140505F64 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x14062F920 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x14062FB14 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FD08 (PiDmListRemoveObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
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
