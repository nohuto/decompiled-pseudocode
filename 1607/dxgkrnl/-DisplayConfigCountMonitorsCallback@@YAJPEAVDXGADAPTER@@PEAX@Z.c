/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorGetMonitorType @ 0x1C00B7244 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BC410 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C00C0E48 (DmmGetEmergentSimulatedTarget.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *this, _BYTE *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r9
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  const struct DMMVIDEOPRESENTTARGET *i; // r14
  struct HDXGMONITOR__ *v21; // rdx
  unsigned int v22; // esi
  _QWORD *v23; // rax
  int MonitorType; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  _BYTE v34[120]; // [rsp+20h] [rbp-78h] BYREF
  int v35; // [rsp+A8h] [rbp+10h] BYREF
  int v36; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v31 + 24) = 2775LL;
    WdLogEvent5_WdAssertion(v31);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v23[3] = this;
      v23[4] = *((int *)this + 68);
      v23[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v2 = v5;
    }
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 266) )
  {
LABEL_19:
    v22 = v2;
    goto LABEL_20;
  }
  if ( a2[24] )
  {
    v35 = -1;
    EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(this, &v35);
    v15 = EmergentSimulatedTarget;
    if ( EmergentSimulatedTarget < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      v32[3] = *((int *)this + 68);
      v32[4] = *((unsigned int *)this + 67);
      v32[5] = v15;
      WdLogEvent5_WdWarning(v32);
    }
    else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext((__int64)a2, (__int64)this, v35) >= 0
           && (*((_DWORD *)this + 75) & 1) != 0 )
    {
      a2[24] = 0;
    }
  }
  v16 = *(_QWORD *)(*((_QWORD *)this + 266) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v16);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 96) + 72LL));
  v18 = *(_QWORD **)(v16 + 96);
  v19 = v18 + 3;
  if ( (_QWORD *)*v19 != v19 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v19 - 8LL);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v18, i) )
    {
      v21 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 12);
      if ( v21 && !*((_BYTE *)i + 396) )
      {
        MonitorType = MonitorGetMonitorType(this, v21, &v36, v17);
        v30 = MonitorType;
        if ( MonitorType < 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v33 + 24) = i;
          *(_QWORD *)(v33 + 32) = v30;
          WdLogEvent5_WdWarning(v33);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v36 > 0 )
        {
          if ( v36 > 2 )
          {
            if ( v36 == 5 )
              ++*((_DWORD *)a2 + 2);
          }
          else
          {
            ++*((_DWORD *)a2 + 1);
          }
        }
      }
    }
  }
  v22 = 0;
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  return v22;
}
