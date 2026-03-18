/*
 * XREFs of ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C017327C
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000620C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C002BA70 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0096EE4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentRotation(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNPRESENTPATH *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 Container; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  D3DKMDT_HVIDPN v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int IsSupportedVidPn; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  _QWORD *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  DXGK_ENUM_PIVOT v47; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int8 v48; // [rsp+68h] [rbp+20h] BYREF

  v48 = a4;
  v4 = (int)a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !(_DWORD)v4 || (unsigned int)(v4 - 254) <= 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNPRESENTPATH::PinContentRotation(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[5] = v14;
LABEL_8:
    v15[4] = a2;
    v15[3] = v4;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40, v10, v12, v13);
  v18 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v21 = (D3DKMDT_HVIDPN)(v18 + 88);
  v22 = *((_QWORD *)a2 + 12);
  v47.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v23 = *(unsigned int *)(v22 + 24);
  v47.VidPnTargetId = *(_DWORD *)(v22 + 24);
  if ( v18 != -88 )
    v21 = (D3DKMDT_HVIDPN)v18;
  if ( !v21 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22, v23, v19, v20);
    WdLogEvent5_WdAssertion(v24);
  }
  v48 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(this, v21, &v48, v20);
  v14 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    if ( !v48 )
    {
      v14 = WdLogNewEntry5_WdDmmEvent(v26);
      *(_QWORD *)(v14 + 24) = v21;
      if ( !this[1] )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
        WdLogEvent5_WdAssertion(v41);
      }
      *(_QWORD *)(v14 + 32) = *((_QWORD *)this[1] + 2);
      WdLogEvent5_WdDmmEvent(v14);
      LODWORD(v14) = -1071774970;
      goto LABEL_29;
    }
    v42 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)this, (__int64)v21, 9, &v47);
    v14 = v42;
    if ( v42 >= 0 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
      v44[3] = v21;
      v44[4] = 9LL;
      v44[5] = &v47;
      if ( !this[1] )
      {
        v45 = WdLogNewEntry5_WdAssertion(v43, v33, v35, v36);
        WdLogEvent5_WdAssertion(v45);
      }
      v34 = *((_QWORD *)this[1] + 2);
      v44[6] = v34;
      v44[7] = v14;
    }
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v31[3] = v21;
    if ( !this[1] )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      WdLogEvent5_WdAssertion(v32);
    }
    v31[4] = *((_QWORD *)this[1] + 2);
    v31[5] = v14;
    WdLogEvent5_WdError(v31);
  }
  if ( (int)v14 < 0 )
  {
    if ( (_DWORD)v14 != -1071774970 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v15[5] = (int)v14;
      goto LABEL_8;
    }
LABEL_29:
    v46 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v46 + 24) = v4;
    *(_QWORD *)(v46 + 32) = a2;
    WdLogEvent5_WdWarning(v46);
    return (unsigned int)v14;
  }
  return 0LL;
}
