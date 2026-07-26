/*
 * XREFs of ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A71D0
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A5324 (--$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8a.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6FE0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ??$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@Z @ 0x1C00B2870 (--$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa0039.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  int v2; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  __int64 j; // rsi
  __int64 v8; // rbp
  char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a2;
  if ( *(unsigned int *)(a1 + 4) >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
      {
        v9 = &PoolWithTag[8 * i];
        if ( v9 )
        {
          v10 = *(_QWORD *)(a1 + 16);
          v11 = *(_QWORD *)(v10 + 8 * i);
          *(_QWORD *)(v10 + 8 * i) = 0LL;
          *(_QWORD *)v9 = v11;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * j);
          if ( v8 )
          {
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v8 + 104);
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v8 + 8));
            ExFreePoolWithTag((PVOID)v8, 0x4C745042u);
          }
        }
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x7272414Bu);
      }
      *(_DWORD *)(a1 + 4) = v2;
      *(_QWORD *)(a1 + 16) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
