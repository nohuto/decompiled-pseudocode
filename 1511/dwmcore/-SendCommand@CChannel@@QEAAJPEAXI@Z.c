/*
 * XREFs of ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800A0600
 * Callers:
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x1800A1208 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800A1308 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?MilResource_SendCommandBitmapSourceEx@@YAJIPEAUIWICBitmap@@PEAUMIL_CHANNEL__@@@Z @ 0x1800A3740 (-MilResource_SendCommandBitmapSourceEx@@YAJIPEAUIWICBitmap@@PEAUMIL_CHANNEL__@@@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800A3C30 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x1800B26E0 (-MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?EndCommand@CChannel@@QEAAJXZ @ 0x1800A0B50 (-EndCommand@CChannel@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::SendCommand(CChannel *this, void *a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CChannel::BeginCommand(this, a2, a3, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Fu);
  }
  else
  {
    v6 = CChannel::EndCommand(this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x150u);
  }
  return v5;
}
