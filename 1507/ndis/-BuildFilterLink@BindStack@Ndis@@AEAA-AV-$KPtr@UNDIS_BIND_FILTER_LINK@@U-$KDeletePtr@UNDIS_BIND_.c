/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A12BC
 * Callers:
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C009D65C (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00B2478 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A3370 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A738C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00CEFA8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildFilterLink(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 **FilterDriver; // rax
  char *PoolWithTag; // rax
  char *v9; // rsi
  volatile signed __int32 **v10; // rdi
  volatile signed __int32 *v11; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  FilterDriver = (volatile signed __int32 **)ndisBindGetFilterDriver(v13, a3, 0LL);
  if ( &v14 != FilterDriver )
  {
    v5 = *FilterDriver;
    *FilterDriver = 0LL;
    v14 = v5;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v13);
  if ( v5
    && ((PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x4C6C4642u), (v9 = PoolWithTag) == 0LL)
      ? (v9 = 0LL)
      : (char *)(Ndis::BindState::BindState((Ndis::BindState *)(PoolWithTag + 8)),
                 *((_QWORD *)v9 + 12) = v9 + 88,
                 *((_QWORD *)v9 + 11) = v9 + 88,
                 *((_QWORD *)v9 + 13) = 0LL),
        v9) )
  {
    v10 = (volatile signed __int32 **)(v9 + 104);
    if ( v9 + 104 != (char *)&v14 )
    {
      v11 = *v10;
      if ( v5 != *v10 )
      {
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 20, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v11);
          v5 = v14;
        }
        *v10 = v5;
        _InterlockedIncrement(v5 + 20);
      }
    }
    *((_DWORD *)v9 + 28) = a4;
    *a2 = v9;
  }
  else
  {
    *a2 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v14);
  return a2;
}
