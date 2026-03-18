/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C017481C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v7; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  VIDPN_MGR *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rsi
  DMMVIDPNTOPOLOGY *v20; // r12
  unsigned int v21; // r14d
  __int64 v22; // rbx
  int NumPathsFromSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ebp
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbp
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v44; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v45; // eax
  unsigned __int16 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  unsigned __int64 v55; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v56; // [rsp+40h] [rbp-58h]
  unsigned __int64 v57; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v58[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v60; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v61; // [rsp+B0h] [rbp+18h]

  v61 = a3;
  v60 = a2;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 247) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 247) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v58, (__int64)v14);
  v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v17 = v15;
  if ( !v15 || *(VIDPN_MGR **)(v15 + 48) != v14 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v18[3] = a4;
    LODWORD(a4) = -1073741811;
    v18[4] = -1073741811LL;
LABEL_38:
    WdLogEvent5_WdError(v18);
    goto LABEL_32;
  }
  v19 = 0LL;
  v20 = (DMMVIDPNTOPOLOGY *)(v15 + 96);
  if ( a3 )
  {
    v21 = v59;
    while ( 1 )
    {
      v22 = v7[v19];
      if ( !v19 )
        v21 = *v7;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v20, v7[v19], &v57);
      v28 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( v28 == -1071774919 )
        break;
      if ( v57 > 1 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v18[3] = v22;
        a4 = -1073741811LL;
        v55 = v57;
        goto LABEL_34;
      }
      v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v20, (unsigned int)v22, 0LL, &v59);
      v35 = v59;
      if ( v30 < 0 || v59 == -1 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        WdLogEvent5_WdAssertion(v36);
      }
      if ( a5 )
        a5[v19] = v35;
      if ( v19 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v20, v22, v35);
        if ( !Path )
        {
          v44 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
          WdLogEvent5_WdAssertion(v44);
        }
        v45 = *((_DWORD *)Path + 26);
        v46 = *((_WORD *)Path + 54);
        v56 = v45;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v14, v20, v22, v35, 0) < 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
          WdLogEvent5_WdAssertion(v51);
        }
        v52 = VIDPN_MGR::AddPathToVidPnTopology(v14, v20, v21, (unsigned int)v35, v56, v46, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v52;
        if ( v52 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v53);
          v55 = v21;
          v18[3] = v35;
LABEL_34:
          v18[5] = v17;
          v18[4] = v55;
          v18[6] = a4;
          goto LABEL_38;
        }
        v7 = v60;
      }
      else
      {
        v37 = VIDPN_MGR::UnpinPathModalityFromSource(v14, v20, v21);
        a4 = v37;
        if ( v37 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v18[3] = v21;
          goto LABEL_37;
        }
      }
      if ( ++v19 >= v61 )
        goto LABEL_31;
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v18[3] = v22;
    a4 = -1073741811LL;
LABEL_37:
    v18[4] = v17;
    v18[5] = a4;
    goto LABEL_38;
  }
LABEL_31:
  LODWORD(a4) = 0;
LABEL_32:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v58[0] + 40LL));
  return (unsigned int)a4;
}
