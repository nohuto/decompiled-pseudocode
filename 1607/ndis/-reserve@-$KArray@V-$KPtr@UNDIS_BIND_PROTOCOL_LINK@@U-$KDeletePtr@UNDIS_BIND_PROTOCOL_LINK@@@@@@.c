/*
 * XREFs of ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A3280
 * Callers:
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A3364 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rt.c)
 *     ??$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@Z @ 0x1C00A77B8 (--$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adb.c)
 *     ??$QueryValueMultisz@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@Z @ 0x1C00E31E4 (--$QueryValueMultisz@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaa.c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = a2;
  if ( *(unsigned int *)(a1 + 4) >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
        {
          v8 = &PoolWithTag[8 * (unsigned int)i];
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 16);
            v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)i);
            *(_QWORD *)(v9 + 8LL * (unsigned int)i) = 0LL;
            *(_QWORD *)v8 = v10;
          }
        }
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( *(_DWORD *)(a1 + 8) )
          {
            do
              KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
                *(_QWORD *)(a1 + 16) + 8LL * v4++,
                i);
            while ( v4 < *(_DWORD *)(a1 + 8) );
          }
          ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x7272414Bu);
        }
        *(_DWORD *)(a1 + 4) = v2;
        *(_QWORD *)(a1 + 16) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
