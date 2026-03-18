/*
 * XREFs of VidSchSubmitCommand @ 0x1C002E700
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00016F8 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchiSetPriorityContext @ 0x1C0006880 (VidSchiSetPriorityContext.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0008020 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     VidSchiConvertDeferredWaits @ 0x1C0016204 (VidSchiConvertDeferredWaits.c)
 *     VidSchiUpdatePresentParameters @ 0x1C001B590 (VidSchiUpdatePresentParameters.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C0076468 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 QueuePacket; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // r9
  bool v23; // zf
  int v24; // eax
  char v25; // dl
  unsigned int v26; // r12d
  __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // rcx
  const void *v30; // rbx
  KPRIORITY PriorityThread; // eax
  __int64 **v32; // rbx
  _QWORD *v33; // rsi
  _QWORD *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  void *v40; // rcx

  v4 = 0;
  if ( !a1 || !a2 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v12[3] = -1073741811LL;
    goto LABEL_80;
  }
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 32);
  if ( *(_BYTE *)(v7 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 168), 0, 0) )
  {
    v38 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v38 + 24) = v7;
    *(_QWORD *)(v38 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v38);
    return 3223192064LL;
  }
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x40) == 0 )
  {
    if ( (v9 & 0x80000) != 0 && !*(_DWORD *)(a1 + 424) && !*(_DWORD *)(a1 + 760) && (v9 & 0x42000000) == 0 )
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
    goto LABEL_24;
  }
  v10 = *(_DWORD *)(v7 + 472);
  if ( (v9 & 0x80u) != 0 )
  {
    v11 = v9 & 0xFFFFFEFF;
    if ( v10 == -1 )
    {
      v9 = v11 | 0x2000;
      *(_DWORD *)(v7 + 472) = *(_DWORD *)(a2 + 116);
      goto LABEL_18;
    }
    if ( v10 == *(_DWORD *)(a2 + 116) )
    {
      v9 = v11 | 0x4000;
      goto LABEL_18;
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v12[3] = v8;
    v12[4] = v7;
    v12[5] = *(unsigned int *)(a2 + 116);
    v12[6] = *(unsigned int *)(v7 + 472);
LABEL_80:
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  if ( v10 == -1 )
  {
    v9 |= 0xE000u;
  }
  else if ( v10 == *(_DWORD *)(a2 + 116) )
  {
    v9 |= 0x8000u;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v13[3] = v8;
    v13[4] = v7;
    v13[5] = *(unsigned int *)(a2 + 116);
    v13[6] = *(unsigned int *)(v7 + 472);
    WdLogEvent5_WdAssertion(v13);
  }
  *(_DWORD *)(v7 + 472) = -1;
LABEL_18:
  if ( (v9 & 8) != 0 )
  {
    v14 = VidSchiSetFlipDevice(
            (struct _VIDSCH_GLOBAL *)v8,
            *(_DWORD *)(a2 + 116),
            (_QWORD *)v7,
            *(_DWORD *)(a2 + 120),
            9);
    if ( v14 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning();
      WdLogEvent5_WdWarning(v15);
      return (unsigned int)v14;
    }
    if ( *(int *)(a2 + 120) >= 3 )
    {
      RtlNumberOfSetBitsUlongPtr(*(unsigned __int8 *)(a2 + 361));
      RtlNumberOfSetBitsUlongPtr((unsigned __int8)*(_DWORD *)(a2 + 360));
    }
    VidSchiUpdatePresentParameters((struct _VIDSCH_GLOBAL *)v8, a2);
  }
LABEL_24:
  QueuePacket = VidSchiAllocateQueuePacket(a1, 1LL);
  v18 = QueuePacket;
  *(_DWORD *)QueuePacket = 1953189969;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_DWORD *)(QueuePacket + 64) = 0;
  if ( (v9 & 0x80000) != 0 )
  {
    *(_DWORD *)(QueuePacket + 48) = 7;
  }
  else if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(QueuePacket + 48) = 0;
  }
  else
  {
    *(_DWORD *)(QueuePacket + 48) = 3;
    v20 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v20 != -1 )
    {
      v21 = *(unsigned __int8 *)(a2 + 361) | (unsigned __int8)*(_DWORD *)(a2 + 360);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v8 + 8 * v20 + 2640);
        do
        {
          v23 = !_BitScanForward((unsigned int *)&v24, v21);
          v25 = -1;
          if ( !v23 )
            v25 = v24;
          v26 = v25;
          v27 = 280LL * (unsigned int)v25;
          if ( *(_DWORD *)(v27 + v22 + 148) == 2 )
          {
            LOBYTE(v20) = !v23;
            v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v27);
            v39[5] = v26;
            v39[3] = 281LL;
            v39[4] = 0x100000LL;
            v39[6] = *(unsigned int *)(a2 + 116);
            v39[7] = v8;
            WdLogEvent5_WdCriticalError(v39);
            VidMmFreeDeferredDmaBufferMapping(v40);
            __debugbreak();
          }
          v20 = v26;
          v21 &= ~(1 << v26);
        }
        while ( v21 );
      }
    }
  }
  *(_QWORD *)(v18 + 80) = a1;
  *(_QWORD *)(v18 + 88) = KeGetCurrentThread();
  *(_DWORD *)(v18 + 72) = v9;
  *(_QWORD *)(v18 + 128) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v18 + 136) = *(_QWORD *)(a2 + 104);
  *(_DWORD *)(v18 + 144) = *(_DWORD *)(a2 + 116);
  if ( (v9 & 8) != 0 )
  {
    *(_DWORD *)(v18 + 64) = (*(_DWORD *)(v8 + 2144) >> 9) & 4;
    if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) == 0 && ((v9 & 0x800) == 0 || (v9 & 0x1000) != 0) )
    {
      v19 = *(unsigned int *)(a2 + 116);
      *(_QWORD *)(a2 + 128) = ++*(_QWORD *)(v7 + 8 * v19 + 216);
    }
  }
  else if ( (v9 & 0x40) != 0 )
  {
    *(_DWORD *)(v18 + 64) = (*(_DWORD *)(v8 + 2144) >> 10) & 4;
  }
  else
  {
    *(_DWORD *)(v18 + 64) = 4;
  }
  memmove((void *)(v18 + 256), (const void *)a2, *(unsigned int *)(a2 + 356));
  if ( *(_QWORD *)(a2 + 24) )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v18 + 280) + 4LL), 1u);
  v28 = *(void **)(v18 + 344);
  if ( v28 )
    ObfReferenceObject(v28);
  v29 = *(_QWORD *)(v18 + 264);
  if ( v29 && (*(_DWORD *)(v18 + 256) & 0x10000000) != 0 && !*(_QWORD *)(v18 + 296) )
    *(_QWORD *)(v18 + 296) = *(_QWORD *)(v29 + 96);
  if ( (*(_DWORD *)(v18 + 584) & 1) != 0 )
    VidSchiConvertDeferredWaits(a1);
  if ( !*(_DWORD *)(a2 + 344) )
    goto LABEL_63;
  v30 = *(const void **)(a2 + 336);
  result = VidSchiAllocateHistoryBufferStorage(v18);
  if ( (int)result >= 0 )
  {
    memmove(*(void **)(v18 + 592), v30, 8LL * *(unsigned int *)(a2 + 344));
LABEL_63:
    if ( (*(_DWORD *)(v8 + 2144) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(a1, PriorityThread);
    }
    v32 = (__int64 **)(a1 + 680);
    *(_QWORD *)(v18 + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v18 + 52) = 3;
    v33 = (_QWORD *)(v18 + 32);
    v34 = *(_QWORD **)(a1 + 688);
    *v33 = a1 + 680;
    v33[1] = v34;
    if ( *v34 != a1 + 680 )
      __fastfail(3u);
    *v34 = v33;
    *(_QWORD *)(a1 + 688) = v33;
    ++*(_DWORD *)(a1 + 424);
    if ( (*(_DWORD *)a2 & 4) == 0 )
    {
      if ( (*(_DWORD *)a2 & 0x80) != 0 )
        v4 = 1;
      while ( *(_DWORD *)(a1 + 424) > v4 )
      {
        v35 = *v32;
        v36 = **v32;
        if ( (__int64 **)(*v32)[1] != v32 || *(__int64 **)(v36 + 8) != v35 )
          __fastfail(3u);
        *v32 = (__int64 *)v36;
        *(_QWORD *)(v36 + 8) = v32;
        --*(_DWORD *)(a1 + 424);
        VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)(v35 - 4));
      }
      v37 = *(unsigned int *)(a2 + 116);
      if ( (unsigned int)v37 < *(_DWORD *)(v8 + 40) && (*(_BYTE *)a2 & 9) == 9 )
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v37 + 2640) + 41760LL), 2, 1);
    }
    return 0LL;
  }
  return result;
}
