/*
 * XREFs of BmlUnPinSourceMode @ 0x1C017EA00
 * Callers:
 *     BmlFunctionalizePath @ 0x1C009B4A4 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0097000 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0097030 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C017E72C (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  VIDPN_MGR *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v33; // [rsp+20h] [rbp-28h] BYREF
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v34; // [rsp+58h] [rbp+10h] BYREF
  __int64 v35; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, v4);
  if ( (int)result >= 0 )
  {
    v9 = v4;
    v10 = 104LL * v4;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)&a1[v10 + 16] + 16LL),
             *(_DWORD *)(*(_QWORD *)&a1[v10 + 16] + 20LL));
    if ( Path )
    {
      v17 = *(VIDPN_MGR **)(a2 + 48);
      VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v17, &v33, v14, v15);
      v20 = *((_QWORD *)Path + 11);
      v21 = *(_QWORD *)(v20 + 104);
      if ( v21 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
        v22 = *(_QWORD *)(v20 + 104);
      }
      else
      {
        v22 = 0LL;
      }
      v23 = *(_QWORD *)(v22 + 144) == 0LL;
      v35 = v22;
      if ( v23
        || ((VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v17, &v34, v18, v19), (v25 = v22 + 137) == 0)
          ? (v26 = 0LL)
          : (v26 = v25 - 137),
            LOBYTE(v24) = 1,
            v29 = (*((__int64 (__fastcall **)(__int64, __int64))v34 + 6))(v26, v24),
            v29 >= 0) )
      {
        v29 = 0;
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v30, v31);
        v32[3] = Path;
        v32[4] = a2;
        v32[5] = *(unsigned int *)(*((_QWORD *)Path + 11) + 24LL);
        v32[6] = *(unsigned int *)(*((_QWORD *)Path + 12) + 24LL);
        WdLogEvent5_WdWarning(v32);
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v35, 0LL);
      return (unsigned int)v29;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v14, v15);
      v16[3] = v9;
      v16[4] = a2;
      v16[5] = *(unsigned int *)(*(_QWORD *)&a1[v10 + 16] + 16LL);
      v16[6] = *(unsigned int *)(*(_QWORD *)&a1[v10 + 16] + 20LL);
      WdLogEvent5_WdWarning(v16);
      return 3223192345LL;
    }
  }
  return result;
}
