/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000E204 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0010900 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013124 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0016680 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000DF2C (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000E0EC (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C000F82C (VidSchiFreeQueuePacket.c)
 *     Template_pp @ 0x1C001F87C (Template_pp.c)
 */

LONG __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  LONG result; // eax

  v4 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( bTracingEnabled )
  {
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 || (*(_DWORD *)(v4 + 112) & 0x40) != 0 )
      v7 = v4;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pp(v7, &EventUnwaitQueuePacket, a3, a1, v7);
  }
  v8 = (_QWORD *)(a1 + 272);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(_QWORD **)(a1 + 280);
  if ( *(_QWORD *)(v9 + 8) != a1 + 272 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 264) + 40LL) - 2) & 0xFFFFFFFD) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 776));
    if ( (*(_DWORD *)(a1 + 256) & 8) != 0 )
    {
      --*(_DWORD *)(v6 + 944);
      *(_DWORD *)(a1 + 256) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(_QWORD *)(a1 + 264));
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a1 + 256) ^ (*(_DWORD *)(a1 + 256) ^ (2 * a2)) & 2 | 1;
  if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
  {
    v11 = (_QWORD *)(a1 + 32);
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v12 + 8) != a1 + 32 || (_QWORD *)*v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *v11 = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    --*(_DWORD *)(v4 + 780);
    *(_DWORD *)(a1 + 64) &= ~0x10u;
    return VidSchiFreeQueuePacket(v4);
  }
  else
  {
    result = *(_DWORD *)(v4 + 176);
    if ( (result & 0x20) != 0 )
    {
      *(_DWORD *)(v4 + 176) &= ~0x20u;
      result = VidSchiUnwaitContext(v4, 19940LL);
      if ( (_BYTE)result )
      {
        *(_QWORD *)(v6 + 1336) = MEMORY[0xFFFFF78000000320];
        return KeSetEvent((PRKEVENT)(v6 + 1304), 0, 0);
      }
    }
  }
  return result;
}
