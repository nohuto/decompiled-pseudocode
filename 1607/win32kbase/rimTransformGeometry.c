/*
 * XREFs of rimTransformGeometry @ 0x1C00DE5E8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C00DDD00 (rimPopulateContactFrameData.c)
 * Callees:
 *     IsApplyPTPTranslationSupported_0 @ 0x1C0002D20 (IsApplyPTPTranslationSupported_0.c)
 *     ApplyPTPTranslation_0 @ 0x1C0002D28 (ApplyPTPTranslation_0.c)
 *     RIMApplyTransforms @ 0x1C00D33A8 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C00DBFCC (rimComputeHimetricGeometry.c)
 *     ApiSetApplyTransforms @ 0x1C00DE764 (ApiSetApplyTransforms.c)
 */

__int64 __fastcall rimTransformGeometry(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5, _DWORD *a6)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = IsApplyPTPTranslationSupported_0();
    if ( (int)result >= 0 )
      return ApplyPTPTranslation_0();
  }
  else
  {
    if ( a2 )
      ApiSetApplyTransforms(a1, a3, (_DWORD)a4, a5, (__int64)a6);
    else
      RIMApplyTransforms(a1, a3, a4, a5, a6);
    return rimComputeHimetricGeometry(a1, (__int64)a4, (__int64)(a4 + 8));
  }
  return result;
}
