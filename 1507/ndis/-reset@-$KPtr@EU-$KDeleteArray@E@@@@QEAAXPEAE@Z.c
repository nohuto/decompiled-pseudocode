/*
 * XREFs of ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00B2AC0
 * Callers:
 *     ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C009CEB8 (--$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@Z @ 0x1C009CFA0 (--$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueBlob@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@Z @ 0x1C009D070 (--$QueryValueBlob@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ??$QueryValueBlob@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@Z @ 0x1C009D1D8 (--$QueryValueBlob@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A51F0 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKSt.c)
 *     ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A5324 (--$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8a.c)
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B271C (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43e.c)
 *     ??$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@Z @ 0x1C00B2870 (--$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa0039.c)
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
