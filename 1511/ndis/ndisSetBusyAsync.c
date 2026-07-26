/*
 * XREFs of ndisSetBusyAsync @ 0x1C0025818
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000B5B0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniport @ 0x1C000E0D0 (ndisMSendNBLToMiniport.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C000ED60 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C000F390 (ndisQueuedCheckForHang.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0041408 (ndisDoCancelDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C00422F8 (ndisMDoDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C004F3D0 (ndisMCancelSendNetBufferListsOnMiniport.c)
 *     ndisReplaySendNbls @ 0x1C0066B90 (ndisReplaySendNbls.c)
 * Callees:
 *     ndisSSInvalidateOidCache @ 0x1C0011E48 (ndisSSInvalidateOidCache.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qq @ 0x1C0049D88 (Template_qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0050F7C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z @ 0x1C006606C (-ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00663FC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisDequeueDirectOidsByRequestId @ 0x1C00666AC (ndisDequeueDirectOidsByRequestId.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C0066A4C (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C0066AB0 (ndisQueueSendNblsOnMiniport.c)
 */

char __fastcall ndisSetBusyAsync(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  char v7; // r14
  char v11; // r13
  struct _NET_BUFFER_LIST *v12; // r12
  int v13; // eax
  char v14; // bp
  unsigned int v15; // esi
  __int64 v17; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 4512);
  v21[1] = v21;
  v7 = 1;
  v21[0] = v21;
  v11 = 1;
  v12 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v13 = *(_DWORD *)(v5 + 480);
  if ( (v13 & 0x14) == 0 || (v13 & 0x200) != 0 )
  {
    if ( a3 == 49 )
    {
      *(_DWORD *)(v5 + 488) |= 0x10u;
      goto LABEL_5;
    }
    if ( a3 == 50 )
    {
      *(_DWORD *)(v5 + 144) = 0;
      ndisSSInvalidateOidCache(v5);
      *(_DWORD *)(v5 + 504) += a2;
      goto LABEL_5;
    }
    if ( a3 == 51 )
    {
      if ( *(_DWORD *)(v5 + 504) )
      {
        *(_DWORD *)(v5 + 508) += a2;
        goto LABEL_5;
      }
    }
    else
    {
      if ( a3 == 52 )
      {
        *(_DWORD *)(v5 + 144) = 0;
        ndisSSInvalidateOidCache(v5);
        *(_DWORD *)(v5 + 496) += a2;
        goto LABEL_5;
      }
      if ( a3 != 53 )
      {
        if ( a3 == 54 )
        {
          *(_DWORD *)(v5 + 144) = 0;
          ndisSSInvalidateOidCache(v5);
          *(_DWORD *)(v5 + 552) += a2;
        }
        goto LABEL_5;
      }
      if ( *(_DWORD *)(v5 + 496) )
      {
        *(_DWORD *)(v5 + 500) += a2;
LABEL_5:
        *(_DWORD *)(v5 + 616) = 0;
        v14 = 1;
        *(_DWORD *)(v5 + 612) = a3;
LABEL_6:
        v15 = 0;
        goto LABEL_7;
      }
    }
    v11 = 0;
    goto LABEL_5;
  }
  v14 = 0;
  switch ( a3 )
  {
    case '1':
      goto LABEL_6;
    case '3':
      ndisDequeueDirectOidsByRequestId(v5, a4, v21);
      goto LABEL_6;
    case '5':
      v12 = ndisRemoveFromNblQueueByCancelId((struct _NBL_QUEUE *)(v5 + 520), (void *)a4);
      goto LABEL_6;
    case '6':
      ndisQueueReceiveNblsOnMiniport(v5, a4);
      goto LABEL_6;
    case '4':
      ndisQueueSendNblsOnMiniport(v5, a4, a5);
      *(_DWORD *)(v5 + 608) = 0;
      break;
    case '2':
      v19 = *(_QWORD **)(v5 + 568);
      v20 = a4 + 72;
      *(_QWORD *)(a4 + 72) = v5 + 560;
      *(_QWORD *)(a4 + 80) = v19;
      if ( *v19 != v5 + 560 )
        __fastfail(3u);
      *v19 = v20;
      *(_QWORD *)(v5 + 568) = v20;
      *(_DWORD *)(v5 + 608) = *(_DWORD *)(a4 + 32);
      break;
  }
  if ( (*(_DWORD *)(v5 + 480) & 0xC0) != 0 )
    goto LABEL_6;
  *(_DWORD *)(v5 + 604) = a3;
  v15 = a3;
  if ( (unsigned __int8)byte_1C0083716 >= 4u )
    WPP_SF_qD(35LL, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, a1, a3);
  *(_DWORD *)(v5 + 480) |= 0x40u;
  ndisScheduleWorkItemInternal(v5 + 352);
LABEL_7:
  if ( (*(_DWORD *)(v5 + 480) & 0x200) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, NewIrql);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, NewIrql);
    if ( v12 )
    {
      Alignment = v12;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal(a1, v12, 0LL, 0LL);
    }
    if ( (_QWORD *)v21[0] != v21 )
      ndisCancelDequeuedDirectOidRequests(a1, v21);
    if ( v15 && (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_qq(v17, &SSResumeRequested, a1 + 4064, (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFFLL, v15);
    if ( !v14 || !v11 )
      return 0;
  }
  return v7;
}
