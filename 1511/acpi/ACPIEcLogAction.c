/*
 * XREFs of ACPIEcLogAction @ 0x1C0024290
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00045B4 (ACPIEcServiceDevice.c)
 *     ACPIEcServiceIoLoop @ 0x1C0023C94 (ACPIEcServiceIoLoop.c)
 *     ACPIEcQueueEcIrp @ 0x1C003A528 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C003A680 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcWatchdogDpc @ 0x1C003AE30 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  unsigned __int8 v7; // r9
  char v8; // cl
  LARGE_INTEGER result; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // cl
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v13; // cx
  char v14; // cl
  unsigned __int8 v15; // cl
  __int16 v16; // cx

  v4 = *(unsigned __int8 *)(a1 + 505);
  v6 = (unsigned int)v4;
  v7 = (v4 - 1) & 0x1F;
  if ( (*(_BYTE *)(a1 + 4 * v4 + 648) & 0xF0) == 0xA0
    && *(_BYTE *)(a1 + 4LL * v7 + 648) == (a2 | *(_BYTE *)(a1 + 488))
    && *(_BYTE *)(a1 + 4LL * v7 + 649) == a3 )
  {
    v8 = ++*(_BYTE *)(a1 + 4 * v4 + 649);
    if ( !v8 )
      v8 = -1;
    *(_BYTE *)(a1 + 4 * v6 + 649) = v8;
    result = KeQueryPerformanceCounter(0LL);
    v10 = result.QuadPart + *(unsigned __int16 *)(a1 + 4 * v6 + 650) - ACPIEcLastActionTime;
    if ( v10 > 0xFFFF )
      LOWORD(v10) = -1;
    *(_WORD *)(a1 + 4 * v6 + 650) = v10;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 4 * v4 + 648) == (a2 | *(_BYTE *)(a1 + 488))
      && *(_BYTE *)(a1 + 4LL * (unsigned int)v4 + 649) == a3 )
    {
      v11 = (v4 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v11;
      *(_BYTE *)(a1 + 4LL * v11 + 649) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v13 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v13;
      v14 = *(_BYTE *)(a1 + 488) | 0xA0;
    }
    else
    {
      v15 = (v4 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v15;
      *(_BYTE *)(a1 + 4LL * v15 + 649) = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v16 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v16 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v16;
      v14 = a2 | *(_BYTE *)(a1 + 488);
    }
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    result.QuadPart = *(unsigned __int8 *)(a1 + 505);
    *(_BYTE *)(a1 + 4 * result.QuadPart + 648) = v14;
  }
  return result;
}
