/*
 * XREFs of ndisQueryDeviceOid @ 0x1C009383C
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C00938D0 (ndisQueryStatisticsOids.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisQueryDeviceOid(__int64 a1, _DWORD *a2, int a3, __int64 a4, int a5)
{
  void *v5; // rsi

  v5 = *(void **)(a1 + 8);
  memset(a2, 0, 0xF8uLL);
  a2[22] |= 8u;
  *((_QWORD *)a2 + 13) = &ndisIntReqIoctl;
  *(_QWORD *)(a2 + 13) = 0LL;
  *a2 = 15466902;
  a2[8] = a3;
  *(_QWORD *)(a2 + 1) = 2LL;
  *((_QWORD *)a2 + 5) = a4;
  a2[12] = a5;
  return ndisQuerySetMiniport(v5, 0LL, (struct _NDIS_OID_REQUEST *)a2, 0LL, 0LL);
}
