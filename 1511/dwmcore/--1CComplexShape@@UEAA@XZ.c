/*
 * XREFs of ??1CComplexShape@@UEAA@XZ @ 0x1800B0520
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800B02F0 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
