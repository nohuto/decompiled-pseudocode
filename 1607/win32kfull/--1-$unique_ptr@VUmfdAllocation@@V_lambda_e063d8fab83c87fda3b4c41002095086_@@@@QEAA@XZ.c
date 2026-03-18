/*
 * XREFs of ??1?$unique_ptr@VUmfdAllocation@@V_lambda_e063d8fab83c87fda3b4c41002095086_@@@@QEAA@XZ @ 0x1C02D9CE8
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D9D0C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall unique_ptr<UmfdAllocation,_lambda_e063d8fab83c87fda3b4c41002095086_>::~unique_ptr<UmfdAllocation,_lambda_e063d8fab83c87fda3b4c41002095086_>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    EngFreeMem(v2);
    *a1 = 0LL;
  }
}
