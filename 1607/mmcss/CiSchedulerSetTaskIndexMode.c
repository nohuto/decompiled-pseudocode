/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C00013B0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A2A0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003CE8 (CiLogSetTaskIndexMode.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // eax
  __int64 *v7; // rbx
  __int64 *i; // r14
  bool v9; // zf
  HANDLE ThreadId; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  HANDLE v12; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C0007290 )
      CiLogSetTaskIndexMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *(_DWORD *)(a1 + 184) |= 1u;
    v4 = *(unsigned int *)(a1 + 184);
    v5 = (*(_DWORD *)(a1 + 184) >> 1) & 1;
    v6 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(2 * (a2 == 1))) & 2;
    *(_DWORD *)(a1 + 184) = v6;
    if ( v5 != ((v6 >> 1) & 1) )
    {
      if ( a2 == 1 )
      {
        if ( ++CiTotalTasksBuffering )
          v4 = 1LL;
        else
          LOBYTE(v4) = 0;
        if ( (_BYTE)v4 != CiCurrentMediaBufferingState )
        {
          CiCurrentMediaBufferingState = v4;
          PoNotifyMediaBuffering(v4);
        }
      }
      v7 = *(__int64 **)(a1 + 32);
      for ( i = (__int64 *)(a1 + 32); v7 != i; v7 = (__int64 *)*v7 )
      {
        if ( byte_1C0007290 )
        {
          ThreadId = PsGetThreadId((PETHREAD)v7[2]);
          v11 = (const EVENT_DESCRIPTOR *)&CiThreadBufferingStartEvent;
          v12 = ThreadId;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v12;
          if ( a2 != 1 )
            v11 = &CiThreadBufferingStopEvent;
          EtwWrite(RegHandle, v11, 0LL, 1u, &UserData);
        }
        KeUpdateThreadTag(v7[2], a2);
      }
      if ( a2 != 1 )
      {
        v9 = CiTotalTasksBuffering-- == 1;
        if ( !v9 != CiCurrentMediaBufferingState )
        {
          CiCurrentMediaBufferingState = !v9;
          LOBYTE(v4) = !v9;
          PoNotifyMediaBuffering(v4);
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
