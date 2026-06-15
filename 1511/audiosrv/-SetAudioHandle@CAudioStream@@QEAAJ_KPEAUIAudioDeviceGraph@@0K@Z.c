/*
 * XREFs of ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x180064B70
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        __int64 a2,
        struct IAudioDeviceGraph *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r14

  *((_QWORD *)this + 6) = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64, struct IAudioDeviceGraph *))(*(_QWORD *)v6 + 16LL))(
      *((_QWORD *)this + 7),
      a2,
      a3);
  *((_QWORD *)this + 7) = a4;
  if ( a4 )
  {
    *((_DWORD *)this + 47) = a5;
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 192LL))(
             a4,
             0LL,
             a5,
             0xFFFFFFFFLL);
  }
  return v5;
}
