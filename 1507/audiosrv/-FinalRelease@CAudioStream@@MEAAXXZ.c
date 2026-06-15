/*
 * XREFs of ?FinalRelease@CAudioStream@@MEAAXXZ @ 0x1800667A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC (-ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CAudioStream@@QEAAJXZ @ 0x180082C18 (-UnregisterStream@CAudioStream@@QEAAJXZ.c)
 */

void __fastcall CAudioStream::FinalRelease(struct IAudioDeviceGraph **this)
{
  if ( !g_UseNewGraphBuilder )
    CAudioStream::UnregisterStream((CAudioStream *)(this - 2));
  CAudioStream::ReleaseSaDevice(this[4]);
  this[4] = 0LL;
}
