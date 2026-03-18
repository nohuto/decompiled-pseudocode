/*
 * XREFs of DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00C42B0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(DXGADAPTER *a1, unsigned int a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rsi
  int v26; // r13d
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v40; // [rsp+28h] [rbp-28h] BYREF
  __int64 v41; // [rsp+30h] [rbp-20h]
  __int64 v42; // [rsp+38h] [rbp-18h] BYREF
  __int64 v43; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v44; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 || !a4 )
  {
    v38 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v38 + 24) = a3;
    *(_QWORD *)(v38 + 32) = a4;
    WdLogEvent5_WdError(v38);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v31 + 24) = 0LL;
    goto LABEL_27;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v32);
  }
  v10 = *((_QWORD *)a1 + 266);
  if ( !v10 )
  {
    v31 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v31 + 24) = a1;
LABEL_27:
    WdLogEvent5_WdError(v31);
    return 3223191554LL;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43, v11);
    v12 = *(_QWORD *)(v11 + 80);
    v39 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 80);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, v13);
    v15 = v39;
    if ( v39 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)a1 + 266) + 112LL);
      v41 = 1016 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v39 + 96), v5, *(_DWORD *)(v16 + 1016 * v5 + 964));
      if ( Path && (v19 = *((_QWORD *)Path + 12)) != 0 )
      {
        v20 = *(_QWORD *)(v19 + 104);
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
          v21 = *(_QWORD *)(v19 + 104);
        }
        else
        {
          v21 = 0LL;
        }
        v42 = v21;
        if ( !*(_QWORD *)(v21 + 144) )
        {
          v35 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v35);
        }
        v22 = *(_QWORD *)(v21 + 144);
        v40 = *(struct _D3DDDI_RATIONAL *)(v22 + 92);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v22 + 72), &v40);
        v24 = DmmMapVSyncFromRationalToInteger(
                &v40,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v23 + 120) << 29) >> 29),
                &v44);
        v25 = *((_QWORD *)a1 + 266);
        v26 = v24;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v25 + 16)) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v36 + 24) = 4422LL;
          WdLogEvent5_WdAssertion(v36);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v25 + 80) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v37 + 24) = 4423LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v28 = *(_DWORD *)(*(_QWORD *)(v25 + 112) + v41 + 968);
        if ( v44 != 1 || v28 != v26 + 1 )
          v28 = v26;
        *a3 = v28;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v21 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v30 + 24) = v15;
        WdLogEvent5_WdError(v30);
        v4 = -1071774971;
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v34 + 24) = a1;
      WdLogEvent5_WdError(v34);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40));
    return v4;
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    return 3223192373LL;
  }
}
