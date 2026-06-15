/*
 * XREFs of ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18002CC40 (-NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z.c)
 *     ?RemoveSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@PEAH@Z @ 0x18007568C (-RemoveSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@PEAH@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800768A4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x180082D10 (-UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(_QWORD **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(v2, a2);
}
