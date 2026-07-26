/*
 * XREFs of ndisRejectUnsupportedWoLPatterns @ 0x1C00C487C
 * Callers:
 *     ndisIndicatePMCapabilities @ 0x1C00C3048 (ndisIndicatePMCapabilities.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C0097524 (ndisIsWoLPacketTypeSupported.c)
 */

LONG __fastcall ndisRejectUnsupportedWoLPatterns(char *MiniportAdapterHandle)
{
  __int64 i; // r8
  __int64 *v3; // r8
  int v4; // r9d
  int v5; // eax
  int v6; // edi
  int SetMiniport; // eax
  _DWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[248]; // [rsp+B0h] [rbp-50h] BYREF

  v9[0] = 0;
  memset(v11, 0, sizeof(v11));
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  KeWaitForSingleObject(MiniportAdapterHandle + 3976, Executive, 0, 0, 0LL);
LABEL_2:
  v9[0] = 0;
  for ( i = *((_QWORD *)MiniportAdapterHandle + 121); i; i = *v3 )
  {
    if ( !ndisIsWoLPacketTypeSupported(*(_DWORD *)(i + 60), (__int64)MiniportAdapterHandle) )
    {
      v5 = *((_DWORD *)v3 + 49);
      v9[0] = v5;
      v6 = *((_DWORD *)v3 + 11);
      if ( !v5 )
        return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
      if ( v5 == v4 )
      {
        if ( (unsigned __int8)byte_1C0083715 >= 2u )
          WPP_SF_d(0x7Cu, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v5);
      }
      else
      {
        memset(v11, 0, sizeof(v11));
        *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
        *(_QWORD *)&v11[40] = v9;
        *(_DWORD *)v11 = 15466902;
        *(_DWORD *)&v11[88] |= 0x1800008u;
        *(_DWORD *)&v11[32] = -50265845;
        *(_DWORD *)&v11[4] = 1;
        *(_DWORD *)&v11[8] = v6;
        *(_DWORD *)&v11[48] = 4;
        SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v11, 0LL, 0LL);
        if ( !SetMiniport )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v9;
          StatusIndication.SourceHandle = MiniportAdapterHandle;
          StatusIndication.StatusCode = 1073938513;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
          goto LABEL_2;
        }
        if ( (unsigned __int8)byte_1C0083715 >= 2u )
          WPP_SF_d(0x7Du, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, SetMiniport);
      }
      return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
    }
  }
  return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
}
