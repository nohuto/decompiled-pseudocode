/*
 * XREFs of ?EndCommand@CChannel@@QEAAJXZ @ 0x1800A0B50
 * Callers:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800A0600 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::EndCommand(CChannel *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)this + 233) )
  {
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
    *((_BYTE *)this + 233) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  else
  {
    v1 = -2003303406;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
  }
  return v1;
}
