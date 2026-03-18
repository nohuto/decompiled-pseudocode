/*
 * XREFs of ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E150C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C008E070 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C00E1740 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C00E17F4 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C00E1A88 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 */

void __fastcall PalmTelemetry::Update(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  int v4; // eax
  unsigned __int64 v9; // rdi
  int v10; // r8d
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]

  v4 = *((_DWORD *)a2 + 63);
  if ( (v4 & 0x20) == 0 && (v4 & 0x10000) == 0 )
  {
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)this == 2 && (unsigned int)(v9 - *((_DWORD *)this + 5)) > 0xFA )
    {
      if ( !*((_DWORD *)this + 1) )
        PalmTelemetry::_Report(this, v9);
      PalmTelemetry::_ResetTelemetryData(this);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    v10 = *((_DWORD *)a2 + 6);
    if ( (unsigned int)(v10 - 5) <= 1 )
    {
      PalmTelemetry::_ProcessPenPacket(this, a2, a3, v9, v12);
      return;
    }
    if ( (unsigned int)(v10 - 1) <= 3 && !*((_DWORD *)this + 1) )
    {
      v11 = *((_DWORD *)a3 + 601);
      if ( a4 )
      {
        if ( (v11 & 4) == 0 )
          return;
      }
      else if ( (v11 & 4) != 0 )
      {
        return;
      }
      PalmTelemetry::_TryBuffer(this, a3);
    }
  }
}
