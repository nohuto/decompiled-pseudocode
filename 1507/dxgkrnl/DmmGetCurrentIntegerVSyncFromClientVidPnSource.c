/*
 * XREFs of DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C005EC90
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rsi
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v49; // [rsp+28h] [rbp-28h] BYREF
  __int64 v50; // [rsp+30h] [rbp-20h]
  __int64 v51; // [rsp+38h] [rbp-18h] BYREF
  __int64 v52; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v53; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 || !a4 )
  {
    v47 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v47 + 24) = a3;
    *(_QWORD *)(v47 + 32) = a4;
    WdLogEvent5_WdError(v47);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v40 + 24) = 0LL;
    goto LABEL_27;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v41);
  }
  v13 = *((_QWORD *)a1 + 247);
  if ( !v13 )
  {
    v40 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v40 + 24) = a1;
LABEL_27:
    WdLogEvent5_WdError(v40);
    return 3223191554LL;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v52, v14);
    v15 = *(_QWORD *)(v14 + 80);
    v48 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v14 + 80);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v48, v16);
    v18 = v48;
    if ( v48 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 247) + 112LL);
      v50 = 1008 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v48 + 96), v5, *(_DWORD *)(v19 + 1008 * v5 + 956));
      if ( Path && (v25 = *((_QWORD *)Path + 12)) != 0 )
      {
        v26 = *(_QWORD *)(v25 + 104);
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 96));
          v27 = *(_QWORD *)(v25 + 104);
        }
        else
        {
          v27 = 0LL;
        }
        v51 = v27;
        if ( !*(_QWORD *)(v27 + 144) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v26, v21, v23, v24);
          WdLogEvent5_WdAssertion(v44);
        }
        v28 = *(_QWORD *)(v27 + 144);
        v49 = *(struct _D3DDDI_RATIONAL *)(v28 + 92);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v28 + 72), &v49);
        v30 = DmmMapVSyncFromRationalToInteger(
                &v49,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v29 + 120) << 29) >> 29),
                &v53);
        v31 = *((_QWORD *)a1 + 247);
        v32 = v30;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v31 + 16)) )
        {
          v45 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          *(_QWORD *)(v45 + 24) = 4110LL;
          WdLogEvent5_WdAssertion(v45);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v31 + 80) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          *(_QWORD *)(v46 + 24) = 4111LL;
          WdLogEvent5_WdAssertion(v46);
        }
        v37 = *(_DWORD *)(*(_QWORD *)(v31 + 112) + v50 + 960);
        if ( v53 != 1 || v37 != v32 + 1 )
          v37 = v32;
        *a3 = v37;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v27 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v51, 0LL);
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v39 + 24) = v18;
        WdLogEvent5_WdError(v39);
        v4 = -1071774971;
      }
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v43 + 24) = a1;
      WdLogEvent5_WdError(v43);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v48, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
    return v4;
  }
  else
  {
    v42 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v42 + 24) = a1;
    WdLogEvent5_WdError(v42);
    return 3223192373LL;
  }
}
