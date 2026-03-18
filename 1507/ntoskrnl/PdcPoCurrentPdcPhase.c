/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1406B7540
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140017D30 (PpmQueryTime.c)
 *     PopFxPauseDeviceAccounting @ 0x14023835C (PopFxPauseDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x14023FA4C (PpmConvertTimeTo.c)
 *     PopCsStateChanged @ 0x1406B0B3C (PopCsStateChanged.c)
 */

void __fastcall PdcPoCurrentPdcPhase(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // ecx
  LARGE_INTEGER Time; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // r8
  LARGE_INTEGER v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = a2;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 == 6 )
    {
      Time = PpmQueryTime();
      if ( v4 )
      {
        qword_1403537C8 = Time.QuadPart;
        if ( (PopFxDeviceAccountingLevel & 2) != 0 )
          PopFxResumeDeviceAccounting(v8.QuadPart, v7.QuadPart, v9.QuadPart, v10.QuadPart);
      }
      else
      {
        qword_1403537D0 += PpmConvertTimeTo(Time.QuadPart - qword_1403537C8, 0xF4240uLL);
        if ( (PopFxDeviceAccountingLevel & 2) != 0 )
          PopFxPauseDeviceAccounting(v12, v11, v13, v14);
        PopBatteryRefreshStatus();
      }
    }
  }
  else
  {
    PopCsStateChanged((_BYTE)a2 != 0, a2, a3, a4);
  }
}
