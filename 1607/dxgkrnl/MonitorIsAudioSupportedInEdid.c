/*
 * XREFs of MonitorIsAudioSupportedInEdid @ 0x1C01B061C
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C018CD34 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C01B4368 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall MonitorIsAudioSupportedInEdid(DXGADAPTER *this, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *EdidBlockPtr; // rax
  int v21; // edx
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 266) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 266) + 96LL);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v22 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, v5, 1, (ULONG **)&v22);
  if ( (int)result >= 0 )
  {
    v15 = v22;
    if ( !v22 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v16);
      v18 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 240), 1u);
    v19 = 1;
    *a3 = 0;
    do
    {
      EdidBlockPtr = DXGMONITOR::_GetEdidBlockPtr(v15, v19);
      if ( !EdidBlockPtr )
        break;
      if ( *EdidBlockPtr == 2 && EdidBlockPtr[1] > 1u && (EdidBlockPtr[3] & 0x40) != 0 )
      {
        *a3 = 1;
        break;
      }
      v19 = v21 + 1;
    }
    while ( v19 < 0xFF );
    ExReleaseResourceLite((PERESOURCE)((char *)v15 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
