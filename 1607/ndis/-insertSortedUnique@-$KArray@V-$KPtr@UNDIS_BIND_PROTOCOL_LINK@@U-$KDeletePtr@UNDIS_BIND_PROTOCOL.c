/*
 * XREFs of ?insertSortedUnique@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@P6A_NAEBV3@1@Z@Z @ 0x1C00A31FC
 * Callers:
 *     _lambda_91558b45fed37b56f47adbcac45390b4_::operator() @ 0x1C00A3010 (_lambda_91558b45fed37b56f47adbcac45390b4_--operator().c)
 * Callees:
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A31B0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A3480 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertSortedUnique(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rbx

  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 8) )
    return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1, a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*a2 + 104) + 8LL;
  while ( *(_QWORD *)(*(_QWORD *)v4 + 104LL) + 8LL < v5 )
  {
    ++v3;
    v4 += 8LL;
    if ( v3 >= *(unsigned int *)(a1 + 8) )
      return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1, a2);
  }
  if ( v5 >= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3) + 104LL) + 8LL )
    return 1;
  else
    return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(a1, v3, a2);
}
