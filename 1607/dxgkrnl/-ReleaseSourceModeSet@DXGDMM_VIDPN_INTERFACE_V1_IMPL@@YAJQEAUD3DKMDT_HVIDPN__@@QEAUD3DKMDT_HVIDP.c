/*
 * XREFs of ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00BBBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002B04 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000ADB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DMMVIDPNSOURCEMODESET *v11; // rbp
  DMMVIDPNSOURCE *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6035);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 72LL) == v5 )
    {
      v18 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v18 + 24) = v8;
      WdLogEvent5_WdError(v18);
      v7 = -1071774909;
    }
    else
    {
      v9 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)a2);
      v11 = (struct DMMVIDPNSOURCEMODESET *)v9;
      if ( v9 )
      {
        v12 = *(DMMVIDPNSOURCE **)(v9 + 112);
        if ( !v12 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v20);
        }
        if ( !*((_QWORD *)v12 + 5) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v21);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v12 + 5) + 64LL) == v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, *(_QWORD *)(v8 + 48));
          DMMVIDPNSOURCE::ReleaseModeSet(v12, v11);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          if ( !*((_QWORD *)v12 + 5) )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v24);
          }
          v23[3] = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v12 + 5) + 64LL);
          v23[4] = v11;
          v23[5] = v8;
          WdLogEvent5_WdError(v23);
          v7 = -1071774928;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v19 + 24) = a2;
        WdLogEvent5_WdError(v19);
        v7 = -1071774968;
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v7 = -1071774973;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 6035);
  return v7;
}
