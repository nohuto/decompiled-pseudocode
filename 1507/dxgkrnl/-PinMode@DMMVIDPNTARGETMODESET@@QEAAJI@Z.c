/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0088704
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003C3C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D4290 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C017C320 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006000 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this + 24, a2);
    v9 = (unsigned int *)v4;
    if ( v4 )
    {
      v10 = *((_QWORD *)this + 14);
      v11 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v10 )
      {
        if ( !*(_QWORD *)(v10 + 40) )
        {
          v25 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
          WdLogEvent5_WdAssertion(v25);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v10 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v26 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v26 + 24) = v3;
          *(_QWORD *)(v26 + 32) = this;
          WdLogEvent5_WdError(v26);
          return 3223192384LL;
        }
        else
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(
                   (DMMVIDPNTOPOLOGY *)(Container + 96),
                   PathSourceFromTarget,
                   *(_DWORD *)(v10 + 24));
          if ( !Path )
          {
            v27 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
            WdLogEvent5_WdAssertion(v27);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v28[3] = v9[21];
            v28[4] = v9[22];
            v28[5] = v9[23];
            v28[6] = v9[24];
            v28[7] = *(unsigned int *)(v10 + 24);
            WdLogEvent5_WdError(v28);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v11;
          }
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v24 + 24) = this;
        WdLogEvent5_WdError(v24);
        return 3223192329LL;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v23 + 24) = v3;
      *(_QWORD *)(v23 + 32) = this;
      WdLogEvent5_WdError(v23);
      return 3223192394LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdDmmEvent(v22);
    return 3223192352LL;
  }
  return result;
}
