/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180064F54
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18002B8D0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x180065220 (-UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(
        _QWORD *a1,
        _QWORD *a2)
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
  ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode(v2, a2);
}
