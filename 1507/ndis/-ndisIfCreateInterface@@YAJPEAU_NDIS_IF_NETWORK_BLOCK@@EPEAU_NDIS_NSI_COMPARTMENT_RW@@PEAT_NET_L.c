/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ndisIfCreateFilterInterface @ 0x1C001A7E0 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001AB24 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003B130 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0019BD8 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0020228 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0020568 (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C003E448 (WPP_SF_qqqqq.c)
 *     WPP_SF_qqqqqL @ 0x1C003E4AC (WPP_SF_qqqqqL.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00C63C0 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        union _NET_LUID_LH *a4,
        struct _NDIS_NSI_INTERFACE_PERSIST_RW *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        enum NdisIfBlockSource a7)
{
  char v10; // bl
  __int64 IfBlock; // rcx
  char *PoolWithTag; // rax
  char *v13; // rdi
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  size_t v17; // r8
  union _NET_LUID_LH v18; // rbx
  _GUID NetworkGuid; // xmm0
  PVOID v20; // rcx
  int appended; // esi
  int v23; // eax
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // ax
  size_t v28; // r8
  _GUID LoopbackIfInterfaceGuid; // xmm0
  _IF_COUNTED_STRING_LH *p_LoopbackIfAlias; // rsi
  _WORD *v31; // r8
  wchar_t *v32; // rdx
  wchar_t *v33; // rcx
  size_t Length; // r8
  UINT32 v35; // ecx
  UINT32 NetLuidIndex; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-3Dh] BYREF
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  _UNICODE_STRING String; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF
  char v42; // [rsp+D8h] [rbp+4Fh]
  char v43; // [rsp+E0h] [rbp+57h]

  v43 = a2;
  *(_DWORD *)&Source.Length = 262146;
  NetLuidIndex = 0;
  Source.Buffer = L" ";
  v42 = 0;
  v10 = a2;
  IfBlock = 4LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qqqqq(0x7Eu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a3, a4, a5, a6);
  if ( !a1
    || a5 && *((_WORD *)a5 + 544) > 0x20u
    || a6 && (IfBlock = (__int64)a6->Miniport->IfBlock, *(_WORD *)(IfBlock + 1124) > 0x20u) )
  {
    appended = -1073741811;
  }
  else
  {
    *(_DWORD *)&String.Length = 0x2000000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F8uLL, 0x6669444Eu);
    a2 = 0LL;
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x4F8uLL);
      *(_DWORD *)v13 = 6291840;
      String.Buffer = (wchar_t *)(v13 + 1272);
      if ( !a5 )
      {
        if ( !a6 )
        {
          if ( v10 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(24LL, a3->Flags & 1, &NetLuidIndex);
            if ( appended )
            {
LABEL_21:
              ExFreePoolWithTag(v13, 0);
              goto LABEL_22;
            }
            v35 = NetLuidIndex;
            *((_WORD *)&a3->LoopbackIfLuid.Info + 3) = 24;
            v42 = 1;
            a3->LoopbackIfLuid.Value = a3->LoopbackIfLuid.Value & 0xFFFF000000000000uLL | ((unsigned __int64)(v35 & 0xFFFFFF) << 24);
            appended = ExUuidCreate(&a3->LoopbackIfInterfaceGuid);
            if ( appended < 0 )
            {
LABEL_77:
              if ( v42 )
                NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
              goto LABEL_21;
            }
          }
          v18.Value = (ULONG64)a3->LoopbackIfLuid;
          LoopbackIfInterfaceGuid = a3->LoopbackIfInterfaceGuid;
          *((_DWORD *)v13 + 2) = -1;
          *((_DWORD *)v13 + 3) = -1;
          *((_DWORD *)v13 + 4) = -1;
          *((_QWORD *)v13 + 90) = 0x40000000LL;
          *((_QWORD *)v13 + 91) = 0x40000000LL;
          *(_GUID *)(v13 + 52) = LoopbackIfInterfaceGuid;
          *(_QWORD *)(v13 + 28) = 1LL;
          *((_DWORD *)v13 + 9) = 1;
          v13[40] = 0;
          *((_QWORD *)v13 + 11) = 17LL;
          *((_DWORD *)v13 + 160) = 1500;
          *((_DWORD *)v13 + 185) = 1;
          *((_DWORD *)v13 + 186) = 2;
          *((_QWORD *)v13 + 79) = 1LL;
          if ( v43 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00855E2);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_77;
            appended = RtlIntegerToUnicodeString(a1->Compartment->CompartmentId, 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_77;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_77;
            *((_WORD *)v13 + 376) = Destination.Length;
            *((_WORD *)v13 + 24) = Destination.Length;
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00853D2);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_77;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_77;
            *((_WORD *)v13 + 58) = Destination.Length;
            a3->LoopbackIfDescr.Length = *((_WORD *)v13 + 24);
            memmove(a3->LoopbackIfDescr.String, v13 + 754, *((unsigned __int16 *)v13 + 376));
            v33 = a3->LoopbackIfAlias.String;
            a3->LoopbackIfAlias.Length = *((_WORD *)v13 + 58);
            v32 = (wchar_t *)(v13 + 118);
            Length = *((unsigned __int16 *)v13 + 58);
          }
          else
          {
            if ( !ndisIsValidIfString(&a3->LoopbackIfDescr)
              || (p_LoopbackIfAlias = &a3->LoopbackIfAlias, !ndisIsValidIfString(&a3->LoopbackIfAlias)) )
            {
              appended = -1073676267;
              goto LABEL_77;
            }
            *((_WORD *)v13 + 24) = *v31;
            memmove(v13 + 754, a3->LoopbackIfDescr.String, (unsigned __int16)*v31);
            v32 = a3->LoopbackIfAlias.String;
            *((_WORD *)v13 + 58) = p_LoopbackIfAlias->Length;
            v33 = (wchar_t *)(v13 + 118);
            Length = p_LoopbackIfAlias->Length;
          }
          memmove(v33, v32, Length);
          *((_DWORD *)v13 + 178) = 1;
LABEL_16:
          *((_WORD *)v13 + 25) = 754;
          *(_GUID *)(v13 + 68) = a1->NetworkGuid;
          *((_DWORD *)v13 + 24) = a1->Compartment->CompartmentId;
          NetworkGuid = a1->NetworkGuid;
          *((_WORD *)v13 + 368) = 0;
          *(_GUID *)(v13 + 100) = NetworkGuid;
          v20 = ndisIfProviderHandle;
          if ( a3 )
            v20 = ndisIfLoopbackProviderHandle;
          appended = ndisIfRegisterInterfaceEx((__int64)v20, v18, a6, (struct _NET_IF_INFORMATION *)v13, a7, &v37);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork(a1, v18);
            goto LABEL_21;
          }
          goto LABEL_77;
        }
        *((_DWORD *)v13 + 1) |= 2u;
        *((_DWORD *)v13 + 2) = -1;
        *((_DWORD *)v13 + 3) = -1;
        *((_DWORD *)v13 + 4) = -1;
        *((_DWORD *)v13 + 5) = -1;
        *((_DWORD *)v13 + 7) = a6->Miniport->IfBlock->AccessType;
        *((_DWORD *)v13 + 8) = a6->Miniport->IfBlock->DirectionType;
        *((_DWORD *)v13 + 9) = a6->Miniport->IfBlock->ConnectionType;
        v13[40] = 0;
        v14 = a6->FilterFriendlyName->Length;
        if ( v14 > 0x200u )
          *((_WORD *)v13 + 376) = 512;
        else
          *((_WORD *)v13 + 376) = v14;
        v15 = *((_WORD *)v13 + 376);
        *((_WORD *)v13 + 24) = v15;
        if ( v15 )
          memmove(v13 + 754, a6->FilterFriendlyName->Buffer, v15);
        v16 = a6->Miniport->IfBlock->ifPhysAddress.Length;
        *((_WORD *)v13 + 21) = v16;
        *((_WORD *)v13 + 322) = v16;
        *((_DWORD *)v13 + 11) = 44565126;
        memmove(v13 + 646, a6->Miniport->IfBlock->ifPhysAddress.Address, v16);
        v17 = *((unsigned __int16 *)v13 + 21);
        *((_WORD *)v13 + 339) = v17;
        memmove(v13 + 680, a6->Miniport->IfBlock->PermanentPhysAddress.Address, v17);
        *(_GUID *)(v13 + 52) = a6->InterfaceGuid;
        *((_DWORD *)v13 + 21) = a6->Miniport->IfBlock->SupportedStatistics;
        *((_DWORD *)v13 + 22) = a6->MediaType;
        *((_DWORD *)v13 + 23) = a6->PhysicalMediaType;
        *((_DWORD *)v13 + 178) = a6->Miniport->IfBlock->ifAdminStatus;
        *((_QWORD *)v13 + 90) = a6->XmitLinkSpeed;
        *((_QWORD *)v13 + 91) = a6->RcvLinkSpeed;
        *((_DWORD *)v13 + 185) = a6->MediaConnectState;
        *((_DWORD *)v13 + 186) = a6->MediaDuplexState;
        *((_DWORD *)v13 + 158) = a6->Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)v13 + 159) = a6->Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)v13 + 160) = a6->Miniport->IfBlock->ifMtu;
LABEL_15:
        v18.Value = a4->Value;
        goto LABEL_16;
      }
      *((_DWORD *)v13 + 9) = 1;
      *(_QWORD *)(v13 + 28) = 2LL;
      if ( *((_WORD *)a5 + 518) == 1 )
      {
        if ( *((_DWORD *)a5 + 269) != 9 )
        {
          if ( *((_DWORD *)a5 + 269) == 10 )
          {
            *(_QWORD *)(v13 + 28) = 3LL;
            goto LABEL_30;
          }
          if ( *((_DWORD *)a5 + 269) == 11 )
          {
            *((_DWORD *)v13 + 9) = 1;
            *((_DWORD *)v13 + 7) = 3;
            *((_DWORD *)v13 + 8) = 2;
            goto LABEL_31;
          }
          if ( *((_DWORD *)a5 + 269) != 12 )
            goto LABEL_31;
        }
      }
      else
      {
        if ( *((_WORD *)a5 + 518) == 6 || *((_WORD *)a5 + 518) == 9 )
          goto LABEL_29;
        if ( *((_WORD *)a5 + 518) != 23 )
        {
          if ( *((_WORD *)a5 + 518) == 37 )
          {
            *(_QWORD *)(v13 + 28) = 4LL;
            goto LABEL_30;
          }
          if ( *((_WORD *)a5 + 518) != 71 )
          {
            if ( *((_WORD *)a5 + 518) == 131 )
            {
              *((_DWORD *)v13 + 9) = 1;
LABEL_47:
              *(_QWORD *)(v13 + 28) = 3LL;
            }
LABEL_31:
            *((_DWORD *)v13 + 1) = 28;
            *((_DWORD *)v13 + 5) = -1;
            *((_DWORD *)v13 + 2) = -1;
            *((_DWORD *)v13 + 3) = -1;
            *((_DWORD *)v13 + 4) = -1;
            v23 = (*((unsigned __int8 *)a5 + 1084) >> 1) & 1;
            *((_DWORD *)v13 + 6) = 0;
            v13[40] = 0;
            *((_DWORD *)v13 + 1) = v23 | 0x1C;
            *(_DWORD *)(v13 + 42) = 0;
            *((_WORD *)v13 + 23) = 0;
            *((_DWORD *)v13 + 22) = *((_DWORD *)a5 + 269);
            *((_DWORD *)v13 + 23) = *((_DWORD *)a5 + 270);
            *(_QWORD *)(v13 + 636) = 0LL;
            *((_WORD *)v13 + 322) = 0;
            *((_WORD *)v13 + 339) = 0;
            *((_QWORD *)v13 + 90) = 0LL;
            *((_QWORD *)v13 + 91) = 0LL;
            *(_QWORD *)(v13 + 740) = 0LL;
            *((_DWORD *)v13 + 178) = 2;
            *((_DWORD *)v13 + 158) = 6;
            v24 = *((_WORD *)a5 + 2);
            if ( v24 > 0x200u )
              *((_WORD *)v13 + 58) = 512;
            else
              *((_WORD *)v13 + 58) = v24;
            v25 = *((_WORD *)v13 + 58);
            if ( v25 )
              memmove(v13 + 118, (char *)a5 + 6, v25);
            v26 = *((_WORD *)a5 + 260);
            if ( v26 )
            {
              if ( v26 > 0x200u )
                *((_WORD *)v13 + 376) = 512;
              else
                *((_WORD *)v13 + 376) = v26;
              memmove(v13 + 754, (char *)a5 + 522, *((unsigned __int16 *)v13 + 376));
              *((_WORD *)v13 + 24) = *((_WORD *)v13 + 376);
            }
            *(_OWORD *)(v13 + 52) = *((_OWORD *)a5 + 65);
            v27 = *((_WORD *)a5 + 544);
            if ( v27 )
            {
              *((_WORD *)v13 + 21) = v27;
              *((_WORD *)v13 + 322) = v27;
              *((_DWORD *)v13 + 11) = 44565126;
              memmove(v13 + 646, (char *)a5 + 1090, v27);
              v28 = *((unsigned __int16 *)v13 + 21);
              *((_WORD *)v13 + 339) = v28;
              memmove(v13 + 680, (char *)a5 + 1124, v28);
            }
            goto LABEL_15;
          }
LABEL_29:
          *(_QWORD *)(v13 + 28) = 2LL;
LABEL_30:
          *((_DWORD *)v13 + 9) = 1;
          goto LABEL_31;
        }
      }
      *((_DWORD *)v13 + 9) = 3;
      goto LABEL_47;
    }
    appended = -1073741670;
  }
LABEL_22:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qqqqqL(IfBlock, a2, a1, a3, a4, a5, a6, appended);
  return (unsigned int)appended;
}
