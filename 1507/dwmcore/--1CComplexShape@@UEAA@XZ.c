/*
 * XREFs of ??1CComplexShape@@UEAA@XZ @ 0x18005BBA0
 * Callers:
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x18005B970 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CComplexShape::~CComplexShape(CComplexShape *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CComplexShape::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CShape::`vftable';
}
