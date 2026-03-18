/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C009B690
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C009B86C (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     BmlIsSecondaryClonePath @ 0x1C009A494 (BmlIsSecondaryClonePath.c)
 *     BmlFunctionalizePath @ 0x1C009B4A4 (BmlFunctionalizePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C017E494 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // di
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DMMVIDPNPRESENTPATH *v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // ebp
  unsigned __int16 i; // di
  __int64 v37; // rcx
  _DWORD *v38; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DMMVIDPNPRESENTPATH *v54; // rbp
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !*((_QWORD *)a2 + 6) )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v42);
  }
  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v10 = 104LL * v6;
      v11 = *(_QWORD *)((char *)a1 + v10 + 16);
      *(_WORD *)((char *)a1 + v10 + 64) = 0;
      *(_WORD *)((char *)a1 + v10 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v11 + 16),
               *(_DWORD *)(v11 + 20));
      if ( !Path )
        break;
      if ( BmlIsSecondaryClonePath((__int64)a1, v6, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v10 + 66) )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v7, v8, v9);
          v44 = 104LL * v6;
          v43[3] = v6;
          v43[4] = a2;
          v43[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 16LL);
          v45 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 20LL);
          v43[7] = a1;
LABEL_33:
          v43[6] = v45;
          WdLogEvent5_WdWarning(v43);
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
        v60 = v20;
        if ( v21 )
        {
          if ( *(_WORD *)((char *)a1 + v10 + 66) )
          {
LABEL_31:
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v7, v8, v9);
            v47 = 104LL * v6;
            v46[3] = v6;
            v46[4] = a2;
            v46[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v47 + 16) + 16LL);
            v46[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v47 + 16) + 20LL);
            v46[7] = a1;
            WdLogEvent5_WdWarning(v46);
            auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v60, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v10 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v60, 0LL);
      }
      if ( ++v6 >= *(unsigned __int8 *)a1 )
        goto LABEL_16;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v48 = 104LL * v6;
    v43[3] = a1;
    v43[4] = v6;
    v43[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v48 + 16) + 16LL);
    v45 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v48 + 16) + 20LL);
    v43[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v22 = 0;
  while ( v22 < *(unsigned __int8 *)a1 )
  {
    v23 = v22;
    v24 = *((_QWORD *)a1 + 13 * v22 + 2);
    v27 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v24 + 16), *(_DWORD *)(v24 + 20));
    if ( !v27 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v26, v25, v28, v29);
      WdLogEvent5_WdAssertion(v49);
    }
    v30 = BmlFunctionalizePath((__int64)a1, (__int64)a2, v22, (__int64)v27);
    v35 = v30;
    if ( v30 < 0 )
    {
      if ( v30 != -1071774970 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
        v50[3] = a2;
        v50[4] = a1;
        v50[5] = v22;
        return v35;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v33, v34) + 24) = v22;
      DxgkLogCodePointPacket(0x11u, v22, 0, 0);
      if ( !v22 )
        return 3223192326LL;
      --v22;
    }
    else
    {
      ++v22;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v33, v34) + 24) = v23;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
  {
    v37 = 104LL * i;
    v38 = *(_DWORD **)((char *)a1 + v37 + 16);
    if ( (*v38 & 0x200000) != 0 )
    {
      if ( (*v38 & 0x20200) != 0x20200 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v37, v7, v8, v9);
        WdLogEvent5_WdAssertion(v51);
      }
      v54 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), v38[4], v38[5]);
      if ( !v54 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v53, v52, v55, v56);
        WdLogEvent5_WdAssertion(v57);
      }
      if ( (int)BmlGetRecommendedContentSizeForPath(a1, i, v54, v38) < 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v58, v7, v8, v9);
        WdLogEvent5_WdAssertion(v59);
      }
    }
  }
  return 0LL;
}
