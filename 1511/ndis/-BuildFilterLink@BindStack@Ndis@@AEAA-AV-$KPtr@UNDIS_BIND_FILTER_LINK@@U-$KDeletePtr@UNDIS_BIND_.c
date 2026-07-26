/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A5E24
 * Callers:
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C00A6BF4 (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00DD434 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 * Callees:
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A26D0 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A6664 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A6B90 (--4-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A6BC0 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildFilterLink(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 FilterDriver; // rax
  char *PoolWithTag; // rax
  char *v8; // rdi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  FilterDriver = ndisBindGetFilterDriver(v10, a3, 0LL);
  KRef<NDIS_BIND_FILTER_DRIVER>::operator=(&v11, FilterDriver);
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v10);
  if ( v11
    && ((PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x4C6C4642u), (v8 = PoolWithTag) == 0LL)
      ? (v8 = 0LL)
      : (char *)(NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(PoolWithTag + 8)),
                 *((_QWORD *)v8 + 13) = 0LL),
        v8) )
  {
    if ( v8 + 104 != (char *)&v11 )
      KRef<NDIS_BIND_FILTER_DRIVER>::reset(v8 + 104, v11);
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
