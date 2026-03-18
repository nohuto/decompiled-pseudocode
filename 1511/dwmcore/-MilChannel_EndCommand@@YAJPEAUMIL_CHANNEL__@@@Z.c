/*
 * XREFs of ?MilChannel_EndCommand@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800A0EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
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
