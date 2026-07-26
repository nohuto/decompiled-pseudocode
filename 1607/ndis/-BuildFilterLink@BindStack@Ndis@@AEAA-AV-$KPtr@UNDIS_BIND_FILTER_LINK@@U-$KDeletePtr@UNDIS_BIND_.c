/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A377C
 * Callers:
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00AF758 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00E33B4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A106C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A145C (--4-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A148C (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DBC (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

volatile signed __int32 ***__fastcall Ndis::BindStack::BuildFilterLink(
        __int64 a1,
        volatile signed __int32 ***a2,
        _QWORD *a3,
        int a4)
{
  volatile signed __int32 **FilterDriver; // rax
  char *PoolWithTag; // rax
  volatile signed __int32 **v8; // rdi
  volatile signed __int32 *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  FilterDriver = (volatile signed __int32 **)ndisBindGetFilterDriver(v10, a3, 0);
  KRef<NDIS_BIND_FILTER_DRIVER>::operator=(&v11, FilterDriver);
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v10);
  if ( v11
    && ((PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x4C6C4642u),
         (v8 = (volatile signed __int32 **)PoolWithTag) == 0LL)
      ? (v8 = 0LL)
      : (volatile signed __int32 **)(NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(PoolWithTag + 8)),
                                     v8[13] = 0LL),
        v8) )
  {
    if ( v8 + 13 != &v11 )
      KRef<NDIS_BIND_FILTER_DRIVER>::reset(v8 + 13, v11);
    *((_DWORD *)v8 + 28) = a4;
    *a2 = v8;
  }
  else
  {
    *a2 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v11);
  return a2;
}
