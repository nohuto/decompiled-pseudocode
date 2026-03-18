/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C00020E8 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D568 (VidSchiSubmitWaitCommand.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0010B94 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001480C (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000D0F4 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E270 (VidSchiFreeQueuePacket.c)
 *     Template_pp @ 0x1C00228B0 (Template_pp.c)
 */

LONG __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  LONG result; // eax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( bTracingEnabled )
  {
    v14 = *(_QWORD *)(v4 + 56);
    if ( !v14 || (*(_DWORD *)(v4 + 112) & 0x40) != 0 )
      v14 = v4;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v14, &EventUnwaitQueuePacket, a3, a1, v14);
  }
  v7 = (_QWORD *)(a1 + 280);
  v8 = *(_QWORD *)(a1 + 280);
  v9 = *(_QWORD **)(a1 + 288);
  if ( *(_QWORD *)(v8 + 8) != a1 + 280 || (_QWORD *)*v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 272) + 40LL) - 2) & 0xFFFFFFFD) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 800));
    if ( (*(_DWORD *)(a1 + 264) & 8) != 0 )
    {
      --*(_DWORD *)(v6 + 976);
      *(_DWORD *)(a1 + 264) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(_QWORD *)(a1 + 272));
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 264) ^ (*(_DWORD *)(a1 + 264) ^ (2 * a2)) & 2 | 1;
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
    --*(_DWORD *)(v4 + 804);
    *(_DWORD *)(a1 + 64) &= ~0x10u;
    return VidSchiFreeQueuePacket(v4);
  }
  else
  {
    result = *(_DWORD *)(v4 + 176);
    if ( (result & 0x20) != 0 )
    {
      *(_DWORD *)(v4 + 176) &= ~0x20u;
      result = VidSchiUnwaitContext(v4, 21469LL);
      if ( (_BYTE)result )
      {
        *(_QWORD *)(v6 + 1368) = MEMORY[0xFFFFF78000000320];
        return KeSetEvent((PRKEVENT)(v6 + 1336), 0, 0);
      }
    }
  }
  return result;
}
