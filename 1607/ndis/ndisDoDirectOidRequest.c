/*
 * XREFs of ndisDoDirectOidRequest @ 0x1C0045154
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     ndisMDirectOidRequest @ 0x1C0045CE0 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C0057C30 (NdisFDirectOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     WPP_SF_qqqq @ 0x1C0044798 (WPP_SF_qqqq.c)
 *     ndisMDoDirectOidRequest @ 0x1C0045DF8 (ndisMDoDirectOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rsi
  KIRQL v9; // r13
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+48h] [rbp-50h]

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqq(0x39u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 2297828;
  if ( a3 )
    v10 = *(_QWORD **)(a3 + 840);
  else
    v10 = *(_QWORD **)(a2 + 2664);
  if ( a4 && ndisReferenceRef(a4 + 39, 0x12u) )
  {
    if ( *(_QWORD *)(a4[2] + 296LL) )
    {
      v10 = a4;
    }
    else if ( a4[105] )
    {
      v10 = (_QWORD *)a4[105];
    }
    ndisDereferenceRef(a4 + 39, 0x12u);
  }
  while ( *(_BYTE *)v10 == 5 )
  {
    v8 = v10;
    if ( ndisReferenceRef(v10 + 39, 0x10u) )
      break;
    v10 = (_QWORD *)v10[105];
    v8 = 0LL;
  }
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v9);
  if ( v8 && !*(_QWORD *)(v8[2] + 296LL) || !*(_QWORD *)(*(_QWORD *)(a2 + 3816) + 248LL) )
  {
    v11 = -1073741637;
LABEL_28:
    if ( v8 )
      ndisDereferenceRef(v8 + 39, 0x10u);
    goto LABEL_30;
  }
  if ( v8 )
  {
    v14 = v8;
    v15 = a1;
    v11 = -1073741670;
    if ( ndisExpandStack(ndisFDoDirectOidRequestInternal, &v13) >= 0 )
      v11 = v13;
  }
  else if ( ndisReferenceMiniport(a2, 0x49u) )
  {
    v11 = ndisMDoDirectOidRequest(a2, a1, 0LL);
    ndisDereferenceMiniport(a2);
  }
  else
  {
    v11 = -1073741823;
  }
  if ( v11 != 259 )
    goto LABEL_28;
LABEL_30:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(58LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v11);
  return v11;
}
