/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x180016114
 * Callers:
 *     ??1CText@@EEAA@XZ @ 0x180016A2C (--1CText@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 */

void __fastcall CText::ReleaseResources(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  CVisual::ClearInstructions((CVisual *)this);
  v2 = this[47];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[47] = 0LL;
  }
}
