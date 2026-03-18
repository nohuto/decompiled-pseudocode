/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C023EF30
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023EB9C (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  __int64 result; // rax
  int v6; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // xmm1_8

  result = (unsigned int)(a4 - 1);
  v6 = (*(unsigned __int8 *)(a2 + 20) >> 1) & 1;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C03346A8 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
            *(&gIntObjTelemetryState + 5 * v6 + 4) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState + 5 * v6 + 4)
                                                                                           + a5
                                                                                           - gmsInputStartTime);
        }
      }
      gmsInputStartTime = a5;
      if ( a4 == 1 )
      {
        *((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 6) += abs32(*(_DWORD *)(a2 + 24));
      }
      else if ( a4 == 2 )
      {
        *((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 7) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    if ( (a3 & 1) != 0 )
    {
      v8 = a5;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 10 * v6);
    }
    else
    {
      v8 = gmsInputStartTime;
    }
    if ( (a3 & 2) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v8 && v8 )
        *(&gIntObjTelemetryState + 5 * v6 + 4) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState
                                                                                                 + 5 * v6
                                                                                                 + 4)
                                                                                       + a5
                                                                                       - v8);
      v8 = a5;
      gmsInputStartTime = a5;
    }
    if ( (a3 & 8) != 0 )
      ++*((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 1);
    if ( (a3 & 0x10) != 0 )
      ++*((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 2);
    if ( (a3 & 0x80u) != 0 )
      *((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 3) += abs32(*(_DWORD *)(a2 + 24));
    if ( (a3 & 0x200) != 0 )
      ++*((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 4);
    if ( (a3 & 0x400) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v8 && v8 )
        qword_1C03346F0 += a5 - v8;
      v8 = a5;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 10 * v6 + 5);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v8 )
      {
        if ( v8 )
          qword_1C0334718 += a5 - v8;
      }
      gmsInputStartTime = a5;
    }
  }
  v9 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C03346A8 = result;
  unk_1C03346A0 = v9;
  return result;
}
