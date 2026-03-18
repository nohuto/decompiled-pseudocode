/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x1C0020DEC
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x1C0020BE4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  void (__fastcall *v11)(_QWORD); // rax
  void (__fastcall *v12)(_QWORD); // rax

  v4 = *((_QWORD *)a1 + 6);
  v6 = *(_QWORD *)(v4 + 96);
  v7 = *(unsigned int *)(v6 + 1368);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v6 + 8 * v7 + 1376),
                                            0LL,
                                            (signed __int64)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = v8;
    *(_QWORD *)(v9 + 32) = a1;
    WdLogEvent5_WdAssertion(v9);
  }
  _InterlockedExchange((volatile __int32 *)(v6 + 1368), ((_BYTE)v7 + 1) & 0xF);
  *(_DWORD *)(v6 + 456) = ((unsigned __int8)*(_DWORD *)(v6 + 456) + 1) & 0xF;
  v10 = *((_DWORD *)a1 + 23);
  if ( (v10 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 23) = v10 & 0xFFFFFBFF;
    if ( *(_DWORD *)(v6 + 2952) != -1 )
    {
      v11 = *(void (__fastcall **)(_QWORD))(v8 + 2488);
      if ( v11 )
        v11(*(_QWORD *)(v8 + 2520));
    }
  }
  if ( (*((_DWORD *)a1 + 23) & 0x800) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 7) + 372LL) + 2592) + 14768LL) != -1 )
    {
      v12 = *(void (__fastcall **)(_QWORD))(v8 + 2488);
      if ( v12 )
        v12(*(_QWORD *)(v8 + 2520));
    }
    *((_DWORD *)a1 + 23) &= ~0x800u;
  }
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest((__int64)a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket((__int64)a1);
  }
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(*(_QWORD *)(v6 + 24) + 1832LL), v6 + 2960, (_QWORD *)a1 + 2, 0LL);
}
