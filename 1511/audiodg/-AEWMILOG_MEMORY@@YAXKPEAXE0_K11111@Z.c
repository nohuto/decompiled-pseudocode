/*
 * XREFs of ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008
 * Callers:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140015480 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400154F8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140016730 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1400167D0 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14003C41C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003C52C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003C74C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003C85C (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

void __fastcall AEWMILOG_MEMORY(
        __int64 a1,
        void *a2,
        UCHAR a3,
        void *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-29h]
  int v14; // [rsp+58h] [rbp-21h]
  void *v15; // [rsp+60h] [rbp-19h]
  unsigned __int64 v16; // [rsp+68h] [rbp-11h]
  unsigned __int64 v17; // [rsp+70h] [rbp-9h]
  unsigned __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v21; // [rsp+90h] [rbp+17h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    EventTrace.Size = 120;
    v13 = 0LL;
    v14 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v16 = a5;
    v18 = a7;
    v17 = a6;
    v21 = a10;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    EventTrace.Class.Type = a3;
    v15 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
