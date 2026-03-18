/*
 * XREFs of UIntMult @ 0x1C00B1274
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C004B680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00E2880 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned __int64 v3; // r9

  v3 = uMultiplier * (unsigned __int64)uMultiplicand;
  if ( v3 > 0xFFFFFFFF )
  {
    *puResult = -1;
    return -2147024362;
  }
  else
  {
    *puResult = v3;
    return 0;
  }
}
