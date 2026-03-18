/*
 * XREFs of itrp_ChangeCvtSlow @ 0x1C011AD9C
 * Callers:
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     itrp_MDAP @ 0x1C00BD320 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     InvokeMovePoint @ 0x1C00BF968 (InvokeMovePoint.c)
 * Callees:
 *     itrp_GetCVTScale @ 0x1C00B806C (itrp_GetCVTScale.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 */

__int64 __fastcall itrp_ChangeCvtSlow(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  int CVTScale; // eax
  __int64 result; // rax

  v4 = a2;
  CVTScale = itrp_GetCVTScale();
  result = CompDiv(CVTScale, (__int64)a3 << 16);
  *(_DWORD *)(*(_QWORD *)(qword_1C0323160 + 16) + 4 * v4) += result;
  return result;
}
