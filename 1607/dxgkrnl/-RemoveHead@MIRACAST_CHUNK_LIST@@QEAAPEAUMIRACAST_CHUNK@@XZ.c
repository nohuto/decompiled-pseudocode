/*
 * XREFs of ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002B16C
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C000C020 (DpiProcessMiracastNotifyDpc.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C002AC18 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x1C002AD60 (-DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z.c)
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C002B038 (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C002B1A0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C002CE90 (DpiProcessMiracastNotifyInterrupt.c)
 * Callees:
 *     <none>
 */

struct MIRACAST_CHUNK *__fastcall MIRACAST_CHUNK_LIST::RemoveHead(MIRACAST_CHUNK_LIST *this)
{
  struct MIRACAST_CHUNK *result; // rax
  __int64 v2; // rdx

  result = *(struct MIRACAST_CHUNK **)this;
  v2 = **(_QWORD **)this;
  if ( *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)this + 8LL) != this || *(struct MIRACAST_CHUNK **)(v2 + 8) != result )
    __fastfail(3u);
  *(_QWORD *)this = v2;
  *(_QWORD *)(v2 + 8) = this;
  if ( result == this )
    return 0LL;
  --*((_DWORD *)this + 4);
  return result;
}
