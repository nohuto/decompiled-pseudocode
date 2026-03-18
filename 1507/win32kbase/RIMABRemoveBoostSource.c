/*
 * XREFs of RIMABRemoveBoostSource @ 0x1C00D2664
 * Callers:
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     RIMABRessurectPenDevice @ 0x1C00D26C8 (RIMABRessurectPenDevice.c)
 *     RIMICUpdateDeviceRank @ 0x1C00D2ED8 (RIMICUpdateDeviceRank.c)
 */

void __fastcall RIMABRemoveBoostSource(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // r11
  int v9; // r9d

  if ( gFastSwitchingEnabled )
  {
    v4 = *(_QWORD *)(a2 + 680);
    v5 = 2400LL * a3;
    v6 = *(_DWORD *)(v5 + v4 + 2392);
    if ( (v6 & 0x2000) != 0 )
    {
      *(_DWORD *)(v5 + v4 + 2392) = v6 & 0xFFFFDFFF;
      if ( (*(_DWORD *)(a2 + 1548))-- == 1 )
      {
        RIMICUpdateDeviceRank(a2, 0LL);
        if ( v9 )
          RIMABRessurectPenDevice(v8);
      }
    }
  }
}
