/*
 * XREFs of MonitorIsAudioSupportedInEdid @ 0x1C0186C78
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0164FC8 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C009C160 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall MonitorIsAudioSupportedInEdid(DXGADAPTER *this, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rdi
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
  __int64 v20; // r8
  _BYTE *EdidBaseBlockPtr; // rax
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

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
  if ( !*((_QWORD *)this + 248) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 248) + 120LL);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v23 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, v5, 1, (ULONG **)&v23);
  if ( (int)result >= 0 )
  {
    v15 = v23;
    if ( !v23 )
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
    v20 = 8LL;
    do
    {
      if ( v19 )
      {
        if ( v19 < *((_DWORD *)v15 + 28)
          && *((_QWORD *)v15 + 15)
          && (v22 = *(_QWORD *)(v20 + *((_QWORD *)v15 + 15)), *(_QWORD *)(v22 + 16) >= 0x80uLL) )
        {
          EdidBaseBlockPtr = (_BYTE *)(v22 + 24);
        }
        else
        {
          EdidBaseBlockPtr = 0LL;
        }
      }
      else
      {
        EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v15);
      }
      if ( !EdidBaseBlockPtr )
        break;
      if ( *EdidBaseBlockPtr == 2 && EdidBaseBlockPtr[1] > 1u && (EdidBaseBlockPtr[3] & 0x40) != 0 )
      {
        *a3 = 1;
        break;
      }
      ++v19;
      v20 += 8LL;
    }
    while ( v19 < 0xFF );
    ExReleaseResourceLite((PERESOURCE)((char *)v15 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
