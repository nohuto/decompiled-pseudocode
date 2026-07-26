/*
 * XREFs of ndisCancelOidRequestInternal @ 0x1C00448D4
 * Callers:
 *     NdisCancelOidRequest @ 0x1C00440F0 (NdisCancelOidRequest.c)
 *     ndisFCancelOidRequestInternal @ 0x1C00583B0 (ndisFCancelOidRequestInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0062BCC (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0044A20 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C0044BB0 (ndisCancelOidRequestOnMiniport.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C004835C (ndisRefNextFilterForOidCancellation.c)
 *     ndisFInvokeCancelOidRequest @ 0x1C005878C (ndisFInvokeCancelOidRequest.c)
 *     ndisMInvokeCancelOidRequest @ 0x1C005E0F0 (ndisMInvokeCancelOidRequest.c)
 */

void __fastcall ndisCancelOidRequestInternal(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r14
  char v11; // r14
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqL(0xB3u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3, a4);
  while ( 1 )
  {
    v10 = ndisRefNextFilterForOidCancellation(a1, v8, &v13);
    if ( !v10 )
      break;
    if ( v8 != a2 )
      ndisDereferenceRef((PKSPIN_LOCK)(v8 + 312), 1u);
    LOBYTE(v9) = a4;
    v8 = v10;
    ndisCancelOidRequestOnFilter(v10, a3, v9);
    if ( !a4 && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 264LL) )
    {
      ndisFInvokeCancelOidRequest(v10, a3);
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v13;
LABEL_10:
  if ( v8 != a2 )
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 312), 1u);
  if ( v11 )
  {
    LOBYTE(v9) = a4;
    ndisCancelOidRequestOnMiniport(a1, a3, v9);
    if ( *(_BYTE *)(a1 + 32) >= 6u && !a4 && *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 240LL) )
      ndisMInvokeCancelOidRequest(a1, a3);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v12) = a4;
    WPP_SF_qqqL(0xB4u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3, v12);
  }
}
