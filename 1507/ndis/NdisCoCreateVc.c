/*
 * XREFs of NdisCoCreateVc @ 0x1C00F7550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  KSPIN_LOCK v7; // r13
  _DWORD *v8; // r15
  int v9; // ebp
  __int64 v10; // rax
  _DWORD *v11; // rbx
  _BOOL8 v12; // r12
  _DWORD *PoolWithTag; // rax
  KSPIN_LOCK *v14; // rax
  KSPIN_LOCK *v15; // rdi
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  NDIS_HANDLE *v21; // r13
  NDIS_HANDLE *v22; // r12
  _DWORD *v23; // r8
  int v24; // eax
  __int64 v25; // rax
  KSPIN_LOCK *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  _LIST_ENTRY *v29; // rdx
  void (__fastcall *v30)(_QWORD); // rax
  KSPIN_LOCK v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  void (__fastcall *v34)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v35)(_QWORD *, struct _NDIS_PACKET **, unsigned int); // rax
  KIRQL NewIrql; // [rsp+20h] [rbp-58h]
  bool v38; // [rsp+24h] [rbp-54h]
  LARGE_INTEGER *v39; // [rsp+28h] [rbp-50h]
  char Increment; // [rsp+80h] [rbp+8h]
  char v41; // [rsp+88h] [rbp+10h]

  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_(0x12u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
  v7 = *((_QWORD *)NdisBindingHandle + 2);
  v39 = (LARGE_INTEGER *)v7;
  if ( !NdisAfHandle || (Increment = 1, (*((_DWORD *)NdisAfHandle + 2) & 1) == 0) )
    Increment = 0;
  if ( !NdisAfHandle || (v41 = 1, NdisBindingHandle != *((NDIS_HANDLE *)NdisAfHandle + 46)) )
    v41 = 0;
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = *((_QWORD *)NdisBindingHandle + 3);
  v11 = 0LL;
  v12 = (*(_DWORD *)(v10 + 64) & 0x40000000) != 0;
  v38 = (*(_DWORD *)(v10 + 64) & 0x40000000) != 0;
  if ( v8 && (*(_DWORD *)(v10 + 64) & 0x40000000) == 0 )
  {
    v9 = -1073741823;
    goto LABEL_117;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_117;
  }
  memset(PoolWithTag, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)v11 + 2);
  *((_QWORD *)v11 + 20) = v11 + 38;
  *((_QWORD *)v11 + 19) = v11 + 38;
  *((_QWORD *)v11 + 5) = v11 + 8;
  *((_QWORD *)v11 + 4) = v11 + 8;
  *((_QWORD *)v11 + 7) = v11 + 12;
  *((_QWORD *)v11 + 6) = v11 + 12;
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C008531A >= 4u )
      WPP_SF_(0x14u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    v15 = (KSPIN_LOCK *)*((_QWORD *)v8 + 9);
    *((_QWORD *)v11 + 25) = *((_QWORD *)v8 + 25);
LABEL_26:
    v16 = Increment;
    goto LABEL_27;
  }
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_(0x13u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
  v14 = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v11, 0);
    v11 = 0LL;
    goto LABEL_117;
  }
  memset(v14, 0, 0x90uLL);
  KeInitializeSpinLock(v15 + 1);
  v16 = Increment;
  v15[15] = v7;
  if ( !Increment )
  {
    v9 = (*((__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))NdisBindingHandle + 127))(
           *(_QWORD *)(v7 + 24),
           v11,
           v11 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag(v15, 0);
      goto LABEL_96;
    }
    *((_BYTE *)v11 + 336) = 1;
    goto LABEL_26;
  }
LABEL_27:
  *((_QWORD *)v11 + 26) = *(_QWORD *)(*(_QWORD *)(v7 + 3816) + 280LL);
  if ( *(_BYTE *)(v7 + 32) < 6u )
    *((_QWORD *)v11 + 30) = 0LL;
  else
    *((_QWORD *)v11 + 30) = *(_QWORD *)(*(_QWORD *)(v7 + 3816) + 536LL);
  if ( !v16 )
  {
    *((_QWORD *)v11 + 27) = *(_QWORD *)(*(_QWORD *)(v7 + 3816) + 512LL);
    *((_QWORD *)v11 + 28) = *(_QWORD *)(*(_QWORD *)(v7 + 3816) + 520LL);
    *((_QWORD *)v11 + 29) = *(_QWORD *)(*(_QWORD *)(v7 + 3816) + 528LL);
  }
  *((_QWORD *)v11 + 24) = v7;
  *((_QWORD *)v11 + 1) = (char *)v15 + 4;
  *((_QWORD *)v11 + 9) = v15;
  *((_QWORD *)v11 + 8) = NdisAfHandle;
  *v11 = 1;
  if ( !NdisAfHandle )
  {
    if ( (unsigned __int8)byte_1C008531A >= 4u )
      WPP_SF_(0x15u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    *((_QWORD *)v11 + 3) = ProtocolVcContext;
    *((_QWORD *)v11 + 10) = NdisBindingHandle;
    v15[5] = (KSPIN_LOCK)v11;
    v31 = *((_QWORD *)v11 + 3);
    v11[22] = 1;
    v15[3] = v31;
    v15[2] = (KSPIN_LOCK)NdisBindingHandle;
    v32 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v32 + 56) < 6u )
    {
      v15[6] = *(_QWORD *)(v32 + 304);
      v15[7] = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      v15[8] = 0LL;
      v15[9] = 0LL;
    }
    else
    {
      v15[8] = *(_QWORD *)(v32 + 216);
      v15[9] = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v15[6] = 0LL;
      v15[7] = 0LL;
    }
    *((_QWORD *)v11 + 21) = *((_QWORD *)NdisBindingHandle + 131);
    v33 = *((_QWORD *)NdisBindingHandle + 132);
    *((_QWORD *)v11 + 18) = ProtocolVcContext;
    *((_QWORD *)v11 + 22) = v33;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)((char *)NdisBindingHandle + 1096),
      (PLIST_ENTRY)v11 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
    goto LABEL_96;
  }
  *((_QWORD *)v11 + 10) = *((_QWORD *)NdisAfHandle + 46);
  *((_QWORD *)v11 + 17) = *((_QWORD *)NdisAfHandle + 5);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    *((_QWORD *)v11 + 14) = *((_QWORD *)NdisAfHandle + 36);
    *((_QWORD *)v11 + 15) = *((_QWORD *)NdisAfHandle + 41);
    v17 = *((_QWORD *)NdisAfHandle + 44);
  }
  else
  {
    *((_QWORD *)v11 + 14) = *((_QWORD *)NdisAfHandle + 17);
    *((_QWORD *)v11 + 15) = *((_QWORD *)NdisAfHandle + 22);
    v17 = *((_QWORD *)NdisAfHandle + 25);
  }
  *((_QWORD *)v11 + 16) = v17;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    *((_QWORD *)v11 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 96LL);
    *((_QWORD *)v11 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 4);
  }
  else
  {
    *((_QWORD *)v11 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 96LL);
    *((_QWORD *)v11 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 3);
  }
  *((_QWORD *)v11 + 23) = *(_QWORD *)(v18 + 112);
  if ( v8 )
    *((_DWORD *)v15 + 1) |= 0x10u;
  if ( !v12 )
  {
    v15[2] = *((_QWORD *)NdisAfHandle + 46);
    v19 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v19 + 56) < 6u )
    {
      v15[7] = *(_QWORD *)(v19 + 312);
      v15[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v15[8] = 0LL;
      v15[9] = 0LL;
    }
    else
    {
      v15[8] = *(_QWORD *)(v19 + 216);
      v15[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v15[7] = 0LL;
      v15[6] = 0LL;
    }
    v11[22] = 1;
    if ( v41 )
      v15[5] = (KSPIN_LOCK)v11;
    else
      v15[4] = (KSPIN_LOCK)v11;
    goto LABEL_56;
  }
  if ( v41 )
  {
    if ( v8 )
    {
      v15[5] = (KSPIN_LOCK)v8;
      v8[22] = 0;
    }
    else
    {
      v15[2] = *((_QWORD *)NdisAfHandle + 46);
      v20 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
      if ( *(_BYTE *)(v20 + 56) < 6u )
      {
        v15[7] = *(_QWORD *)(v20 + 312);
        v15[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
        v15[8] = 0LL;
        v15[9] = 0LL;
      }
      else
      {
        v15[8] = *(_QWORD *)(v20 + 216);
        v15[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
        v15[7] = 0LL;
        v15[6] = 0LL;
      }
    }
    v15[4] = (KSPIN_LOCK)v11;
  }
  else
  {
    v15[2] = *((_QWORD *)NdisAfHandle + 46);
    v25 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v25 + 56) < 6u )
    {
      v15[7] = *(_QWORD *)(v25 + 312);
      v15[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v15[8] = 0LL;
      v15[9] = 0LL;
    }
    else
    {
      v15[8] = *(_QWORD *)(v25 + 216);
      v15[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v15[7] = 0LL;
      v15[6] = 0LL;
    }
    v15[5] = (KSPIN_LOCK)v11;
    if ( v8 )
    {
      v15[4] = (KSPIN_LOCK)v8;
      v8[22] = 1;
      goto LABEL_56;
    }
  }
  v11[22] = 1;
LABEL_56:
  v21 = (NDIS_HANDLE *)(v11 + 6);
  v22 = (NDIS_HANDLE *)(v11 + 36);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 2);
  if ( NdisBindingHandle == *((NDIS_HANDLE *)NdisAfHandle + 46) )
  {
    *v21 = ProtocolVcContext;
    v23 = v11 + 36;
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v24 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 4) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v11,
              v23);
    else
      v24 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 3) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v11,
              v23);
    v9 = v24;
    if ( Increment )
      *((_QWORD *)v11 + 25) = *v22;
  }
  else
  {
    *v22 = ProtocolVcContext;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 46) + 1032LL))(
           *((_QWORD *)NdisAfHandle + 47),
           v11,
           v11 + 6);
  }
  if ( !v9 && (!v8 || v38 && !v41) )
    v15[3] = (KSPIN_LOCK)*v21;
  if ( v8 )
    *((_DWORD *)v15 + 1) &= ~0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)v11 + 2, NewIrql);
  if ( !v9 )
  {
    v26 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
    if ( v41 )
    {
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1096), (PLIST_ENTRY)v11 + 2, v26);
      *((_QWORD *)v11 + 13) = *v22;
      if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
        v27 = *((_QWORD *)NdisAfHandle + 4);
      else
        v27 = *((_QWORD *)NdisAfHandle + 3);
      *((_QWORD *)v11 + 12) = *(_QWORD *)(v27 + 16);
      if ( Increment )
        goto LABEL_97;
      v28 = *((_QWORD *)NdisAfHandle + 5);
      v29 = (_LIST_ENTRY *)(v11 + 38);
    }
    else
    {
      *((_QWORD *)v11 + 13) = *v21;
      *((_QWORD *)v11 + 12) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 1040LL);
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1096), (PLIST_ENTRY)(v11 + 38), v26);
      v28 = *((_QWORD *)NdisAfHandle + 46);
      v29 = (_LIST_ENTRY *)(v11 + 8);
    }
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v28 + 1096), v29, (PKSPIN_LOCK)(v28 + 232));
    goto LABEL_97;
  }
  if ( !v8 )
  {
    if ( !Increment )
    {
      v30 = (void (__fastcall *)(_QWORD))*((_QWORD *)v11 + 27);
      if ( v30 )
        v30(*((_QWORD *)v11 + 25));
    }
    ExFreePoolWithTag(v15, 0);
  }
  ExFreePoolWithTag(v11, 0);
  v11 = 0LL;
LABEL_96:
  if ( v9 )
    goto LABEL_117;
LABEL_97:
  if ( NdisAfHandle )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
      goto LABEL_99;
LABEL_104:
    if ( *(_BYTE *)(*((_QWORD *)v11 + 24) + 32LL) >= 6u )
    {
      if ( (unsigned __int8)byte_1C008531A >= 4u )
        WPP_SF_(0x16u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
      *((_QWORD *)v11 + 33) = 0LL;
      *((_QWORD *)v11 + 31) = ndisCoSendNetBufferListsToNetBufferLists;
      *((_QWORD *)v11 + 32) = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
      v34 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
      goto LABEL_108;
    }
    if ( (unsigned __int8)byte_1C008531A >= 4u )
      WPP_SF_(0x17u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    *((_QWORD *)v11 + 33) = 0LL;
    *((_QWORD *)v11 + 31) = ndisCoSendNetBufferListsToNdisPacket;
    *((_QWORD *)v11 + 34) = ndisMCoSendCompleteToNetBufferLists;
    v35 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
LABEL_115:
    *((_QWORD *)v11 + 36) = 0LL;
    *((_QWORD *)v11 + 35) = v35;
    *((_QWORD *)v11 + 32) = 0LL;
    goto LABEL_116;
  }
  if ( *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) >= 6u )
    goto LABEL_104;
LABEL_99:
  if ( *(_BYTE *)(*((_QWORD *)v11 + 24) + 32LL) < 6u )
  {
    if ( (unsigned __int8)byte_1C008531A >= 4u )
      WPP_SF_(0x19u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    *((_QWORD *)v11 + 31) = 0LL;
    *((_QWORD *)v11 + 33) = ndisCoSendPacketsToNdisPackets;
    *((_QWORD *)v11 + 34) = ndisMCoSendCompleteToNdisPacket;
    v35 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
    goto LABEL_115;
  }
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_(0x18u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
  *((_QWORD *)v11 + 31) = 0LL;
  *((_QWORD *)v11 + 32) = ndisMCoSendNetBufferListsCompleteToNdisPackets;
  *((_QWORD *)v11 + 33) = ndisCoSendPacketsToNetBufferLists;
  v34 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
LABEL_108:
  *((_QWORD *)v11 + 35) = 0LL;
  *((_QWORD *)v11 + 34) = 0LL;
  *((_QWORD *)v11 + 36) = v34;
LABEL_116:
  *((LARGE_INTEGER *)v11 + 39) = ExInterlockedAddLargeInteger(v39 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_117:
  *NdisVcHandle = v11;
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_qD(0x1Au, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, (__int64)v11, v9);
  return v9;
}
