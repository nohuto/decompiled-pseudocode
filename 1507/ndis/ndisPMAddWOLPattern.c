/*
 * XREFs of ndisPMAddWOLPattern @ 0x1C0002D6C
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
 *     ndisGetWoLPatternSize @ 0x1C009A2B0 (ndisGetWoLPatternSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00CB65C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  _QWORD *v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  KIRQL v12; // al
  char v13; // cl
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  _QWORD *v17; // rax
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // rsi
  UINT WoLPatternSize; // eax
  int v23; // r9d
  void *v24; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+40h] [rbp-C0h] BYREF

  memset(&Requesta, 0, 248);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(78LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 3976, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      v13 = MiniportAdapterHandle[32];
      NewIrql = v12;
      *((_DWORD *)MiniportAdapterHandle + 464) = 2758026;
      if ( (unsigned __int8)v13 > 6u || v13 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u )
        v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 121);
      else
        v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 120);
      v15 = ndisClonePMPatternList(v14);
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      v16 = v15;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, NewIrql);
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C0085315 < 2u )
          goto LABEL_7;
        v19 = 80LL;
        v20 = v16;
        goto LABEL_32;
      }
      v7 = 1;
    }
    v17 = (_QWORD *)ndisRemovePMLowestPriorityEntry(
                      &P,
                      *((unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v17 )
    {
      if ( (unsigned __int8)byte_1C0085315 < 4u )
        goto LABEL_7;
      v20 = *(unsigned int *)(v18 + 8);
      v19 = 81LL;
      goto LABEL_32;
    }
    *v17 = v6;
    v6 = v17;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265845;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = *((_DWORD *)v6 + 11);
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 5;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0LL, a2);
    if ( SetMiniport )
    {
      if ( (unsigned __int8)byte_1C0085315 < 2u )
        goto LABEL_7;
      v19 = 82LL;
LABEL_27:
      v20 = SetMiniport;
LABEL_32:
      WPP_SF_d(v19, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v20);
      goto LABEL_7;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0085315 >= 2u )
  {
    v19 = 79LL;
    goto LABEL_27;
  }
LABEL_7:
  while ( v6 )
  {
    v21 = v6;
    v6 = (_QWORD *)*v6;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265846;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v21[11];
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v21 + 12;
    WoLPatternSize = ndisGetWoLPatternSize();
    *(_DWORD *)&Requesta.NdisReserved[16] = v23 | 0x1800000;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0LL, a2) )
    {
      *(_QWORD *)v21 = v6;
      v6 = v21;
      break;
    }
    ExFreePoolWithTag(v21, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938513LL);
  v10 = P;
  while ( v10 )
  {
    v24 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v24, 0);
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqL(83LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request, v9);
  return v9;
}
