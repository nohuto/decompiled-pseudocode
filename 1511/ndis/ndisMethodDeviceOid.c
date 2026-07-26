/*
 * XREFs of ndisMethodDeviceOid @ 0x1C00CA8C0
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisMethodDeviceOid(
        __int64 a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  void *v10; // rbx

  v5 = *a3;
  if ( *a3 != 66086
    && (v5 <= 0x10228
     || v5 > 0x1022A && v5 != 66104 && (v5 <= 0x10241 || v5 > 0x10243 && (v5 <= 0x10246 || v5 > 0x10248))) )
  {
    return 3221225659LL;
  }
  if ( a4 < 8 || a5 < 8 )
    return 3221291029LL;
  v10 = *(void **)(a1 + 8);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  a2->PortNumber = 0;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->RequestType = NdisRequestMethod;
  a2->DATA.QUERY_INFORMATION.Oid = *a3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = a3[1];
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a3 + 2;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a4 - 8;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a5 - 8;
  return ndisQuerySetMiniport(v10, 0LL, a2, 0LL, 0LL);
}
