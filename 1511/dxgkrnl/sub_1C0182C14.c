/*
 * XREFs of sub_1C0182C14 @ 0x1C0182C14
 * Callers:
 *     sub_1C00A7A84 @ 0x1C00A7A84 (sub_1C00A7A84.c)
 *     sub_1C0182B70 @ 0x1C0182B70 (sub_1C0182B70.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C008FC04 (-QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERF.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C008FC64 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 */

__int64 __fastcall sub_1C0182C14(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  VIDPN_MGR *v17; // r12
  __int64 v18; // r9
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rbp
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebp
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v40; // [rsp+70h] [rbp+8h] BYREF
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v41; // [rsp+78h] [rbp+10h] BYREF
  __int64 v42; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = v3;
  v9 = 104 * v3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v9 + a1 + 16) + 16LL),
           *(_DWORD *)(*(_QWORD *)(v9 + a1 + 16) + 20LL));
  if ( Path )
  {
    v17 = *(VIDPN_MGR **)(a2 + 48);
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v17, &v40);
    v19 = v40;
    if ( (*((_DWORD *)Path + 29) == 254
       || (a2 == -289 ? (v20 = 0LL) : (v20 = a2 + 96),
           LOBYTE(v18) = 1,
           v24 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v40 + 11))(
                   v20,
                   *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 16LL),
                   *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 20LL),
                   v18),
           v24 >= 0))
      && (*((_DWORD *)Path + 28) == 254
       || (a2 == -289 ? (v26 = 0LL) : (v26 = a2 + 96),
           LOBYTE(v18) = 1,
           v24 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v19 + 9))(
                   v26,
                   *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 16LL),
                   *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 20LL),
                   v18),
           v24 >= 0)) )
    {
      v27 = *((_QWORD *)Path + 12);
      v28 = *(_QWORD *)(v27 + 104);
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
        v29 = *(_QWORD *)(v27 + 104);
      }
      else
      {
        v29 = 0LL;
      }
      v30 = *(_QWORD *)(v29 + 144) == 0LL;
      v42 = v29;
      if ( v30
        || ((VIDPN_MGR::QueryDxgDmmVidPnTargetModeSetInterface(v17, &v41), (v32 = v29 + 137) == 0)
          ? (v33 = 0LL)
          : (v33 = v32 - 137),
            LOBYTE(v31) = 1,
            v36 = (*((__int64 (__fastcall **)(__int64, __int64))v41 + 7))(v33, v31),
            v36 >= 0) )
      {
        v36 = 0;
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v37, v38);
        v39[3] = v8;
        v39[4] = a2;
        v39[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 16LL);
        v39[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 20LL);
        WdLogEvent5_WdWarning(v39);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
      return (unsigned int)v36;
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v18);
      v25[3] = v8;
      v25[4] = a2;
      v25[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 16LL);
      v25[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 20LL);
      WdLogEvent5_WdWarning(v25);
      return (unsigned int)v24;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
    v15[3] = v8;
    v15[4] = a2;
    v15[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 16LL);
    v15[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 20LL);
    WdLogEvent5_WdWarning(v15);
    return 3223192345LL;
  }
}
