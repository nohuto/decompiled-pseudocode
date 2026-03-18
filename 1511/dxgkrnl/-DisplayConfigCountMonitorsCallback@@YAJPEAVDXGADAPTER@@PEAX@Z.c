/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     MonitorGetMonitorType @ 0x1C00A6338 (MonitorGetMonitorType.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C00A8F88 (DmmGetEmergentSimulatedTarget.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B9324 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *this, _BYTE *a2)
{
  int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  unsigned int v12; // esi
  int EmergentSimulatedTarget; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  bool i; // zf
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  struct HDXGMONITOR__ *v25; // rdx
  int MonitorType; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // rax
  _BYTE v34[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+10h] BYREF
  int v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 2738LL;
    WdLogEvent5_WdAssertion(v5);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v11[3] = this;
      v11[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v11[5] = *((unsigned int *)this + 63);
    }
    else
    {
      v2 = v6;
    }
    goto LABEL_8;
  }
  if ( !*((_QWORD *)this + 248) )
  {
LABEL_8:
    v12 = v2;
    goto LABEL_31;
  }
  if ( a2[24] )
  {
    v35 = -1;
    EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(this, &v35);
    v18 = EmergentSimulatedTarget;
    if ( EmergentSimulatedTarget >= 0 )
    {
      if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, this, v35) >= 0
        && (*((_DWORD *)this + 71) & 1) != 0 )
      {
        a2[24] = 0;
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v19[3] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v19[4] = *((unsigned int *)this + 63);
      v19[5] = v18;
      WdLogEvent5_WdWarning(v19);
    }
  }
  v20 = *(_QWORD *)(*((_QWORD *)this + 248) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v20);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 96) + 72LL));
  v21 = *(_QWORD **)(v20 + 96);
  v22 = v21 + 3;
  if ( (_QWORD *)*v22 != v22 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v22 - 8LL);
    for ( i = NextTarget == 0LL; !i; i = NextTarget == 0LL )
    {
      v25 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 12);
      if ( v25 && !*((_BYTE *)NextTarget + 396) )
      {
        MonitorType = MonitorGetMonitorType(this, v25);
        v31 = MonitorType;
        if ( MonitorType < 0 )
        {
          v32 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          *(_QWORD *)(v32 + 24) = NextTarget;
          *(_QWORD *)(v32 + 32) = v31;
          WdLogEvent5_WdWarning(v32);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v36 > 0 )
        {
          if ( v36 <= 2 )
          {
            ++*((_DWORD *)a2 + 1);
          }
          else if ( v36 == 5 )
          {
            ++*((_DWORD *)a2 + 2);
          }
        }
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v21, NextTarget);
    }
  }
  v12 = 0;
  if ( v21 )
    ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v37 + 40));
LABEL_31:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  return v12;
}
