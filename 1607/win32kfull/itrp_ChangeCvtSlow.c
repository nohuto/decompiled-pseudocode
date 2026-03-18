/*
 * XREFs of itrp_ChangeCvtSlow @ 0x1C01440B4
 * Callers:
 *     itrp_MDAP @ 0x1C00CD1C0 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00CE020 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C00CF700 (itrp_MIAP.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_ChangeCvtSlow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdi
  int CVTScale; // eax
  __int64 result; // rax

  v4 = a3;
  v5 = (int)a2;
  CVTScale = itrp_GetCVTScale(a1, a2, a3, a4);
  result = CompDiv(CVTScale, (__int64)v4 << 16);
  *(_DWORD *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4 * v5) += result;
  return result;
}
