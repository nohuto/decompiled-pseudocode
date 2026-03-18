/*
 * XREFs of ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C004F75C
 * Callers:
 *     CitSessionConnectChange @ 0x1C004EE90 (CitSessionConnectChange.c)
 *     CitDesktopSwitch @ 0x1C004F670 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C004F780 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
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
