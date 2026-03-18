/*
 * XREFs of VidSchSubmitCommand @ 0x1C0042B20
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0005520 (VidSchiUpdatePresentParameters.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiConvertDeferredWaits @ 0x1C0010C34 (VidSchiConvertDeferredWaits.c)
 *     VidSchiSetPriorityContext @ 0x1C0010F74 (VidSchiSetPriorityContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C00148C0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C009FB08 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r13
  int v6; // esi
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // edi
  __int64 *v17; // rax
  __int64 *PoolWithTag; // rdi
  __int64 v19; // rcx
  __int64 *v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r15d
  __int64 v31; // rdx
  void *v32; // rcx
  __int64 v33; // rcx
  const void *v34; // rsi
  KPRIORITY PriorityThread; // eax
  __int64 ***v36; // rax
  __int64 **v37; // rdi
  __int64 **v38; // rdx
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  void *v45; // rcx
  _QWORD v46[20]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int Size; // [rsp+130h] [rbp+8h]
  __int64 v48; // [rsp+148h] [rbp+20h]

  v3 = a1;
  if ( !a1 || !a2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 104);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 164) || (a1 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 160), 0, 0)) )
  {
    v42 = WdLogNewEntry5_WdWarning(a1);
    *(_QWORD *)(v42 + 24) = v4;
    *(_QWORD *)(v42 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v42);
    return 3223192064LL;
  }
  v6 = *(_QWORD *)a2;
  v48 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 464);
    if ( (v6 & 0x40) != 0 )
    {
      v8 = v6 & 0xFFFFFF7F;
      if ( v7 == -1 )
      {
        v6 = v8 | 0x1000;
        LODWORD(v48) = v6;
        *(_DWORD *)(v4 + 464) = *(_DWORD *)(a2 + 116);
      }
      else
      {
        if ( v7 != *(_DWORD *)(a2 + 116) )
        {
          v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, a2);
          v9[3] = v5;
          v9[4] = v4;
          v9[5] = *(unsigned int *)(a2 + 116);
          v9[6] = *(unsigned int *)(v4 + 464);
          WdLogEvent5_WdAssertion(v9);
          return 3221225485LL;
        }
        v6 = v8 | 0x2000;
        LODWORD(v48) = v6;
      }
    }
    else
    {
      if ( v7 == -1 )
      {
        v6 |= 0x7000u;
        LODWORD(v48) = v6;
      }
      else if ( v7 == *(_DWORD *)(a2 + 116) )
      {
        v6 |= 0x4000u;
        LODWORD(v48) = v6;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, a2);
        v11[3] = v5;
        v11[4] = v4;
        v11[5] = *(unsigned int *)(a2 + 116);
        v11[6] = *(unsigned int *)(v4 + 464);
        WdLogEvent5_WdAssertion(v11);
      }
      *(_DWORD *)(v4 + 464) = -1;
    }
    if ( (v6 & 4) != 0 )
    {
      v13 = VidSchiSetFlipDevice(
              (struct _VIDSCH_GLOBAL *)v5,
              *(_DWORD *)(a2 + 116),
              (_QWORD *)v4,
              *(_DWORD *)(a2 + 120),
              9u,
              (*(_DWORD *)a2 & 0x20000000) != 0);
      if ( v13 < 0 )
      {
        v14 = WdLogNewEntry5_WdWarning(v12);
        WdLogEvent5_WdWarning(v14);
        return (unsigned int)v13;
      }
      if ( *(int *)(a2 + 120) >= 3 )
      {
        RtlNumberOfSetBitsUlongPtr(*(unsigned __int8 *)(a2 + 425));
        RtlNumberOfSetBitsUlongPtr((unsigned __int8)*(_DWORD *)(a2 + 424));
      }
      VidSchiUpdatePresentParameters(v5, (_DWORD *)a2);
    }
  }
  else if ( (v6 & 0x40000) != 0
         && !*(_DWORD *)(v3 + 424)
         && !*(_DWORD *)(v3 + 784)
         && (*(_BYTE *)(a2 + 3) & 1) == 0
         && (*(_DWORD *)(a2 + 4) & 1) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      *(PKSPIN_LOCK *)(a2 + 96),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(a2 + 104),
      0,
      0,
      0,
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 24),
      a2);
    return 0LL;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  v16 = *(_DWORD *)(v15 + 128) * (48 * *(_DWORD *)(v15 + 56) + ((8 * *(_DWORD *)(v15 + 56) + 167) & 0xFFFFFFF8))
      + 8 * (*(_DWORD *)(v15 + 56) + 88);
  if ( v16 <= 0x370 )
    v16 = 880;
  Size = v16;
  v17 = VidSchiInterlockedRemoveHeadListIfExist(
          (KSPIN_LOCK *)(v15 + 1864),
          (__int64 **)(v3 + 712),
          (_DWORD *)(v3 + 728));
  if ( v17 )
  {
    PoolWithTag = v17 - 1;
    goto LABEL_41;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v16, 0x68536956u);
  if ( !PoolWithTag )
  {
    memset(v46, 0, sizeof(v46));
    v19 = *(_QWORD *)(v3 + 96);
    LODWORD(v46[4]) |= 0x10u;
    LODWORD(v46[2]) = 1;
    LODWORD(v46[6]) = *(unsigned __int16 *)(v19 + 4);
    VidSchRegisterCompletionEvent(v15, (__int64)v46);
    do
    {
      v20 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v15 + 1864),
              (__int64 **)(v3 + 712),
              (_DWORD *)(v3 + 728));
      if ( v20 )
        PoolWithTag = v20 - 1;
      else
        VidSchWaitForCompletionEvent(v15, (__int64)v46, 19LL);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v15 + 1872), v46, 0LL);
LABEL_41:
    if ( !PoolWithTag )
      goto LABEL_43;
  }
  memset(PoolWithTag, 0, Size);
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 1;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v15 + 1864), v3 + 760, PoolWithTag + 1, (_DWORD *)(v3 + 776));
LABEL_43:
  *(_DWORD *)PoolWithTag = 1953189969;
  v21 = 0;
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 2;
  *((_DWORD *)PoolWithTag + 16) = 0;
  if ( (v6 & 0x40000) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 7;
  }
  else if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 12) = 3;
    v23 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v23 != -1 )
    {
      v24 = *(unsigned __int8 *)(a2 + 425);
      v25 = v24 | (unsigned int)(unsigned __int8)*(_DWORD *)(a2 + 424);
      if ( v24 | (unsigned __int8)*(_DWORD *)(a2 + 424) )
      {
        v26 = *(_QWORD *)(v5 + 8 * v23 + 2968);
        do
        {
          v27 = !_BitScanForward(&v28, v25);
          v29 = 0xFFFFFFFFLL;
          if ( !v27 )
            v29 = v28;
          v30 = (char)v29;
          v31 = 272LL * (unsigned int)(char)v29;
          if ( *(_DWORD *)(v31 + v26 + 156) == 2 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v31, v25, v26);
            v44[5] = v30;
            v44[3] = 281LL;
            v44[4] = 0x100000LL;
            v44[6] = *(unsigned int *)(a2 + 116);
            v44[7] = v5;
            WdLogEvent5_WdCriticalError(v44);
            VidMmFreeDeferredDmaBufferMapping(v45);
            JUMPOUT(0x1C0043295LL);
          }
          v25 = ~(1 << v29) & (unsigned int)v25;
        }
        while ( (_DWORD)v25 );
        v21 = 0;
      }
    }
  }
  PoolWithTag[11] = v3;
  PoolWithTag[12] = (__int64)KeGetCurrentThread();
  PoolWithTag[9] = v48;
  PoolWithTag[17] = *(_QWORD *)(a2 + 96);
  PoolWithTag[18] = *(_QWORD *)(a2 + 104);
  *((_DWORD *)PoolWithTag + 38) = *(_DWORD *)(a2 + 116);
  if ( (v6 & 4) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*(_DWORD *)(v5 + 2136) >> 7) & 4;
    if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) == 0 && ((v6 & 0x400) == 0 || (v6 & 0x800) != 0) )
    {
      v22 = *(unsigned int *)(a2 + 116);
      *(_QWORD *)(a2 + 128) = ++*(_QWORD *)(v4 + 8 * v22 + 208);
    }
  }
  else if ( (v6 & 0x20) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*(_DWORD *)(v5 + 2136) >> 8) & 4;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 16) = 4;
  }
  memmove(PoolWithTag + 33, (const void *)a2, *(unsigned int *)(a2 + 420));
  if ( *(_QWORD *)(a2 + 24) )
    _InterlockedIncrement((volatile signed __int32 *)(PoolWithTag[36] + 4));
  v32 = (void *)PoolWithTag[44];
  if ( v32 )
    ObfReferenceObject(v32);
  v33 = PoolWithTag[34];
  if ( v33 && (PoolWithTag[33] & 0x8000000) != 0 && !PoolWithTag[38] )
    PoolWithTag[38] = *(_QWORD *)(v33 + 96);
  if ( (PoolWithTag[74] & 1) != 0 )
    VidSchiConvertDeferredWaits(v3);
  if ( *(_DWORD *)(a2 + 344) )
  {
    v34 = *(const void **)(a2 + 336);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove((void *)PoolWithTag[75], v34, 8LL * *(unsigned int *)(a2 + 344));
  }
  if ( (*(_DWORD *)(v5 + 2136) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v3, PriorityThread);
  }
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  v36 = (__int64 ***)(PoolWithTag + 4);
  *((_DWORD *)PoolWithTag + 13) = 3;
  v37 = (__int64 **)(v3 + 680);
  v38 = *(__int64 ***)(v3 + 688);
  if ( *v38 != (__int64 *)(v3 + 680) )
    __fastfail(3u);
  *v36 = v37;
  v36[1] = v38;
  *v38 = (__int64 *)v36;
  *(_QWORD *)(v3 + 688) = v36;
  ++*(_DWORD *)(v3 + 424);
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
    v21 = 1;
  while ( *(_DWORD *)(v3 + 424) > v21 )
  {
    v39 = *v37;
    v40 = **v37;
    if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v40 + 8) != v39 )
      __fastfail(3u);
    *v37 = (__int64 *)v40;
    *(_QWORD *)(v40 + 8) = v37;
    --*(_DWORD *)(v3 + 424);
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)(v39 - 4));
  }
  v41 = *(unsigned int *)(a2 + 116);
  if ( (unsigned int)v41 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v41 + 2968) + 46912LL), 2, 1);
  return 0LL;
}
