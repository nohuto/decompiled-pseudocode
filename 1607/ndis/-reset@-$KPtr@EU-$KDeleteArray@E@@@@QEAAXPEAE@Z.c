/*
 * XREFs of ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00C4450
 * Callers:
 *     ??$QueryValueBlob@V_lambda_1e1d3c9721006777a03f858ff1740b3c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_1e1d3c9721006777a03f858ff1740b3c_@@@Z @ 0x1C00A767C (--$QueryValueBlob@V_lambda_1e1d3c9721006777a03f858ff1740b3c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@Z @ 0x1C00A77B8 (--$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adb.c)
 *     ??$QueryValueBlob@V_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_@@@Z @ 0x1C00A7910 (--$QueryValueBlob@V_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@Z @ 0x1C00A7A74 (--$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueBlob@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@Z @ 0x1C00A7B54 (--$QueryValueBlob@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7BEC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKSt.c)
 *     ??$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@Z @ 0x1C00D1D44 (--$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb444_ea_1C00D1D44.c)
 *     ??$QueryValueMultisz@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@Z @ 0x1C00E31E4 (--$QueryValueMultisz@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaa.c)
 * Callees:
 *     <none>
 */

void __fastcall KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    *a1 = a2;
  }
}
