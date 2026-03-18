/*
 * XREFs of ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C0014D5C
 * Callers:
 *     CitDesktopSwitch @ 0x1C0014C70 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x1C006F7A0 (CitSessionConnectChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive(CIT_DESKTOP_ACTIVE_TRACKER *this, char a2, unsigned int a3)
{
  __int64 v3; // rcx
  char v4; // r10

  if ( *(_BYTE *)this != a2 )
  {
    CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime(this, a3);
    *(_BYTE *)v3 = v4;
    if ( v4 )
      ++*(_DWORD *)(v3 + 4);
  }
}
