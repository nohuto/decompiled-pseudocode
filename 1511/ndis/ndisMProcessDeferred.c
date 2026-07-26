/*
 * XREFs of ndisMProcessDeferred @ 0x1C0059EE8
 * Callers:
 *     ndisMProcessSGListS @ 0x1C00481F0 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00517C0 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C0057E40 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C0057FD0 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C005C250 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C005C334 (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C005C7D0 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C005C9F0 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     ndisMDeferredReturnPackets @ 0x1C00595E0 (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C005A27C (ndisMProcessResetRequested.c)
 *     ndisMResetCompleteStage1 @ 0x1C005A97C (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA2C (ndisMResetCompleteStage2.c)
 */

void __fastcall ndisMProcessDeferred(__int64 MiniportAdapterHandle)
{
  NDIS_HANDLE v1; // rdi
  char v2; // bl
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  void (__fastcall *v6)(_QWORD, __int64); // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // esi
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int8 v15; // [rsp+60h] [rbp+8h]

  v1 = (NDIS_HANDLE)MiniportAdapterHandle;
  v15 = 0;
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, MiniportAdapterHandle);
  while ( 1 )
  {
    v2 = 0;
    if ( *((_QWORD *)v1 + 104) && (*((_DWORD *)v1 + 30) & 0x80300000) == 0 )
    {
      v3 = (_QWORD *)*((_QWORD *)v1 + 104);
      if ( v3 )
      {
        *((_QWORD *)v1 + 104) = *v3;
        *v3 = *((_QWORD *)v1 + 111);
        *((_QWORD *)v1 + 111) = v3;
      }
      (*((void (__fastcall **)(NDIS_HANDLE))v1 + 79))(v1);
      v2 = 1;
    }
    if ( *((_QWORD *)v1 + 107) )
      break;
    if ( *((_QWORD *)v1 + 105) )
    {
      v4 = (_QWORD *)*((_QWORD *)v1 + 105);
      if ( v4 )
      {
        *((_QWORD *)v1 + 105) = *v4;
        *v4 = *((_QWORD *)v1 + 112);
        *((_QWORD *)v1 + 112) = v4;
      }
      ndisMDeferredReturnPackets((__int64)v1);
    }
    if ( *((int *)v1 + 30) < 0 )
    {
      if ( (unsigned __int8)byte_1C0083713 >= 4u )
        WPP_SF_q(0x2Fu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &NotifyMiniportAction,
          (const GUID *)v1 + 254,
          (unsigned __int64)v1 + 4064,
          *((_DWORD *)v1 + 1028),
          *((_QWORD *)v1 + 510),
          0);
      goto LABEL_52;
    }
    if ( *((_QWORD *)v1 + 109) )
    {
      MiniportAdapterHandle = *((_QWORD *)v1 + 109);
      if ( MiniportAdapterHandle )
      {
        *((_QWORD *)v1 + 109) = *(_QWORD *)MiniportAdapterHandle;
        v5 = *(_QWORD *)(MiniportAdapterHandle + 16);
        v6 = *(void (__fastcall **)(_QWORD, __int64))(MiniportAdapterHandle + 24);
        ExFreePoolWithTag((PVOID)MiniportAdapterHandle, 0);
        if ( v6 )
        {
          *((_QWORD *)v1 + 65) = 0LL;
          *((_DWORD *)v1 + 464) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1 + 12);
          v6(*((_QWORD *)v1 + 3), v5);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v1 + 12);
          *((_QWORD *)v1 + 65) = KeGetCurrentThread();
          *((_DWORD *)v1 + 464) = 724348;
        }
      }
      v2 = 1;
    }
    if ( *((_QWORD *)v1 + 106) )
    {
      if ( (unsigned __int8)byte_1C0083713 >= 4u )
        WPP_SF_q(0x30u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &NotifyMiniportAction,
          (const GUID *)v1 + 254,
          (unsigned __int64)v1 + 4064,
          *((_DWORD *)v1 + 1028),
          *((_QWORD *)v1 + 510),
          1);
      v7 = ndisMProcessResetRequested(v1);
      v10 = v7;
      if ( v7 == 259 )
      {
        if ( (unsigned __int8)byte_1C0083713 >= 4u )
          WPP_SF_q(0x31u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
          Template_jqxq(
            v8,
            &NotifyMiniportAction,
            (const GUID *)v1 + 254,
            (unsigned __int64)v1 + 4064,
            *((_DWORD *)v1 + 1028),
            *((_QWORD *)v1 + 510),
            2);
        goto LABEL_52;
      }
      LOBYTE(v9) = v15;
      v11 = ndisMResetCompleteStage1(v1, v7, v9);
      MiniportAdapterHandle = v15;
      if ( v11 )
        MiniportAdapterHandle = 0LL;
      v15 = MiniportAdapterHandle;
      if ( !(_BYTE)MiniportAdapterHandle || v10 )
      {
        ndisMResetCompleteStage2(v1);
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      if ( *((_QWORD *)v1 + 103) )
      {
        v12 = (_QWORD *)*((_QWORD *)v1 + 103);
        if ( v12 )
        {
          *((_QWORD *)v1 + 103) = *v12;
          *v12 = *((_QWORD *)v1 + 110);
          *((_QWORD *)v1 + 110) = v12;
        }
        ndisMDoOidRequest((unsigned __int8 *)v1);
        v2 = 1;
      }
      if ( *((_QWORD *)v1 + 104) )
      {
        v13 = (_QWORD *)*((_QWORD *)v1 + 104);
        if ( v13 )
        {
          *((_QWORD *)v1 + 104) = *v13;
          *v13 = *((_QWORD *)v1 + 111);
          *((_QWORD *)v1 + 111) = v13;
        }
        (*((void (__fastcall **)(NDIS_HANDLE))v1 + 79))(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_52;
    }
  }
  if ( *((_QWORD *)v1 + 103) )
  {
    v14 = (_QWORD *)*((_QWORD *)v1 + 103);
    if ( v14 )
    {
      *((_QWORD *)v1 + 103) = *v14;
      *v14 = *((_QWORD *)v1 + 110);
      *((_QWORD *)v1 + 110) = v14;
    }
    ndisMDoOidRequest((unsigned __int8 *)v1);
  }
LABEL_52:
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_q(0x32u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)v1);
}
