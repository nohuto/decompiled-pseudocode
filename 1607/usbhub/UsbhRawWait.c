/*
 * XREFs of UsbhRawWait @ 0x1C000A000
 * Callers:
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     UsbhPortConnect @ 0x1C0009DC0 (UsbhPortConnect.c)
 *     UsbhAddDevice @ 0x1C000A140 (UsbhAddDevice.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018950 (UsbhSyncPowerOnPorts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhRawWait(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r8
  LARGE_INTEGER v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  union _LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // r8
  bool v9; // cc
  __int64 v10; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v1 = a1;
    if ( dword_1C0067694 == 1
      && (KeInitializeEvent(&Event, NotificationEvent, 0),
          (v2 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), struct _KEVENT *, __int64))g_ExAllocateTimer)(
                  UsbhHighResTimerCompletion,
                  &Event,
                  4LL)) != 0) )
    {
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_ExSetTimer)(v2, -10000LL * (unsigned int)v1, 0LL, 0LL);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LOBYTE(v3) = 1;
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))g_ExDeleteTimer)(v2, 1LL, v3, 0LL);
    }
    else
    {
      v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v5 = ((unsigned __int64)(PerformanceFrequency.QuadPart * v1) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      v6 = v4.QuadPart + ((v5 + ((unsigned __int64)(PerformanceFrequency.QuadPart * v1 - v5) >> 1)) >> 9);
      v14 = v6;
      v7.QuadPart = -10000 * (int)v1;
LABEL_7:
      for ( Interval = v7; ; Interval.QuadPart = -10000LL )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v9 = v8.HighPart <= SHIDWORD(v6);
        if ( v8.HighPart == HIDWORD(v6) )
        {
          if ( v8.LowPart >= (unsigned int)v6 )
            return;
          v9 = v8.HighPart <= SHIDWORD(v6);
        }
        if ( !v9 )
          break;
        v10 = (__int64)(v6 - v8.QuadPart) / (__int64)(PerformanceFrequency.QuadPart / 0x3E8uLL);
        PerformanceFrequency.QuadPart /= 0x3E8uLL;
        if ( (unsigned int)v10 | ((unsigned __int64)((__int64)(v6 - v8.QuadPart) / PerformanceFrequency.QuadPart) >> 32) )
        {
          v7.QuadPart = -10000 * v10;
          goto LABEL_7;
        }
      }
    }
  }
}
