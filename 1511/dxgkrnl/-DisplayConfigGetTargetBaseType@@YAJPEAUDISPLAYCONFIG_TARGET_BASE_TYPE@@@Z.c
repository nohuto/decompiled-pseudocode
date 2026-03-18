/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C4A78
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
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

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _BYTE v31[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1]);
    v11 = v6;
    if ( v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v6, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
      DXGADAPTER::ReleaseReference(v11);
      if ( v12 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        v28[3] = v11;
        v28[4] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
        v28[5] = *((unsigned int *)v11 + 63);
        WdLogEvent5_WdWarning(v28);
        v12 = -1073741811;
      }
      else
      {
        v17 = *((_QWORD *)v11 + 248);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 112);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, v18);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
          v19 = *(_QWORD *)(v18 + 96);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 19);
          }
          else
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
            v12 = -1073741811;
            v29[3] = a1[2].LowPart;
            v29[4] = a1;
            v29[5] = v11;
          }
          if ( v19 )
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v32 + 40));
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          v26[3] = v11;
          v26[4] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
          v26[5] = *((unsigned int *)v11 + 63);
          WdLogEvent5_WdWarning(v26);
          v12 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      return (unsigned int)v12;
    }
    else
    {
      v27 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      *(_QWORD *)(v27 + 24) = a1[1].HighPart;
      *(_QWORD *)(v27 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = a1;
    WdLogEvent5_WdWarning(v30);
    return 3221225485LL;
  }
}
