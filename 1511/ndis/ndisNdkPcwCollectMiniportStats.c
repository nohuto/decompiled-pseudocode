/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x1C00D147C
 * Callers:
 *     ndisNdkPcwCollectData @ 0x1C00D13F8 (ndisNdkPcwCollectData.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D225C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  const UNICODE_STRING *MiniportName; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[248]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v9[2]; // [rsp+140h] [rbp+40h] BYREF
  char v10; // [rsp+148h] [rbp+48h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  v9[1] = 0;
  v9[0] = 16253312;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)&v8[88] |= 8u;
  *(_DWORD *)&v8[8] = 0;
  *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
  *(_DWORD *)v8 = 15466902;
  *(_QWORD *)&v8[40] = v9;
  *(_DWORD *)&v8[32] = -66846206;
  *(_DWORD *)&v8[4] = 2;
  *(_DWORD *)&v8[48] = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v2, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL) )
    return -1073741823;
  Data.Size = 240;
  Data.Data = &v10;
  MiniportName = ndisPcwGetMiniportName(v2);
  return PcwAddInstance(a2, MiniportName, *(_DWORD *)(a1 + 20), 1u, &Data);
}
