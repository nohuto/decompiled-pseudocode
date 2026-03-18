/*
 * XREFs of MonitorGetEdidFromMonitor @ 0x1C01B04B0
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C017A560 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C01B4368 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall MonitorGetEdidFromMonitor(struct HDXGMONITOR__ *a1, size_t Size, _DWORD *a3, char *a4)
{
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r8d
  _OWORD *EdidBlockPtr; // rax
  __int64 v16; // r9
  struct DXGMONITOR *v17; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v5 = Size;
  if ( (_DWORD)Size )
    memset(a4, 0, (unsigned int)Size);
  if ( !a1 )
    return 3221225485LL;
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v17);
  if ( (int)result >= 0 )
  {
    v10 = v17;
    if ( !v17 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
    v14 = 0;
    do
    {
      EdidBlockPtr = DXGMONITOR::_GetEdidBlockPtr(v10, v14);
      if ( !EdidBlockPtr )
        break;
      if ( (int)v16 + 128 <= v5 )
      {
        *(_OWORD *)&a4[v16] = *EdidBlockPtr;
        *(_OWORD *)&a4[v16 + 16] = EdidBlockPtr[1];
        *(_OWORD *)&a4[v16 + 32] = EdidBlockPtr[2];
        *(_OWORD *)&a4[v16 + 48] = EdidBlockPtr[3];
        *(_OWORD *)&a4[v16 + 64] = EdidBlockPtr[4];
        *(_OWORD *)&a4[v16 + 80] = EdidBlockPtr[5];
        *(_OWORD *)&a4[v16 + 96] = EdidBlockPtr[6];
        *(_OWORD *)&a4[v16 + 112] = EdidBlockPtr[7];
      }
      ++v14;
    }
    while ( (unsigned int)(v16 + 128) < 0x7F80 );
    *a3 = v14 << 7;
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
