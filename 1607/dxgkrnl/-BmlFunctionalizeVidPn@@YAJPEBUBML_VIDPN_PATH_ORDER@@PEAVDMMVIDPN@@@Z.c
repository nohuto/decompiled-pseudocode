/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00BCEAC
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 *     BmlIsSecondaryClonePath @ 0x1C00BFCF4 (BmlIsSecondaryClonePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // di
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // di
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // ebp
  unsigned __int16 i; // di
  __int64 v33; // rcx
  _DWORD *v34; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  struct DMMVIDPNPRESENTPATH *v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v36 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*((_QWORD *)a2 + 6) )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v38);
  }
  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v7 = 104LL * v6;
      v8 = *(_QWORD *)((char *)a1 + v7 + 16);
      *(_WORD *)((char *)a1 + v7 + 64) = 0;
      *(_WORD *)((char *)a1 + v7 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v8 + 16),
               *(_DWORD *)(v8 + 20));
      if ( !Path )
        break;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(a1, v6, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v7 + 66) )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          v40 = 104LL * v6;
          v39[3] = v6;
          v39[4] = a2;
          v39[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v40 + 16) + 16LL);
          v41 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v40 + 16) + 20LL);
          v39[7] = a1;
LABEL_33:
          v39[6] = v41;
          WdLogEvent5_WdWarning(v39);
          return 3223192345LL;
        }
      }
      else
      {
        v18 = *((_QWORD *)Path + 11);
        v19 = *(_QWORD *)(v18 + 104);
        if ( v19 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v19 + 96), 1u);
          v20 = *(_QWORD *)(v18 + 104);
        }
        else
        {
          v20 = 0LL;
        }
        v21 = *(_QWORD *)(v20 + 144);
        v53 = v20;
        if ( v21 )
        {
          if ( *(_WORD *)((char *)a1 + v7 + 66) )
          {
LABEL_31:
            v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v14, v16, v17);
            v43 = 104LL * v6;
            v42[3] = v6;
            v42[4] = a2;
            v42[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v43 + 16) + 16LL);
            v42[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v43 + 16) + 20LL);
            v42[7] = a1;
            WdLogEvent5_WdWarning(v42);
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v7 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
      }
      if ( ++v6 >= *(unsigned __int8 *)a1 )
        goto LABEL_16;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v44 = 104LL * v6;
    v39[3] = a1;
    v39[4] = v6;
    v39[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 16LL);
    v41 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 20LL);
    v39[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v22 = 0;
  while ( v22 < *(unsigned __int8 *)a1 )
  {
    v23 = v22;
    v24 = *((_QWORD *)a1 + 13 * v22 + 2);
    if ( !DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v24 + 16), *(_DWORD *)(v24 + 20)) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v45);
    }
    v26 = BmlFunctionalizePath((int)a1);
    v31 = v26;
    if ( v26 < 0 )
    {
      if ( v26 != -1071774970 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
        v46[3] = a2;
        v46[4] = a1;
        v46[5] = v22;
        return v31;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = v22;
      DxgkLogCodePointPacket(0x11u, v22, 0, 0);
      if ( !v22 )
        return 3223192326LL;
      --v22;
    }
    else
    {
      ++v22;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = v23;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
  {
    v33 = 104LL * i;
    v34 = *(_DWORD **)((char *)a1 + v33 + 16);
    if ( (*v34 & 0x200000) != 0 )
    {
      if ( (*v34 & 0x20200) != 0x20200 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v47);
      }
      v49 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), v34[4], v34[5]);
      if ( !v49 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v48);
        WdLogEvent5_WdAssertion(v50);
      }
      if ( (int)BmlGetRecommendedContentSizeForPath(a1, i, v49, v34) < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v51);
        WdLogEvent5_WdAssertion(v52);
      }
    }
  }
  return 0LL;
}
