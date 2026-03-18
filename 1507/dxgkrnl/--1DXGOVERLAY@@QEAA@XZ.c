/*
 * XREFs of ??1DXGOVERLAY@@QEAA@XZ @ 0x1C014236C
 * Callers:
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C001D2A0 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000F640 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01423A0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGOVERLAY::~DXGOVERLAY(DXGOVERLAY *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 6);
  if ( v1 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v1);
    *((_DWORD *)this + 6) = 0;
  }
  DXGOVERLAY::Destroy(this);
  *((_QWORD *)this + 2) = 0LL;
}
