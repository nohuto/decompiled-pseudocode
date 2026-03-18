/*
 * XREFs of ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800508D4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x1800509D4 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180050AD4 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x180050BC4 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z.c)
 *     ?MilResource_SendCommandBitmapSourceEx@@YAJIPEAUIWICBitmap@@PEAUMIL_CHANNEL__@@@Z @ 0x18005F520 (-MilResource_SendCommandBitmapSourceEx@@YAJIPEAUIWICBitmap@@PEAUMIL_CHANNEL__@@@Z.c)
 *     ?MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x180060690 (-MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800632B0 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004FC24 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800500A0 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SendCommand(CChannel *this, void *a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CChannel::BeginCommand(this, a2, a3, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Fu);
  }
  else if ( *((_BYTE *)this + 233) )
  {
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
    *((_BYTE *)this + 233) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    return 0;
  }
  else
  {
    v5 = -2003303406;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x150u);
  }
  return v5;
}
