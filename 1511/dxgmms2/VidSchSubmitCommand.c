/*
 * XREFs of VidSchSubmitCommand @ 0x1C0039780
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0002518 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSetPriorityContext @ 0x1C0010018 (VidSchiSetPriorityContext.c)
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00129F0 (VidSchiUpdatePresentParameters.c)
 *     VidSchiConvertDeferredWaits @ 0x1C00131C4 (VidSchiConvertDeferredWaits.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C008A340 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  struct _VIDSCH_GLOBAL *v7; // rdi
  unsigned int v8; // r12d
  int v9; // ebx
  __int64 v10; // r13
  unsigned int v11; // esi
  __int64 *v12; // rax
  __int64 *PoolWithTag; // rdi
  unsigned int *v14; // rcx
  unsigned int v15; // eax
  struct _VIDSCH_GLOBAL *v16; // rsi
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 **v19; // rbx
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 result; // rax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // eax
  unsigned int v35; // r13d
  __int64 v36; // rdx
  unsigned int v37; // ebx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  const void *v45; // rbx
  KPRIORITY PriorityThread; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD v49[21]; // [rsp+40h] [rbp-E8h] BYREF
  struct _VIDSCH_GLOBAL *v51; // [rsp+140h] [rbp+18h]

  v4 = a2;
  if ( !a1 || !a2 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v48);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(struct _VIDSCH_GLOBAL **)(v6 + 32);
  v51 = v7;
  if ( *(_BYTE *)(v6 + 172) || (v8 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0)) )
  {
    v47 = WdLogNewEntry5_WdWarning(a1);
    *(_QWORD *)(v47 + 24) = v6;
    *(_QWORD *)(v47 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v47);
    return 3223192064LL;
  }
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x20) != 0 )
  {
    v26 = *(_DWORD *)(v6 + 472);
    if ( (v9 & 0x40) != 0 )
    {
      v37 = v9 & 0xFFFFFF7F;
      if ( v26 == -1 )
      {
        v9 = v37 | 0x1000;
        *(_DWORD *)(v6 + 472) = *(_DWORD *)(a2 + 116);
      }
      else
      {
        if ( v26 != *(_DWORD *)(a2 + 116) )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          v38[3] = v7;
          v38[4] = v6;
          v38[5] = *(unsigned int *)(v4 + 116);
          v38[6] = *(unsigned int *)(v6 + 472);
          WdLogEvent5_WdAssertion(v38);
          return 3221225485LL;
        }
        v9 = v37 | 0x2000;
      }
    }
    else
    {
      if ( v26 == -1 )
      {
        v9 |= 0x7000u;
      }
      else if ( v26 == *(_DWORD *)(a2 + 116) )
      {
        v9 |= 0x4000u;
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        v39[3] = v7;
        v39[4] = v6;
        v39[5] = *(unsigned int *)(v4 + 116);
        v39[6] = *(unsigned int *)(v6 + 472);
        WdLogEvent5_WdAssertion(v39);
      }
      *(_DWORD *)(v6 + 472) = -1;
    }
    if ( (v9 & 4) != 0 )
    {
      v28 = VidSchiSetFlipDevice(
              v7,
              *(_DWORD *)(v4 + 116),
              (_QWORD *)v6,
              *(_DWORD *)(v4 + 120),
              9,
              (*(_DWORD *)v4 & 0x20000000) != 0);
      if ( v28 < 0 )
      {
        v40 = WdLogNewEntry5_WdWarning(v27);
        WdLogEvent5_WdWarning(v40);
        return (unsigned int)v28;
      }
      if ( *(int *)(v4 + 120) >= 3 )
      {
        RtlNumberOfSetBitsUlongPtr(*(unsigned __int8 *)(v4 + 361));
        RtlNumberOfSetBitsUlongPtr((unsigned __int8)*(_DWORD *)(v4 + 360));
      }
      VidSchiUpdatePresentParameters((__int64)v7, v4);
    }
  }
  else if ( (v9 & 0x40000) != 0 && !*(_DWORD *)(a1 + 424) && !*(_DWORD *)(a1 + 760) && (v9 & 0x1000000) == 0 )
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
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v11 = *(_DWORD *)(v10 + 52) * ((*(_DWORD *)(v10 + 124) << 6) + 8) + 632;
  if ( v11 <= 0x320 )
    v11 = 800;
  v12 = VidSchiInterlockedRemoveHeadListIfExist(
          (KSPIN_LOCK *)(v10 + 1832),
          (__int64 **)(a1 + 712),
          (_DWORD *)(a1 + 728));
  if ( v12 )
  {
    PoolWithTag = v12 - 1;
    goto LABEL_11;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x68536956u);
  if ( !PoolWithTag )
  {
    memset(v49, 0, 0xA0uLL);
    v41 = *(_QWORD *)(a1 + 96);
    LODWORD(v49[4]) |= 0x10u;
    LODWORD(v49[2]) = 1;
    LODWORD(v49[6]) = *(unsigned __int16 *)(v41 + 4);
    VidSchRegisterCompletionEvent(v10, v49);
    do
    {
      v42 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v10 + 1832),
              (__int64 **)(a1 + 712),
              (_DWORD *)(a1 + 728));
      if ( v42 )
        PoolWithTag = v42 - 1;
      else
        VidSchWaitForCompletionEvent(v10, v49, 19LL);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v10 + 1840), v49, 0LL);
    v4 = a2;
LABEL_11:
    if ( !PoolWithTag )
      goto LABEL_14;
  }
  memset(PoolWithTag, 0, v11);
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 1;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v10 + 1832), a1 + 736, PoolWithTag + 1, (_DWORD *)(a1 + 752));
  v14 = *(unsigned int **)(*(_QWORD *)(v10 + 16) + 3152LL);
  v15 = *(_DWORD *)(a1 + 752);
  if ( *v14 < v15 )
    *v14 = v15;
LABEL_14:
  *(_DWORD *)PoolWithTag = 1953189969;
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 2;
  *((_DWORD *)PoolWithTag + 16) = 0;
  if ( (v9 & 0x40000) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 7;
    goto LABEL_17;
  }
  if ( ((*(_DWORD *)(v4 + 120) - 3) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
LABEL_17:
    v16 = v51;
    goto LABEL_18;
  }
  *((_DWORD *)PoolWithTag + 12) = 3;
  v29 = *(unsigned int *)(v4 + 116);
  if ( (_DWORD)v29 == -1 )
    goto LABEL_17;
  v30 = *(unsigned __int8 *)(v4 + 361);
  v31 = v30 | (unsigned int)(unsigned __int8)*(_DWORD *)(v4 + 360);
  if ( !(v30 | (unsigned __int8)*(_DWORD *)(v4 + 360)) )
    goto LABEL_17;
  v16 = v51;
  v32 = *((_QWORD *)v51 + v29 + 324);
  do
  {
    if ( !_BitScanForward((unsigned int *)&v34, v31) )
      LOBYTE(v34) = -1;
    v35 = (char)v34;
    v36 = 280LL * (unsigned int)(char)v34;
    if ( *(_DWORD *)(v36 + v32 + 156) == 2 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v36, v31, v32);
      v43[5] = v35;
      v43[3] = 281LL;
      v43[4] = 0x100000LL;
      v43[6] = *(unsigned int *)(v4 + 116);
      v43[7] = v51;
      WdLogEvent5_WdCriticalError(v43);
      JUMPOUT(0x1C007109BLL);
    }
    v29 = (unsigned int)(char)v34;
    v31 = ~(1 << v34) & (unsigned int)v31;
  }
  while ( (_DWORD)v31 );
LABEL_18:
  PoolWithTag[10] = a1;
  PoolWithTag[11] = (__int64)KeGetCurrentThread();
  *((_DWORD *)PoolWithTag + 18) = v9;
  PoolWithTag[16] = *(_QWORD *)(v4 + 96);
  PoolWithTag[17] = *(_QWORD *)(v4 + 104);
  *((_DWORD *)PoolWithTag + 36) = *(_DWORD *)(v4 + 116);
  if ( (v9 & 4) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*((_DWORD *)v16 + 524) >> 9) & 4;
    if ( ((*(_DWORD *)(v4 + 120) - 3) & 0xFFFFFFFD) == 0 && (v9 & 0xC00) != 0x400 )
    {
      v44 = *(unsigned int *)(v4 + 116);
      *(_QWORD *)(v4 + 128) = ++*(_QWORD *)(v6 + 8 * v44 + 216);
    }
  }
  else if ( (v9 & 0x20) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*((_DWORD *)v16 + 524) >> 10) & 4;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 16) = 4;
  }
  memmove(PoolWithTag + 32, (const void *)v4, *(unsigned int *)(v4 + 356));
  if ( *(_QWORD *)(v4 + 24) )
    _InterlockedIncrement((volatile signed __int32 *)(PoolWithTag[35] + 4));
  v17 = (void *)PoolWithTag[43];
  if ( v17 )
    ObfReferenceObject(v17);
  v18 = PoolWithTag[33];
  if ( v18 && (PoolWithTag[32] & 0x8000000) != 0 && !PoolWithTag[37] )
    PoolWithTag[37] = *(_QWORD *)(v18 + 96);
  if ( (PoolWithTag[73] & 1) != 0 )
    VidSchiConvertDeferredWaits(a1);
  if ( *(_DWORD *)(v4 + 344) )
  {
    v45 = *(const void **)(v4 + 336);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove((void *)PoolWithTag[74], v45, 8LL * *(unsigned int *)(v4 + 344));
  }
  if ( (*((_DWORD *)v16 + 524) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(a1, PriorityThread);
  }
  v19 = (__int64 **)(a1 + 680);
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 3;
  v20 = PoolWithTag + 4;
  v21 = *(_QWORD **)(a1 + 688);
  *v20 = a1 + 680;
  v20[1] = v21;
  if ( *v21 != a1 + 680 )
    __fastfail(3u);
  *v21 = v20;
  *(_QWORD *)(a1 + 688) = v20;
  ++*(_DWORD *)(a1 + 424);
  if ( (*(_DWORD *)v4 & 0x40) != 0 )
    v8 = 1;
  while ( *(_DWORD *)(a1 + 424) > v8 )
  {
    v22 = *v19;
    v23 = **v19;
    if ( (__int64 **)(*v19)[1] != v19 || *(__int64 **)(v23 + 8) != v22 )
      __fastfail(3u);
    *v19 = (__int64 *)v23;
    *(_QWORD *)(v23 + 8) = v19;
    --*(_DWORD *)(a1 + 424);
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)(v22 - 4));
  }
  v24 = *(unsigned int *)(v4 + 116);
  if ( (unsigned int)v24 < *((_DWORD *)v16 + 10) && (*(_BYTE *)v4 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v16 + v24 + 324) + 42816LL), 2, 1);
  return 0LL;
}
