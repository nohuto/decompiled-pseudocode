/*
 * XREFs of MonitorIsAudioSupportedInEdid @ 0x1C01825CC
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0160C74 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0097F90 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall MonitorIsAudioSupportedInEdid(DXGADAPTER *this, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r8
  _BYTE *EdidBaseBlockPtr; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v32 = 0LL;
  LOBYTE(v10) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v5, v10, (ULONG **)&v32);
  if ( (int)result >= 0 )
  {
    v21 = v32;
    if ( !v32 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v22);
      v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v27);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 240), 1u);
    v28 = 1;
    *a3 = 0;
    v29 = 8LL;
    do
    {
      if ( v28 )
      {
        if ( v28 < *((_DWORD *)v21 + 28)
          && *((_QWORD *)v21 + 15)
          && (v31 = *(_QWORD *)(v29 + *((_QWORD *)v21 + 15)), *(_QWORD *)(v31 + 16) >= 0x80uLL) )
        {
          EdidBaseBlockPtr = (_BYTE *)(v31 + 24);
        }
        else
        {
          EdidBaseBlockPtr = 0LL;
        }
      }
      else
      {
        EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v21);
      }
      if ( !EdidBaseBlockPtr )
        break;
      if ( *EdidBaseBlockPtr == 2 && EdidBaseBlockPtr[1] > 1u && (EdidBaseBlockPtr[3] & 0x40) != 0 )
      {
        *a3 = 1;
        break;
      }
      ++v28;
      v29 += 8LL;
    }
    while ( v28 < 0xFF );
    ExReleaseResourceLite((PERESOURCE)((char *)v21 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
