/*
 * XREFs of ??1CComplexShape@@UEAA@XZ @ 0x1800029C4
 * Callers:
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800028B0 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComplexShape::~CComplexShape(CComplexShape *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CComplexShape::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
