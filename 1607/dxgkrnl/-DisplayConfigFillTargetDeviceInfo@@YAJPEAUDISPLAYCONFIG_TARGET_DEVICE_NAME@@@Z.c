/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00C3694
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00C3834 (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rsi
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rbx
  _QWORD *v20; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DMMVIDEOPRESENTTARGET *v26; // r14
  _QWORD *v27; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v29; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _BYTE v36[120]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp+10h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v5);
    v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v38);
    v12 = v7;
    if ( v7 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v7, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
      DXGADAPTER::ReleaseReference(v12);
      if ( v13 < 0 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v33[3] = v12;
        v33[4] = *((int *)v12 + 68);
        v33[5] = *((unsigned int *)v12 + 67);
        WdLogEvent5_WdWarning(v33);
        v13 = -1073741811;
      }
      else
      {
        v18 = *((_QWORD *)v12 + 266);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v19);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 96) + 72LL));
          v20 = *(_QWORD **)(v19 + 96);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, *((_DWORD *)a1 + 4));
          v26 = TargetById;
          if ( TargetById )
          {
            v27 = v20 + 3;
            if ( (_QWORD *)*v27 == v27 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v27 - 8LL);
            if ( NextTarget != TargetById )
            {
              do
              {
                if ( *((_DWORD *)NextTarget + 18) == *((_DWORD *)v26 + 18) )
                  ++*((_DWORD *)a1 + 8);
                NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v20, NextTarget);
              }
              while ( NextTarget != v26 );
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)v26 + 18);
            v29 = *((_QWORD *)v26 + 12);
            if ( v29 )
              v13 = MonitorFillMonitorDeviceInfo(v29, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
            v13 = -1073741811;
            v34[3] = *((unsigned int *)a1 + 4);
            v34[4] = a1;
            v34[5] = v12;
          }
          if ( v20 )
            ReferenceCounted::Release((ReferenceCounted *)(v20 + 8));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
        }
        else
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          v31[3] = v12;
          v31[4] = *((int *)v12 + 68);
          v31[5] = *((unsigned int *)v12 + 67);
          WdLogEvent5_WdWarning(v31);
          v13 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      return (unsigned int)v13;
    }
    else
    {
      v32 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      *(_QWORD *)(v32 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v32 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v35 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdWarning(v35);
    return 3221225485LL;
  }
}
