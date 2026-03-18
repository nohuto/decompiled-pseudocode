/*
 * XREFs of ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01A11D4
 * Callers:
 *     DmmDRTTest @ 0x1C01A361C (DmmDRTTest.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00858AC (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_HW_CAPABILITY *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  D3DKMDT_HVIDPN v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID PathSourceFromTarget; // eax
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v29; // rax
  struct _DXGKARG_QUERYVIDPNHWCAPABILITY v30; // [rsp+20h] [rbp-20h] BYREF
  D3DKMDT_HVIDPN v31; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) >= 1105 )
  {
    v10 = *((_QWORD *)this + 10);
    v31 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *((_QWORD *)this + 10);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v31, v11);
    v15 = v31;
    if ( v31 )
    {
      if ( v31 == (D3DKMDT_HVIDPN)-96LL )
      {
        v20 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v20);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v15 + 24),
                               (unsigned int)v4,
                               v13,
                               v14);
      if ( PathSourceFromTarget != -1 )
      {
        memset(&v30, 0, sizeof(v30));
        if ( v15 == (D3DKMDT_HVIDPN)-88LL )
          v30.hFunctionalVidPn = 0LL;
        else
          v30.hFunctionalVidPn = v15;
        v30.SourceId = PathSourceFromTarget;
        v30.TargetId = v4;
        if ( !*((_QWORD *)this + 1) )
        {
          v24 = WdLogNewEntry5_WdAssertion(PathSourceFromTarget);
          WdLogEvent5_WdAssertion(v24);
        }
        v25 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(*((DXGADAPTER ***)this + 1), &v30, v22);
        v23 = v25;
        if ( v25 >= 0 )
        {
          *a3 = v30.VidPnHWCaps;
LABEL_27:
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v31, 0LL);
          return v3;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v27[3] = v30.TargetId;
        v27[4] = v30.SourceId;
        v27[5] = v30.hFunctionalVidPn;
        v27[6] = v23;
        WdLogEvent5_WdError(v27);
LABEL_26:
        v3 = v23;
        goto LABEL_27;
      }
      v19 = WdLogNewEntry5_WdDmmEvent(0xFFFFFFFFLL);
      *(_QWORD *)(v19 + 24) = v4;
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v12);
      if ( !*((_QWORD *)this + 1) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = v17;
      *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdDmmEvent(v19);
    LODWORD(v23) = -1071774937;
    goto LABEL_26;
  }
  v29 = WdLogNewEntry5_WdDmmEvent(v9);
  *(_QWORD *)(v29 + 24) = this;
  WdLogEvent5_WdDmmEvent(v29);
  return 3221225659LL;
}
