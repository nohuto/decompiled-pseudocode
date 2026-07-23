/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1404E2AE0
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1404C1D40 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404E22E4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectIsEnumerable @ 0x1404E4210 (PiDmObjectIsEnumerable.c)
 *     PiDmListAddObject @ 0x1404E8EF4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiDmListAddList @ 0x14062F9D4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x14062FBC8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FDBC (PiDmListRemoveObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
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
