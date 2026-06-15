/*
 * XREFs of ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18004F364
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        __int64 a2,
        struct IAudioDeviceGraph *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx

  *((_QWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 7);
  v7 = 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, struct IAudioDeviceGraph *))(*(_QWORD *)v6 + 16LL))(v6, a2, a3);
  *((_QWORD *)this + 7) = a4;
  if ( a4 )
  {
    *((_DWORD *)this + 87) = a5;
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 192LL))(
             a4,
             0LL,
             a5,
             0xFFFFFFFFLL);
  }
  return v7;
}
