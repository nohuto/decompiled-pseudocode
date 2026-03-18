/*
 * XREFs of ??1?$unique_ptr@VUmfdAllocation@@V_lambda_45e705c273fec8437d54f19484ab56d0_@@@@QEAA@XZ @ 0x1C02D6C08
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D6C2C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall unique_ptr<UmfdAllocation,_lambda_45e705c273fec8437d54f19484ab56d0_>::~unique_ptr<UmfdAllocation,_lambda_45e705c273fec8437d54f19484ab56d0_>(
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
