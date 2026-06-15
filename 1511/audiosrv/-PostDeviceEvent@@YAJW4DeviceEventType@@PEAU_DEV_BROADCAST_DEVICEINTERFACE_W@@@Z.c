/*
 * XREFs of ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009AA60
 * Callers:
 *     ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A964 (-OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A9C0 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ServiceDeviceEvent @ 0x18009AB90 (ServiceDeviceEvent.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A4F8 (-Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall PostDeviceEvent(int a1, unsigned int *a2)
{
  _QWORD *v4; // rdi
  int v5; // esi
  signed int LastError; // eax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    *v4 = &DEVICE_EVENT::`vftable';
    v4[2] = 0LL;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = DEVICE_EVENT::Initialize((__int64)v4, a1, a2);
    if ( v5 >= 0 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
        return (unsigned int)v5;
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, v5);
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
  return (unsigned int)v5;
}
