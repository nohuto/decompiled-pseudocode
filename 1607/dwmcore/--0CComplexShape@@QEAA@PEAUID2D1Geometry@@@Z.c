/*
 * XREFs of ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180002908
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CComplexShape *__fastcall CComplexShape::CComplexShape(CComplexShape *this, struct ID2D1Geometry *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CComplexShape::`vftable';
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
