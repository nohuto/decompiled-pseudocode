/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C007EAFC
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003B98 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D3930 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C01A9420 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00050BC (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)this + 24, a2);
    v6 = (unsigned int *)v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)this + 14);
      v8 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7 + 40) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v19);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v7 + 40) + 64LL);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v7 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v20 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v20 + 24) = v3;
          *(_QWORD *)(v20 + 32) = this;
          WdLogEvent5_WdError(v20);
          return 3223192384LL;
        }
        else
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(
                   (DMMVIDPNTOPOLOGY *)(Container + 96),
                   PathSourceFromTarget,
                   *(_DWORD *)(v7 + 24));
          if ( !Path )
          {
            v21 = WdLogNewEntry5_WdAssertion(v12);
            WdLogEvent5_WdAssertion(v21);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v14);
            v22[3] = v6[21];
            v22[4] = v6[22];
            v22[5] = v6[23];
            v22[6] = v6[24];
            v22[7] = *(unsigned int *)(v7 + 24);
            WdLogEvent5_WdError(v22);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v8;
          }
        }
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v18 + 24) = this;
        WdLogEvent5_WdError(v18);
        return 3223192329LL;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v17 + 24) = v3;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdError(v17);
      return 3223192394LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v16 + 24) = v3;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdDmmEvent(v16);
    return 3223192352LL;
  }
  return result;
}
