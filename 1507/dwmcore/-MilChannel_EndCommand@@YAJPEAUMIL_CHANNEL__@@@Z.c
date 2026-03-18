/*
 * XREFs of ?MilChannel_EndCommand@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x180051030
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004FC24 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilChannel_EndCommand(struct MIL_CHANNEL__ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 233) )
    {
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)a1 + 22));
      *((_BYTE *)a1 + 233) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 184));
    }
    else
    {
      v1 = -2003303406;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1CAu);
    }
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C8u);
  }
  return v1;
}
