/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0150628
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rcx
  DXGADAPTER *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // di
  __int64 v17; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v21[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2, a3, a4);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v8 = v6;
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 3007LL;
    WdLogEvent5_WdError(v9);
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v6, 0LL);
  v11 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  DXGADAPTER::ReleaseReference(v8);
  if ( (int)v11 >= 0 )
  {
    v14 = *((_QWORD *)v8 + 247);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 88);
      if ( v15 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v14 + 88));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
        v17 = *(_QWORD *)(v15 + 96);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, v4);
        if ( TargetById )
        {
          v16 = *((_BYTE *)TargetById + 389);
        }
        else
        {
          v20 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v20 + 24) = v4;
          *(_QWORD *)(v20 + 32) = v8;
          WdLogEvent5_WdError(v20);
          v16 = 0;
        }
        if ( v17 )
          ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
        goto LABEL_15;
      }
    }
    v13 = WdLogNewEntry5_WdError(v12);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 32) = v11;
  }
  *(_QWORD *)(v13 + 24) = v8;
  WdLogEvent5_WdError(v13);
  v16 = 0;
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  return v16;
}
