/*
 * XREFs of ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800940EC
 * Callers:
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180091F10 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092D90 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(CVirtualDesktopSwitch *this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 15) + 8 * i);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 120, 8u);
}
