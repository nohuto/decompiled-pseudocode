/*
 * XREFs of ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C0006EB0
 * Callers:
 *     GreGetTransform @ 0x1C0032B80 (GreGetTransform.c)
 * Callees:
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

void __fastcall EXFORMOBJ::vInitPageToDevice(EXFORMOBJ *this, struct XDCOBJ *a2, struct MATRIX *a3)
{
  _DWORD *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  *(_QWORD *)this = a3;
  *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)a2 + 444LL);
  v4 = *(_DWORD **)this;
  v5 = *(_QWORD *)a2;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = *(_DWORD *)(v5 + 448);
  *(_DWORD *)(*(_QWORD *)this + 16LL) = *(_DWORD *)(*(_QWORD *)a2 + 452LL);
  *(_DWORD *)(*(_QWORD *)this + 20LL) = *(_DWORD *)(*(_QWORD *)a2 + 456LL);
  bFToL(this, *(_QWORD *)this + 24LL, 6LL);
  bFToL(v6, *(_QWORD *)this + 28LL, v7);
  EXFORMOBJ::vComputeWtoDAccelFlags(this);
}
