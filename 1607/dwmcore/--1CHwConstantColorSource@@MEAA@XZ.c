/*
 * XREFs of ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800AB054
 * Callers:
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800AAE30 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801818F0 (--_ECHwConstantColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwConstantColorSource::~CHwConstantColorSource(CHwConstantColorSource *this)
{
  CMILRefCountBase *v2; // rcx

  *(_QWORD *)this = &CHwConstantColorSource::`vftable';
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 3);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
