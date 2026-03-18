/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1406376E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x14009FE18 (PpmQueryTime.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140107AA0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopBatteryRefreshStatus @ 0x140117AD4 (PopBatteryRefreshStatus.c)
 *     PopFxPauseDeviceAccounting @ 0x1401EA5DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1401EB06C (PopFxResumeDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x1401F1620 (PpmConvertTimeTo.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCsStateChanged @ 0x140632510 (PopCsStateChanged.c)
 */

void __fastcall PdcPoCurrentPdcPhase(int a1, char a2)
{
  int v3; // ecx
  int v4; // ecx
  LARGE_INTEGER Time; // rax

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 5 )
      {
        Time = PpmQueryTime();
        if ( a2 )
        {
          qword_140305A48 = Time.QuadPart;
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_140305A50 += PpmConvertTimeTo(Time.QuadPart - qword_140305A48, 0xF4240uLL);
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxPauseDeviceAccounting();
          PopBatteryRefreshStatus();
        }
      }
    }
    else
    {
      PopAcquirePolicyLock();
      byte_1402DEB11 = a2 != 0;
      if ( a2 )
      {
        PopIdleArmAoAcDozeS4Timer();
      }
      else if ( PopPdcLastCsExitReason != 6 )
      {
        PopIdleCancelAoAcDozeS4Timer(1u);
      }
      PopReleasePolicyLock();
    }
  }
  else
  {
    PopCsStateChanged(a2 != 0);
  }
}
