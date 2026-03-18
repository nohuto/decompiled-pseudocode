/*
 * XREFs of itrp_ChangeCvtSlow @ 0x1C01449D0
 * Callers:
 *     itrp_MIAP @ 0x1C00B5040 (itrp_MIAP.c)
 *     itrp_MDAP @ 0x1C00B5960 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 * Callees:
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall itrp_ChangeCvtSlow(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  int CVTScale; // eax
  __int64 result; // rax

  v4 = a2;
  CVTScale = itrp_GetCVTScale();
  result = CompDiv(CVTScale, (__int64)a3 << 16);
  *(_DWORD *)(*(_QWORD *)(qword_1C0323E30 + 16) + 4 * v4) += result;
  return result;
}
