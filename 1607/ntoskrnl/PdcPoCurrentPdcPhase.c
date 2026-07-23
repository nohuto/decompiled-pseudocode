/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x14066FAA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x1400D497C (PpmQueryTime.c)
 *     PopFxPauseDeviceAccounting @ 0x140202DE0 (PopFxPauseDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x14020A560 (PpmConvertTimeTo.c)
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 */

void __fastcall PdcPoCurrentPdcPhase(int a1, char a2)
{
  int v3; // ecx
  __int64 v4; // rcx
  LARGE_INTEGER Time; // rax

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 5 )
      {
        Time = PpmQueryTime();
        if ( a2 )
        {
          qword_1403288C8 = Time.QuadPart;
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_1403288D0 += PpmConvertTimeTo(Time.QuadPart - qword_1403288C8, 0xF4240uLL);
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxPauseDeviceAccounting();
          PopBatteryRefreshStatus();
        }
      }
    }
    else
    {
      LODWORD(v4) = a2 != 0;
      PopIdleCsStateChanged(v4);
    }
  }
  else
  {
    PopCsStateChanged(a2 != 0);
  }
}
