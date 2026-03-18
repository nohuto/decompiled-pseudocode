/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01769E4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C0178E64 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v7; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  VIDPN_MGR *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rsi
  DMMVIDPNTOPOLOGY *v17; // r12
  unsigned int v18; // r14d
  __int64 v19; // rbx
  int NumPathsFromSource; // eax
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v32; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v33; // eax
  unsigned __int16 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v40; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v41; // [rsp+40h] [rbp-58h]
  unsigned __int64 v42; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v45; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+18h]

  v46 = a3;
  v45 = a2;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 248) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 248) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v43, (__int64)v11);
  v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v14 = v12;
  if ( !v12 || *(VIDPN_MGR **)(v12 + 48) != v11 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = a4;
    LODWORD(a4) = -1073741811;
    v15[4] = -1073741811LL;
LABEL_38:
    WdLogEvent5_WdError(v15);
    goto LABEL_32;
  }
  v16 = 0LL;
  v17 = (DMMVIDPNTOPOLOGY *)(v12 + 96);
  if ( a3 )
  {
    v18 = v44;
    while ( 1 )
    {
      v19 = v7[v16];
      if ( !v16 )
        v18 = *v7;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v17, v7[v16], &v42);
      v22 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v23 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( v22 == -1071774919 )
        break;
      if ( v42 > 1 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v15[3] = v19;
        a4 = -1073741811LL;
        v40 = v42;
        goto LABEL_34;
      }
      v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, v19, 0LL, &v44);
      v26 = v44;
      if ( v24 < 0 || v44 == -1 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( a5 )
        a5[v16] = v26;
      if ( v16 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v17, v19, v26);
        if ( !Path )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        v33 = *((_DWORD *)Path + 26);
        v34 = *((_WORD *)Path + 54);
        v41 = v33;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v11, v17, v19, v26, 0) < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v35);
          WdLogEvent5_WdAssertion(v36);
        }
        v37 = VIDPN_MGR::AddPathToVidPnTopology(v11, v17, v18, v26, v41, v34, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v37;
        if ( v37 < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v40 = v18;
          v15[3] = v26;
LABEL_34:
          v15[5] = v14;
          v15[4] = v40;
          v15[6] = a4;
          goto LABEL_38;
        }
        v7 = v45;
      }
      else
      {
        v28 = VIDPN_MGR::UnpinPathModalityFromSource(v11, v17, v18);
        a4 = v28;
        if ( v28 < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v15[3] = v18;
          goto LABEL_37;
        }
      }
      if ( ++v16 >= v46 )
        goto LABEL_31;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v15[3] = v19;
    a4 = -1073741811LL;
LABEL_37:
    v15[4] = v14;
    v15[5] = a4;
    goto LABEL_38;
  }
LABEL_31:
  LODWORD(a4) = 0;
LABEL_32:
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v43[0] + 40LL));
  return (unsigned int)a4;
}
