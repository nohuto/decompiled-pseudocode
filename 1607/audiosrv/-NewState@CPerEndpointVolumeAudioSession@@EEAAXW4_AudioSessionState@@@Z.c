/*
 * XREFs of ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180002700
 * Callers:
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180013BCC (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180002D3C (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::NewState(
        CPerEndpointVolumeAudioSession *this,
        enum _AudioSessionState a2)
{
  int v2; // ebx

  v2 = *((_DWORD *)this + 118);
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  CAudioSession::NewState(this, a2);
  if ( v2 != 2 )
  {
    if ( a2 != AudioSessionStateExpired )
      goto LABEL_8;
    goto LABEL_3;
  }
  if ( a2 == AudioSessionStateExpired )
  {
LABEL_3:
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        91LL,
        &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107));
    }
    CPerEndpointVolumeAudioSession::DestroyVolumeStrip(this);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      90LL,
      &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)this + 107));
  }
  CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL);
LABEL_8:
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 92LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
  }
  CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
