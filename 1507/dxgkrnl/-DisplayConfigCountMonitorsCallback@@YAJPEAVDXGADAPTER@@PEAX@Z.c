/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008F880
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C008FA30 (DmmGetEmergentSimulatedTarget.c)
 *     MonitorGetMonitorType @ 0x1C009BB94 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00AE364 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // r14
  const struct DMMVIDEOPRESENTTARGET *i; // r14
  struct HDXGMONITOR__ *v22; // rdx
  unsigned int v23; // esi
  _QWORD *v24; // rax
  int MonitorType; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _BYTE v35[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+98h] [rbp+10h] BYREF
  int v37; // [rsp+A0h] [rbp+18h]
  __int64 v38; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v32 + 24) = 2630LL;
    WdLogEvent5_WdAssertion(v32);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, this, 0LL);
  v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
  if ( v7 < 0 )
  {
    if ( v7 == -1073741130 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      v24[3] = this;
      v24[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v24[5] = *((unsigned int *)this + 63);
    }
    else
    {
      v4 = v7;
    }
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 247) )
  {
LABEL_19:
    v23 = v4;
    goto LABEL_20;
  }
  if ( a2[24] )
  {
    v36 = -1;
    EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(this, &v36);
    v17 = EmergentSimulatedTarget;
    if ( EmergentSimulatedTarget < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v33[3] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v33[4] = *((unsigned int *)this + 63);
      v33[5] = v17;
      WdLogEvent5_WdWarning(v33);
    }
    else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, this, v36) >= 0
           && (*((_DWORD *)this + 71) & 1) != 0 )
    {
      a2[24] = 0;
    }
  }
  v18 = *(_QWORD *)(*((_QWORD *)this + 247) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v38, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
  v19 = *(_QWORD **)(v18 + 96);
  v20 = v19 + 3;
  if ( (_QWORD *)*v20 != v20 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v20 - 8LL);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, i) )
    {
      v22 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 12);
      if ( v22 )
      {
        MonitorType = MonitorGetMonitorType(this, v22);
        v31 = MonitorType;
        if ( MonitorType < 0 )
        {
          v34 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          *(_QWORD *)(v34 + 24) = i;
          *(_QWORD *)(v34 + 32) = v31;
          WdLogEvent5_WdWarning(v34);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v37 > 0 )
        {
          if ( v37 > 2 )
          {
            if ( v37 == 5 )
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
  v23 = 0;
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40));
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
  return v23;
}
