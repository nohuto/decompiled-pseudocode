/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002998C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180014954 (--1CAudioSession@@MEAA@XZ.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180029A08 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180050130 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800565AC (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18002D440 (-Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(
        void (__fastcall ***this)(AudioSrvVolumeTelemetrySessionVolume *__hidden this, unsigned __int64, unsigned int))
{
  char v1; // di
  void (__fastcall **v4)(AudioSrvVolumeTelemetrySessionVolume *__hidden, unsigned __int64, unsigned int); // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall *v7)(AudioSrvVolumeTelemetrySessionVolume *__hidden, unsigned __int64, unsigned int); // rax

  v1 = 0;
  if ( this[1] )
  {
    v4 = this[1];
    if ( GetTickCount64() - (unsigned __int64)v4 > 0x1F4 )
    {
      v5 = (char *)v4 - (char *)this[2];
      v6 = *((unsigned int *)this + 6);
      v7 = **this;
      if ( v7 == AudioSrvVolumeTelemetrySessionVolume::Fire )
        AudioSrvVolumeTelemetrySessionVolume::Fire((AudioSrvVolumeTelemetrySessionVolume *)this, v5, v6);
      else
        v7((AudioSrvVolumeTelemetrySessionVolume *)this, v5, v6);
      return 1;
    }
  }
  return v1;
}
