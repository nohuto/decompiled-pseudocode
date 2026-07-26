/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C000F7E0
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C000F894 (ndisIovFindSwitchBySwitchId.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

void __fastcall ndisIovDeleteDefaultNicSwitch(_DWORD *MiniportAdapterHandle)
{
  unsigned int v2; // r14d
  __int64 SwitchBySwitchId; // rax
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  _QWORD *VPortByVPortId; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // r9
  _QWORD *v12; // r8
  KIRQL v13; // al
  _QWORD *v14; // r8
  void **v15; // rdx
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v17[4]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  memset(&Request, 0, 248);
  memset(v17, 0, 12);
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(78LL, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, MiniportAdapterHandle);
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL);
  v4 = (_DWORD *)SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    v5 = *(_DWORD **)(SwitchBySwitchId + 40);
    VPortByVPortId = (_QWORD *)ndisIovFindVPortByVPortId(MiniportAdapterHandle, 0LL);
    v7 = *VPortByVPortId;
    v8 = (_QWORD *)VPortByVPortId[1];
    if ( *(_QWORD **)(*VPortByVPortId + 8LL) != VPortByVPortId || (_QWORD *)*v8 != VPortByVPortId )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    --MiniportAdapterHandle[1200];
    *((_QWORD *)MiniportAdapterHandle + 593) = 0LL;
    v9 = VPortByVPortId[4];
    v10 = (_QWORD *)VPortByVPortId[5];
    if ( *(_QWORD **)(v9 + 8) != VPortByVPortId + 4 || (_QWORD *)*v10 != VPortByVPortId + 4 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --v4[12];
    v11 = VPortByVPortId[6];
    v12 = (_QWORD *)VPortByVPortId[7];
    if ( *(_QWORD **)(v11 + 8) != VPortByVPortId + 6 || (_QWORD *)*v12 != VPortByVPortId + 6 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    --v5[7];
    ExFreePoolWithTag(VPortByVPortId, 0);
    ExFreePoolWithTag(v5, 0);
    if ( (MiniportAdapterHandle[30] & 4) == 0 )
    {
      v17[0] = 786816;
      v17[2] = v4[9];
      memset(&Request, 0, 0xF8uLL);
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      Request.PortNumber = 0;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = v17;
      Request.DATA.QUERY_INFORMATION.Oid = 66105;
      Request.RequestType = NdisRequestSetInformation;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    MiniportAdapterHandle[464] = 2889630;
    v14 = *(_QWORD **)v4;
    v15 = (void **)*((_QWORD *)v4 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 || *v15 != v4 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    --MiniportAdapterHandle[1188];
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    MiniportAdapterHandle[464] = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v13);
    ExFreePoolWithTag(v4, 0);
  }
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(79LL, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, MiniportAdapterHandle, v2);
}
