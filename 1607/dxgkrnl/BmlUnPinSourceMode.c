/*
 * XREFs of BmlUnPinSourceMode @ 0x1C01ABFB0
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0084CF8 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0084D28 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C01ABCDC (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  VIDPN_MGR *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v30; // [rsp+20h] [rbp-28h] BYREF
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v31; // [rsp+58h] [rbp+10h] BYREF
  __int64 v32; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    v8 = a3;
    v9 = 104LL * a3;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 16LL),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 20LL));
    if ( Path )
    {
      v16 = *(VIDPN_MGR **)(a2 + 48);
      VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v16, &v30);
      v17 = *((_QWORD *)Path + 11);
      v18 = *(_QWORD *)(v17 + 104);
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
        v19 = *(_QWORD *)(v17 + 104);
      }
      else
      {
        v19 = 0LL;
      }
      v20 = *(_QWORD *)(v19 + 144) == 0LL;
      v32 = v19;
      if ( v20
        || ((VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v16, &v31), (v22 = v19 + 137) == 0)
          ? (v23 = 0LL)
          : (v23 = v22 - 137),
            LOBYTE(v21) = 1,
            v26 = (*((__int64 (__fastcall **)(__int64, __int64))v31 + 6))(v23, v21),
            v26 >= 0) )
      {
        v26 = 0;
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v27, v28);
        v29[3] = Path;
        v29[4] = a2;
        v29[5] = *(unsigned int *)(*((_QWORD *)Path + 11) + 24LL);
        v29[6] = *(unsigned int *)(*((_QWORD *)Path + 12) + 24LL);
        WdLogEvent5_WdWarning(v29);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL);
      return (unsigned int)v26;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
      v15[3] = v8;
      v15[4] = a2;
      v15[5] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 16LL);
      v15[6] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 20LL);
      WdLogEvent5_WdWarning(v15);
      return 3223192345LL;
    }
  }
  return result;
}
