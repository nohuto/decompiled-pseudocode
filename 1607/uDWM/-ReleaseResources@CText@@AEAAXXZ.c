/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x1800181E4
 * Callers:
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180017E40 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
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
