/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C0002C38
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0008CC4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisCreatePMRejectWorkItem @ 0x1C0002EAC (ndisCreatePMRejectWorkItem.c)
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C00441F8 (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00B3954 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00CB65C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  _DWORD *v6; // rbx
  char v7; // si
  unsigned int SetMiniport; // eax
  unsigned int v9; // r15d
  _QWORD *v10; // rbx
  KIRQL v12; // al
  KIRQL v13; // di
  void *v14; // rcx
  unsigned int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r8
  UINT PMProtocolOffloadSize; // esi
  _DWORD *v21; // rdi
  void *v22; // rcx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST Requesta; // [rsp+40h] [rbp-C0h] BYREF

  memset(&Requesta, 0, 248);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(98LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 4008, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      v13 = v12;
      v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 122);
      *((_DWORD *)MiniportAdapterHandle + 464) = 2760026;
      v15 = ndisClonePMPatternList(v14);
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      v24 = v15;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v13);
      SetMiniport = v24;
      if ( v24 )
      {
        if ( (unsigned __int8)byte_1C0085315 < 2u )
          goto LABEL_7;
        v18 = 100LL;
LABEL_22:
        v19 = SetMiniport;
LABEL_27:
        WPP_SF_d(v18, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v19);
        goto LABEL_7;
      }
      v7 = 1;
    }
    v16 = (_QWORD *)ndisRemovePMLowestPriorityEntry(
                      &P,
                      *((unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v16 )
    {
      if ( (unsigned __int8)byte_1C0085315 < 4u )
        goto LABEL_7;
      v19 = *(unsigned int *)(v17 + 8);
      v18 = 101LL;
      goto LABEL_27;
    }
    *v16 = v6;
    v6 = v16;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265841;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v6[11];
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0LL, a2);
    if ( SetMiniport )
    {
      if ( (unsigned __int8)byte_1C0085315 < 2u )
        goto LABEL_7;
      v18 = 102LL;
      goto LABEL_22;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0085315 >= 2u )
  {
    v18 = 99LL;
    goto LABEL_22;
  }
LABEL_7:
  if ( v6 )
  {
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v21 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Requesta, 0, 0xF8uLL);
      *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
      *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
      Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
      Requesta.DATA.QUERY_INFORMATION.Oid = -50265843;
      Requesta.RequestType = NdisRequestSetInformation;
      Requesta.PortNumber = v21[11];
      *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
      Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v21 + 12;
      Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0LL, a2) )
        break;
      ExFreePoolWithTag(v21, 0);
      if ( !v6 )
        goto LABEL_8;
    }
    *(_QWORD *)v21 = v6;
    v6 = v21;
  }
LABEL_8:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 4008), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938514LL);
  v10 = P;
  while ( v10 )
  {
    v22 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v22, 0);
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqL(103LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request, v9);
  return v9;
}
