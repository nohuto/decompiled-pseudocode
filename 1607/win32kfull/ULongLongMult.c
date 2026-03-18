/*
 * XREFs of ULongLongMult @ 0x1C0268A38
 * Callers:
 *     NtGdiStartDoc @ 0x1C0268490 (NtGdiStartDoc.c)
 *     ?ReAllocate@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A428C (-ReAllocate@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A49DC (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
