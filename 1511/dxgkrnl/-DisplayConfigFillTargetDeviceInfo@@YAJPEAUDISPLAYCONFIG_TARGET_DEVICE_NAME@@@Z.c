/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00AB7BC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00ABA10 (MonitorFillMonitorDeviceInfo.c)
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
  __int64 v13; // rax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DMMVIDEOPRESENTTARGET *v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  _BYTE v36[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 164, 0, 0x100uLL);
    memset((char *)a1 + 36, 0, 0x80uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v5);
    v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8));
    v12 = v7;
    if ( v7 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v7, 0LL);
      v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
      DXGADAPTER::ReleaseReference(v12);
      if ( v15 >= 0 )
      {
        v21 = *((_QWORD *)v12 + 248);
        if ( v21 )
        {
          v23 = *(_QWORD *)(v21 + 112);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v23);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 96) + 72LL));
          v24 = *(_QWORD **)(v23 + 96);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, *((_DWORD *)a1 + 4));
          v30 = TargetById;
          if ( TargetById )
          {
            v32 = v24 + 3;
            if ( (_QWORD *)*v32 == v32 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v32 - 8LL);
            if ( NextTarget != TargetById )
            {
              do
              {
                if ( *((_DWORD *)NextTarget + 18) == *((_DWORD *)v30 + 18) )
                  ++*((_DWORD *)a1 + 8);
                NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, NextTarget);
              }
              while ( NextTarget != v30 );
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)v30 + 18);
            v34 = *((_QWORD *)v30 + 12);
            if ( v34 )
              v15 = MonitorFillMonitorDeviceInfo(v34, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
            v15 = -1073741811;
            v31[3] = *((unsigned int *)a1 + 4);
            v31[4] = a1;
            v31[5] = v12;
          }
          if ( v24 )
            ReferenceCounted::Release((ReferenceCounted *)(v24 + 8));
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v37 + 40));
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
          v22[3] = v12;
          v22[4] = (int)HIDWORD(*(_QWORD *)((char *)v12 + 252));
          v22[5] = *((unsigned int *)v12 + 63);
          WdLogEvent5_WdWarning(v22);
          v15 = -1073741637;
        }
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v20[3] = v12;
        v20[4] = (int)HIDWORD(*(_QWORD *)((char *)v12 + 252));
        v20[5] = *((unsigned int *)v12 + 63);
        WdLogEvent5_WdWarning(v20);
        v15 = -1073741811;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      return (unsigned int)v15;
    }
    else
    {
      v13 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v13 + 32) = *((unsigned int *)a1 + 2);
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
