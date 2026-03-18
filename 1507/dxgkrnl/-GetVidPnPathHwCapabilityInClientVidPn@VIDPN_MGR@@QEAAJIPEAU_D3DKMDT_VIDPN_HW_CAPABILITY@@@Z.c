/*
 * XREFs of ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C0172FD8
 * Callers:
 *     DmmDRTTest @ 0x1C0175778 (DmmDRTTest.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00CECC8 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
        VIDPN_MGR *this,
        __int64 a2,
        struct _D3DKMDT_VIDPN_HW_CAPABILITY *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  D3DKMDT_HVIDPN v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID PathSourceFromTarget; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v36; // rax
  struct _DXGKARG_QUERYVIDPNHWCAPABILITY v37; // [rsp+20h] [rbp-20h] BYREF
  D3DKMDT_HVIDPN v38; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) >= 1105 )
  {
    v11 = *((_QWORD *)this + 10);
    v38 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *((_QWORD *)this + 10);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v38, v12);
    v17 = v38;
    if ( v38 )
    {
      if ( v38 == (D3DKMDT_HVIDPN)-96LL )
      {
        v25 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v25);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v17 + 24),
                               (unsigned int)v5,
                               v15,
                               v16);
      if ( PathSourceFromTarget != -1 )
      {
        memset(&v37, 0, sizeof(v37));
        if ( v17 == (D3DKMDT_HVIDPN)-88LL )
          v37.hFunctionalVidPn = 0LL;
        else
          v37.hFunctionalVidPn = v17;
        v37.SourceId = PathSourceFromTarget;
        v37.TargetId = v5;
        if ( !*((_QWORD *)this + 1) )
        {
          v31 = WdLogNewEntry5_WdAssertion(PathSourceFromTarget, v27, v28, v29);
          WdLogEvent5_WdAssertion(v31);
        }
        v32 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(*((DXGADAPTER ***)this + 1), &v37, v28);
        v30 = v32;
        if ( v32 >= 0 )
        {
          *a3 = v37.VidPnHWCaps;
LABEL_27:
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v38, 0LL);
          return v4;
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v34[3] = v37.TargetId;
        v34[4] = v37.SourceId;
        v34[5] = v37.hFunctionalVidPn;
        v34[6] = v30;
        WdLogEvent5_WdError(v34);
LABEL_26:
        v4 = v30;
        goto LABEL_27;
      }
      v24 = WdLogNewEntry5_WdDmmEvent(0xFFFFFFFFLL);
      *(_QWORD *)(v24 + 24) = v5;
    }
    else
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v14);
      if ( !*((_QWORD *)this + 1) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = v20;
      *(_QWORD *)(v20 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdDmmEvent(v24);
    LODWORD(v30) = -1071774937;
    goto LABEL_26;
  }
  v36 = WdLogNewEntry5_WdDmmEvent(v10);
  *(_QWORD *)(v36 + 24) = this;
  WdLogEvent5_WdDmmEvent(v36);
  return 3221225659LL;
}
