/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C004A184
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0025300 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00254C4 (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C0048D04 (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00B2F94 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00CA414 (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(_DWORD *MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _DWORD *v6; // rbx
  char v7; // si
  int SetMiniport; // eax
  unsigned int v9; // r15d
  KIRQL v10; // al
  KIRQL v11; // di
  unsigned int *v12; // rcx
  int v13; // eax
  int v14; // r12d
  _QWORD *v15; // rax
  __int64 v16; // r11
  unsigned __int16 v17; // cx
  int v18; // r8d
  __int64 v19; // rsi
  UINT PMProtocolOffloadSize; // r12d
  _DWORD *v21; // rdi
  _QWORD *v22; // rbx
  void *v23; // rcx
  __int64 v25; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Request; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  memset(&Request, 0, 0xF8uLL);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(0x62u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, MiniportAdapterHandle, v4, a3);
  KeWaitForSingleObject(MiniportAdapterHandle + 1002, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)(a3 + 88) |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, (PNDIS_OID_REQUEST)a3, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      v11 = v10;
      v12 = (unsigned int *)*((_QWORD *)MiniportAdapterHandle + 122);
      MiniportAdapterHandle[464] = 2760025;
      v13 = ndisClonePMPatternList(v12, (_QWORD **)&P);
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      MiniportAdapterHandle[464] = 0;
      v14 = v13;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v11);
      if ( v14 )
      {
        if ( (unsigned __int8)byte_1C00895D5 < 2u )
          goto LABEL_22;
        v17 = 100;
        v18 = v14;
        goto LABEL_21;
      }
      v4 = a2;
      v7 = 1;
    }
    v15 = (_QWORD *)ndisRemovePMLowestPriorityEntry(&P, *(unsigned int *)(*(_QWORD *)(a3 + 40) + 8LL));
    if ( !v15 )
    {
      if ( (unsigned __int8)byte_1C00895D5 < 4u )
        goto LABEL_22;
      v18 = *(_DWORD *)(v16 + 8);
      v17 = 101;
      goto LABEL_21;
    }
    *v15 = v6;
    v6 = v15;
    memset(&Request, 0, 0xF8uLL);
    *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Request.NdisReserved[16] |= 8u;
    Request.Header = (NDIS_OBJECT_HEADER)15466902;
    Request.DATA.QUERY_INFORMATION.Oid = -50265841;
    Request.RequestType = NdisRequestSetInformation;
    Request.PortNumber = v6[11];
    *(_DWORD *)&Request.NdisReserved[16] |= 0x1800000u;
    Request.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Request.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, v4);
    if ( SetMiniport )
    {
      if ( (unsigned __int8)byte_1C00895D5 < 2u )
        goto LABEL_22;
      v17 = 102;
LABEL_16:
      v18 = SetMiniport;
LABEL_21:
      WPP_SF_d(v17, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v18);
      goto LABEL_22;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C00895D5 >= 2u )
  {
    v17 = 99;
    goto LABEL_16;
  }
LABEL_22:
  if ( v6 )
  {
    v19 = a2;
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v21 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Request, 0, 0xF8uLL);
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = -50265843;
      Request.RequestType = NdisRequestSetInformation;
      Request.PortNumber = v21[11];
      *(_DWORD *)&Request.NdisReserved[16] |= 0x1800000u;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = v21 + 12;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, a2) )
        break;
      ExFreePoolWithTag(v21, 0);
      if ( !v6 )
        goto LABEL_29;
    }
    *(_QWORD *)v21 = v6;
    v6 = v21;
  }
  else
  {
    v19 = a2;
  }
LABEL_29:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 1002), 0, 1, 0);
  ndisCreatePMRejectWorkItem((__int64)MiniportAdapterHandle, (_LIST_ENTRY *)v6, 1073938514);
  v22 = P;
  while ( v22 )
  {
    v23 = v22;
    v22 = (_QWORD *)*v22;
    ExFreePoolWithTag(v23, 0);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v25) = v9;
    WPP_SF_qqqL(0x67u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, MiniportAdapterHandle, v19, a3, v25);
  }
  return v9;
}
