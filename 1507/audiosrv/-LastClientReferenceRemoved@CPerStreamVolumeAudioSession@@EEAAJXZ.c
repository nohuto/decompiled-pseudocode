/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180013780
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000F0D0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800350A4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003543C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xA0u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
  }
  if ( *((_BYTE *)this + 784) && (int)CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this) >= 0 )
  {
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
  return 0LL;
}
