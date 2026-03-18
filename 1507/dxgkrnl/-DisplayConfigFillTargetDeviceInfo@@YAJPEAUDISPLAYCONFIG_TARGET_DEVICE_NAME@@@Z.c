/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009FBA4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C009FA5C (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rsi
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD *v23; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DMMVIDEOPRESENTTARGET *v29; // r14
  _QWORD *v30; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  struct HDXGMONITOR__ *v32; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  _BYTE v39[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+80h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 164, 0, 0x100uLL);
    memset((char *)a1 + 36, 0, 0x80uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8));
    v15 = v10;
    if ( v10 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v10, 0LL);
      v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
      DXGADAPTER::ReleaseReference(v15);
      if ( v16 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        v36[3] = v15;
        v36[4] = (int)HIDWORD(*(_QWORD *)((char *)v15 + 252));
        v36[5] = *((unsigned int *)v15 + 63);
        WdLogEvent5_WdWarning(v36);
        v16 = -1073741811;
      }
      else
      {
        v21 = *((_QWORD *)v15 + 247);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v40, v22);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 96) + 72LL));
          v23 = *(_QWORD **)(v22 + 96);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v23, *((_DWORD *)a1 + 4));
          v29 = TargetById;
          if ( TargetById )
          {
            v30 = v23 + 3;
            if ( (_QWORD *)*v30 == v30 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v30 - 8LL);
            if ( NextTarget != TargetById )
            {
              do
              {
                if ( *((_DWORD *)NextTarget + 18) == *((_DWORD *)v29 + 18) )
                  ++*((_DWORD *)a1 + 8);
                NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v23, NextTarget);
              }
              while ( NextTarget != v29 );
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)v29 + 18);
            v32 = (struct HDXGMONITOR__ *)*((_QWORD *)v29 + 12);
            if ( v32 )
              v16 = MonitorFillMonitorDeviceInfo(v32, (__int64)a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
            v16 = -1073741811;
            v37[3] = *((unsigned int *)a1 + 4);
            v37[4] = a1;
            v37[5] = v15;
          }
          if ( v23 )
            ReferenceCounted::Release((ReferenceCounted *)(v23 + 8));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40 + 40));
        }
        else
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
          v34[3] = v15;
          v34[4] = (int)HIDWORD(*(_QWORD *)((char *)v15 + 252));
          v34[5] = *((unsigned int *)v15 + 63);
          WdLogEvent5_WdWarning(v34);
          v16 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      return (unsigned int)v16;
    }
    else
    {
      v35 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v35 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v35 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v38 + 24) = a1;
    WdLogEvent5_WdWarning(v38);
    return 3221225485LL;
  }
}
