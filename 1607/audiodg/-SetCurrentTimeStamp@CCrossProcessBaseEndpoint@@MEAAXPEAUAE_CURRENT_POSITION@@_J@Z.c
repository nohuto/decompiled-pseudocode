/*
 * XREFs of ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140013DB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

void __fastcall CCrossProcessBaseEndpoint::SetCurrentTimeStamp(
        CCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        __int64 a3)
{
  BOOL v6; // r10d
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+50h] [rbp-48h]
  int v9; // [rsp+58h] [rbp-40h]
  __int64 Flag; // [rsp+60h] [rbp-38h]
  UINT64 u64PaddingFrames; // [rsp+68h] [rbp-30h]
  HNSTIME hnsQPCPosition; // [rsp+70h] [rbp-28h]
  UINT64 u64DevicePosition; // [rsp+78h] [rbp-20h]
  UINT64 u64StreamPosition; // [rsp+80h] [rbp-18h]

  v6 = *(_DWORD *)(*((_QWORD *)this + 8) + 152LL) == 0;
  *(struct AE_CURRENT_POSITION *)(*((_QWORD *)this + 8) + 40LL * (*(_DWORD *)(*((_QWORD *)this + 8) + 152LL) == 0) + 24) = *a2;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 152LL), v6);
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    EventTrace.Size = 104;
    Flag = a2->Flag;
    u64PaddingFrames = a2->u64PaddingFrames;
    hnsQPCPosition = a2->hnsQPCPosition;
    u64DevicePosition = a2->u64DevicePosition;
    u64StreamPosition = a2->u64StreamPosition;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_TIMESTAMP;
    LOWORD(EventTrace.Version) = 1283;
    v8 = 0LL;
    v9 = 0;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0, 0) & 2) == 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 104LL) = a2->u64DevicePosition;
    *(_QWORD *)(*((_QWORD *)this + 8) + 120LL) = a2->u64PaddingFrames;
    *(_QWORD *)(*((_QWORD *)this + 8) + 128LL) = a2->hnsQPCPosition;
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 8) + 144LL), a3);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 6u);
  }
}
