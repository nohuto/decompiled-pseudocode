/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0092F28
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000635C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00E4C60 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C0180060 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00091E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000BA48 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  int PathSourceFromTarget; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax

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
          v21 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v21);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v7 + 40) + 64LL);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(unsigned int *)(v7 + 24),
                                 v10,
                                 v11);
        if ( PathSourceFromTarget == -1 )
        {
          v22 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v22 + 24) = v3;
          *(_QWORD *)(v22 + 32) = this;
          WdLogEvent5_WdError(v22);
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
            v23 = WdLogNewEntry5_WdAssertion(v14);
            WdLogEvent5_WdAssertion(v23);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v16);
            v24[3] = v6[21];
            v24[4] = v6[22];
            v24[5] = v6[23];
            v24[6] = v6[24];
            v24[7] = *(unsigned int *)(v7 + 24);
            WdLogEvent5_WdError(v24);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v8;
          }
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v20 + 24) = this;
        WdLogEvent5_WdError(v20);
        return 3223192329LL;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v19 + 24) = v3;
      *(_QWORD *)(v19 + 32) = this;
      WdLogEvent5_WdError(v19);
      return 3223192394LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v18 + 24) = v3;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdDmmEvent(v18);
    return 3223192352LL;
  }
  return result;
}
