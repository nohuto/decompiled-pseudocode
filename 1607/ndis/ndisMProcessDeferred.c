/*
 * XREFs of ndisMProcessDeferred @ 0x1C005E304
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004C7E0 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056390 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C005C5D0 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C005C760 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C0060290 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C0060374 (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C0060810 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0060A30 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisMResetCompleteStage2 @ 0x1C0023B9C (ndisMResetCompleteStage2.c)
 *     ndisMResetCompleteStage1 @ 0x1C0023CBC (ndisMResetCompleteStage1.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     ndisMDeferredReturnPackets @ 0x1C005DA84 (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C005E698 (ndisMProcessResetRequested.c)
 */

void __fastcall ndisMProcessDeferred(__int64 MiniportAdapterHandle)
{
  _QWORD *v1; // rdi
  char v2; // bl
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  void (__fastcall *v6)(_QWORD, __int64); // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  struct _NDIS_STACK_RESERVED *v9; // r8
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  unsigned __int8 v16; // [rsp+60h] [rbp+8h]

  v1 = (_QWORD *)MiniportAdapterHandle;
  v16 = 0;
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
  while ( 1 )
  {
    v2 = 0;
    if ( v1[104] && (v1[15] & 0x80300000) == 0 )
    {
      v3 = (_QWORD *)v1[104];
      if ( v3 )
      {
        v1[104] = *v3;
        *v3 = v1[111];
        v1[111] = v3;
      }
      ((void (__fastcall *)(_QWORD *))v1[79])(v1);
      v2 = 1;
    }
    if ( v1[107] )
      break;
    if ( v1[105] )
    {
      v4 = (_QWORD *)v1[105];
      if ( v4 )
      {
        v1[105] = *v4;
        *v4 = v1[112];
        v1[112] = v4;
      }
      ndisMDeferredReturnPackets((__int64)v1);
    }
    if ( *((int *)v1 + 30) < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D3 >= 4u )
        WPP_SF_q(0x2Fu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &NotifyMiniportAction,
          (const GUID *)v1 + 254,
          (unsigned __int64)(v1 + 508),
          *((_DWORD *)v1 + 1028),
          v1[510],
          0);
      goto LABEL_52;
    }
    if ( v1[109] )
    {
      MiniportAdapterHandle = v1[109];
      if ( MiniportAdapterHandle )
      {
        v1[109] = *(_QWORD *)MiniportAdapterHandle;
        v5 = *(_QWORD *)(MiniportAdapterHandle + 16);
        v6 = *(void (__fastcall **)(_QWORD, __int64))(MiniportAdapterHandle + 24);
        ExFreePoolWithTag((PVOID)MiniportAdapterHandle, 0);
        if ( v6 )
        {
          v1[65] = 0LL;
          *((_DWORD *)v1 + 464) = 0;
          KeReleaseSpinLockFromDpcLevel(v1 + 12);
          v6(v1[3], v5);
          KeAcquireSpinLockAtDpcLevel(v1 + 12);
          v1[65] = KeGetCurrentThread();
          *((_DWORD *)v1 + 464) = 724377;
        }
      }
      v2 = 1;
    }
    if ( v1[106] )
    {
      if ( (unsigned __int8)byte_1C00895D3 >= 4u )
        WPP_SF_q(0x30u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &NotifyMiniportAction,
          (const GUID *)v1 + 254,
          (unsigned __int64)(v1 + 508),
          *((_DWORD *)v1 + 1028),
          v1[510],
          1);
      v7 = ndisMProcessResetRequested(v1);
      v10 = v7;
      if ( v7 == 259 )
      {
        if ( (unsigned __int8)byte_1C00895D3 >= 4u )
          WPP_SF_q(0x31u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
          Template_jqxq(
            v8,
            &NotifyMiniportAction,
            (const GUID *)v1 + 254,
            (unsigned __int64)(v1 + 508),
            *((_DWORD *)v1 + 1028),
            v1[510],
            2);
        goto LABEL_52;
      }
      LOBYTE(v9) = v16;
      v11 = ndisMResetCompleteStage1((__int64)v1, v7, v9);
      MiniportAdapterHandle = v16;
      if ( v11 )
        MiniportAdapterHandle = 0LL;
      v16 = MiniportAdapterHandle;
      if ( !(_BYTE)MiniportAdapterHandle || v10 )
      {
        ndisMResetCompleteStage2(v1, v12);
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      if ( v1[103] )
      {
        v13 = (_QWORD *)v1[103];
        if ( v13 )
        {
          v1[103] = *v13;
          *v13 = v1[110];
          v1[110] = v13;
        }
        ndisMDoOidRequest((unsigned __int8 *)v1);
        v2 = 1;
      }
      if ( v1[104] )
      {
        v14 = (_QWORD *)v1[104];
        if ( v14 )
        {
          v1[104] = *v14;
          *v14 = v1[111];
          v1[111] = v14;
        }
        ((void (__fastcall *)(_QWORD *))v1[79])(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_52;
    }
  }
  if ( v1[103] )
  {
    v15 = (_QWORD *)v1[103];
    if ( v15 )
    {
      v1[103] = *v15;
      *v15 = v1[110];
      v1[110] = v15;
    }
    ndisMDoOidRequest((unsigned __int8 *)v1);
  }
LABEL_52:
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
    WPP_SF_q(0x32u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)v1);
}
