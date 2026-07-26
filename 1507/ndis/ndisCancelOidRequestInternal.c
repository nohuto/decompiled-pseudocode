/*
 * XREFs of ndisCancelOidRequestInternal @ 0x1C003F6F0
 * Callers:
 *     NdisCancelOidRequest @ 0x1C003EDB0 (NdisCancelOidRequest.c)
 *     ndisFCancelOidRequestInternal @ 0x1C0053590 (ndisFCancelOidRequestInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C005F28C (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C003F83C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C003F9CC (ndisCancelOidRequestOnMiniport.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0043884 (ndisRefNextFilterForOidCancellation.c)
 *     ndisFInvokeCancelOidRequest @ 0x1C005396C (ndisFInvokeCancelOidRequest.c)
 *     ndisMInvokeCancelOidRequest @ 0x1C0059CB0 (ndisMInvokeCancelOidRequest.c)
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqL(0xB1u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3, a4);
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v12) = a4;
    WPP_SF_qqqL(0xB2u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3, v12);
  }
}
