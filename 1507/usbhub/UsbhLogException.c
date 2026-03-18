/*
 * XREFs of UsbhLogException @ 0x1C004F4A0
 * Callers:
 *     UsbhExceptionWorker @ 0x1C004F2B0 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 *__fastcall UsbhLogException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rsi
  _DWORD *v6; // rdi
  __int64 **v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  unsigned __int32 v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = FdoExt(a1, a2, a3, a4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6 + 609, &LockHandle);
  v7 = (__int64 **)(v6 + 1214);
  v8 = (_QWORD *)(a2 + 48);
  v9 = (_QWORD *)*((_QWORD *)v6 + 608);
  *v8 = v6 + 1214;
  v8[1] = v9;
  if ( (_DWORD *)*v9 != v6 + 1214 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v6 + 608) = v8;
  v10 = _InterlockedIncrement(v6 + 1220);
  if ( v10 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) && *v7 != (__int64 *)v7 )
  {
    v11 = *v7;
    v12 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v7 = (__int64 *)v12;
    v5 = v11 - 6;
    *(_QWORD *)(v12 + 8) = v7;
    _InterlockedDecrement(v6 + 1220);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
