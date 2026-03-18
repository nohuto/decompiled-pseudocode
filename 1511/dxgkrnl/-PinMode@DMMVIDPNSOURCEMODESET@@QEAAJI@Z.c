/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0092860
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009CDC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0177CE0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C017A7E0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C017FF80 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00091E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000BA48 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 Container; // r12
  __int64 i; // r14
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)this + 24, a2);
    v6 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)this + 14);
      v8 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7 + 40) )
        {
          v22 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v22);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v7 + 40) + 64LL);
        for ( i = 0LL; ; ++i )
        {
          v11 = *(_DWORD *)(v7 + 24);
          v26 = -1;
          v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v11, i, &v26);
          v14 = v12;
          if ( v12 < 0 )
            break;
          if ( v26 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v7 + 24), v26);
          if ( !Path )
          {
            v23 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v23);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v24[3] = *(unsigned int *)(v6 + 76);
            v24[4] = *(unsigned int *)(v6 + 80);
            v24[5] = *(int *)(v6 + 96);
            v24[6] = *(unsigned int *)(v7 + 24);
            WdLogEvent5_WdError(v24);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v8;
            return result;
          }
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v25[3] = i;
        v25[4] = v3;
        v25[5] = this;
        v25[6] = v14;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v14;
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v21 + 24) = this;
        WdLogEvent5_WdError(v21);
        return 3223192328LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v20 + 24) = v3;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
      return 3223192394LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdDmmEvent(v19);
    return 3223192352LL;
  }
}
