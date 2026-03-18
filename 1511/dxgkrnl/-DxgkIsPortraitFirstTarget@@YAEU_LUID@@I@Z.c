/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0153CBC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2)
{
  __int64 v2; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax
  __int64 v5; // rcx
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // di
  __int64 v15; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v6 = v4;
  if ( !v4 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 3116LL;
    WdLogEvent5_WdError(v7);
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v4, 0LL);
  v9 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
  DXGADAPTER::ReleaseReference(v6);
  if ( (int)v9 >= 0 )
  {
    v12 = *((_QWORD *)v6 + 248);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 112);
      if ( v13 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(v12 + 112));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 96) + 72LL));
        v15 = *(_QWORD *)(v13 + 96);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v2);
        if ( TargetById )
        {
          v14 = *((_BYTE *)TargetById + 389);
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v18 + 24) = v2;
          *(_QWORD *)(v18 + 32) = v6;
          WdLogEvent5_WdError(v18);
          v14 = 0;
        }
        if ( v15 )
          ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v21 + 40));
        goto LABEL_15;
      }
    }
    v11 = WdLogNewEntry5_WdError(v10);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 32) = v9;
  }
  *(_QWORD *)(v11 + 24) = v6;
  WdLogEvent5_WdError(v11);
  v14 = 0;
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  return v14;
}
