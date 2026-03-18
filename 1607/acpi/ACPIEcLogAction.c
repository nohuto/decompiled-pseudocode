/*
 * XREFs of ACPIEcLogAction @ 0x1C002B398
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0003EB4 (ACPIEcServiceDevice.c)
 *     ACPIEcServiceIoLoop @ 0x1C002AD9C (ACPIEcServiceIoLoop.c)
 *     ACPIEcQueueEcIrp @ 0x1C004C908 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C004CA60 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcWatchdogDpc @ 0x1C004D3B0 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  unsigned __int8 v7; // r9
  bool v8; // zf
  char v9; // al
  LARGE_INTEGER result; // rax
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v14; // cx
  char v15; // cl
  unsigned __int8 v16; // cl
  __int16 v17; // cx

  v4 = *(unsigned __int8 *)(a1 + 505);
  v6 = (unsigned int)v4;
  v7 = (v4 - 1) & 0x1F;
  if ( (*(_BYTE *)(a1 + 4 * v4 + 648) & 0xF0) == 0xA0
    && *(_BYTE *)(a1 + 4LL * v7 + 648) == (a2 | *(_BYTE *)(a1 + 488))
    && *(_BYTE *)(a1 + 4LL * v7 + 649) == a3 )
  {
    v8 = (*(_BYTE *)(a1 + 4 * v4 + 649))++ == 0xFF;
    v9 = *(_BYTE *)(a1 + 4 * v4 + 649);
    if ( v8 )
      v9 = -1;
    *(_BYTE *)(a1 + 4LL * (unsigned int)v4 + 649) = v9;
    result = KeQueryPerformanceCounter(0LL);
    v11 = result.QuadPart + *(unsigned __int16 *)(a1 + 4 * v6 + 650) - ACPIEcLastActionTime;
    if ( v11 > 0xFFFF )
      LOWORD(v11) = -1;
    *(_WORD *)(a1 + 4 * v6 + 650) = v11;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 4 * v4 + 648) == (a2 | *(_BYTE *)(a1 + 488))
      && *(_BYTE *)(a1 + 4LL * (unsigned int)v4 + 649) == a3 )
    {
      v12 = (v4 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v12;
      *(_BYTE *)(a1 + 4LL * v12 + 649) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v14 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v14;
      v15 = *(_BYTE *)(a1 + 488) | 0xA0;
    }
    else
    {
      v16 = (v4 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v16;
      *(_BYTE *)(a1 + 4LL * v16 + 649) = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v17 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v17 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v17;
      v15 = a2 | *(_BYTE *)(a1 + 488);
    }
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    result.QuadPart = *(unsigned __int8 *)(a1 + 505);
    *(_BYTE *)(a1 + 4 * result.QuadPart + 648) = v15;
  }
  return result;
}
