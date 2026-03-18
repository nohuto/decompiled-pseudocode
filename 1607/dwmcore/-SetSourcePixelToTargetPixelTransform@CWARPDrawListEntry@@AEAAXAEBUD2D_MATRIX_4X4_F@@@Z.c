/*
 * XREFs of ?SetSourcePixelToTargetPixelTransform@CWARPDrawListEntry@@AEAAXAEBUD2D_MATRIX_4X4_F@@@Z @ 0x1800C0248
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z @ 0x180136F18 (--0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     <none>
 */

void __fastcall CWARPDrawListEntry::SetSourcePixelToTargetPixelTransform(
        CWARPDrawListEntry *this,
        const struct D2D_MATRIX_4X4_F *a2)
{
  *((_BYTE *)this + 352) = 1;
  *((_QWORD *)this + 23) = *(_QWORD *)&a2->_11;
  *((_QWORD *)this + 24) = *(_QWORD *)&a2->m[0][3];
  *((_DWORD *)this + 50) = LODWORD(a2->_22);
  *((_DWORD *)this + 51) = LODWORD(a2->_24);
  *((_QWORD *)this + 26) = *(_QWORD *)&a2->m[3][0];
  *((_DWORD *)this + 54) = LODWORD(a2->_44);
}
