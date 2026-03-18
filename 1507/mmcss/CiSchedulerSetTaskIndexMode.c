/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C0001E30
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A540 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002AA0 (__security_check_cookie.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003880 (CiLogSetTaskIndexMode.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  int v4; // edx
  unsigned int v5; // eax
  __int64 *v6; // rbx
  __int64 *i; // r14
  bool v8; // zf
  HANDLE ThreadId; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  HANDLE v11; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL) & 1) != 0 )
  {
    if ( byte_1C0007298 )
      CiLogSetTaskIndexMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *(_DWORD *)(a1 + 144) |= 1u;
    v4 = (*(_DWORD *)(a1 + 144) >> 1) & 1;
    v5 = *(_DWORD *)(a1 + 144) ^ ((unsigned __int8)*(_DWORD *)(a1 + 144) ^ (unsigned __int8)(2 * (a2 == 1))) & 2;
    *(_DWORD *)(a1 + 144) = v5;
    if ( v4 != ((v5 >> 1) & 1) )
    {
      if ( a2 == 1 && (++CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState )
      {
        CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
        PoNotifyMediaBuffering();
      }
      v6 = *(__int64 **)(a1 + 32);
      for ( i = (__int64 *)(a1 + 32); v6 != i; v6 = (__int64 *)*v6 )
      {
        if ( byte_1C0007298 )
        {
          ThreadId = PsGetThreadId((PETHREAD)v6[2]);
          v10 = (const EVENT_DESCRIPTOR *)&CiThreadBufferingStartEvent;
          v11 = ThreadId;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v11;
          if ( a2 != 1 )
            v10 = &CiThreadBufferingStopEvent;
          EtwWrite(RegHandle, v10, 0LL, 1u, &UserData);
        }
        KeUpdateThreadTag(v6[2], a2);
      }
      if ( a2 != 1 )
      {
        v8 = CiTotalTasksBuffering-- == 1;
        if ( !v8 != CiCurrentMediaBufferingState )
        {
          CiCurrentMediaBufferingState = !v8;
          PoNotifyMediaBuffering();
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
