/*
 * XREFs of sub_1C00A7898 @ 0x1C00A7898
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00A76BC (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     sub_1C00A0A40 @ 0x1C00A0A40 (sub_1C00A0A40.c)
 *     sub_1C00A7A84 @ 0x1C00A7A84 (sub_1C00A7A84.c)
 *     sub_1C00A87FC @ 0x1C00A87FC (sub_1C00A87FC.c)
 *     sub_1C0182E44 @ 0x1C0182E44 (sub_1C0182E44.c)
 */

__int64 __fastcall sub_1C00A7898(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DMMVIDPNSOURCEMODESET *v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  VIDPN_MGR *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebp
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  struct DMMVIDPNSOURCEMODESET *v63; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v64; // [rsp+88h] [rbp+10h]
  unsigned int v65; // [rsp+90h] [rbp+18h] BYREF
  __int64 v66; // [rsp+98h] [rbp+20h]

  v66 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v14 = (unsigned int)v5;
  v64 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v64 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v44);
  }
  v15 = *(_QWORD *)(a4 + 88);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v63 = 0LL;
    goto LABEL_27;
  }
  v17 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
  v18 = *(struct DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v63 = v18;
  if ( !v18 )
  {
LABEL_27:
    LODWORD(v20) = -1071774968;
    goto LABEL_41;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v18 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v18 + 48) )
  {
    LODWORD(v20) = -1071774970;
    goto LABEL_41;
  }
  LODWORD(v19) = -1;
  v65 = -1;
  if ( *(_WORD *)(v13 + a1 + 64) )
  {
    if ( !*((_QWORD *)v18 + 18) )
    {
      v47 = WdLogNewEntry5_WdAssertion(1LL);
      WdLogEvent5_WdAssertion(v47);
    }
    v39 = (int)sub_1C00A7A84(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v48, v50, v51) + 24) = v39;
    if ( (int)v39 < 0 )
    {
      if ( *(_WORD *)(v13 + a1 + 66) && !(unsigned __int8)sub_1C00A87FC(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)v18 + 18) + 24LL);
        v65 = v19;
        goto LABEL_11;
      }
      WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
      *(_WORD *)(v13 + a1 + 64) = 0;
      LODWORD(v39) = -1071774970;
    }
LABEL_25:
    LODWORD(v20) = v39;
LABEL_18:
    v36 = v20;
LABEL_19:
    LODWORD(v20) = v36;
    goto LABEL_20;
  }
  if ( !*(_WORD *)(v13 + a1 + 66) || (unsigned __int8)sub_1C00A87FC(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v17, v9, v11, v12);
    if ( !*((_QWORD *)v18 + 18) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v46);
    }
    v39 = (int)sub_1C00A7A84(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v41, v40, v42, v43) + 24) = v39;
    if ( (int)v39 >= 0 )
      ++*(_WORD *)(v13 + a1 + 64);
    goto LABEL_25;
  }
  if ( *((_QWORD *)v18 + 18) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v45);
  }
LABEL_11:
  LODWORD(v20) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v13 + a1 + 64) >= *(_WORD *)(v13 + a1 + 66) )
      goto LABEL_40;
    v21 = sub_1C00A0A40(a1, a2, (unsigned __int16)v5, (__int64)v18, v19, &v65);
    v20 = v21;
    if ( v21 < 0 )
      break;
    v19 = v65;
    if ( v65 == -1 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v56);
    }
    v26 = v64;
    ++*(_WORD *)(v13 + a1 + 64);
    v20 = (int)VIDPN_MGR::PinVidPnSourceMode(v26, v18, v19, 1);
    v31 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = v19;
    *(_QWORD *)(v31 + 32) = v20;
    if ( (int)v20 >= 0 )
    {
      LODWORD(v20) = sub_1C00A7A84(a1, a2, (unsigned __int16)v5, v66);
      if ( (int)v20 >= 0 )
        goto LABEL_18;
    }
    *(_DWORD *)(v13 + a1 + 88) = v20;
    ++*(_DWORD *)(v13 + a1 + 72);
    if ( (_DWORD)v20 != -1071774970 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      v14 = (unsigned __int16)v5;
      v57[3] = (int)v20;
      v57[5] = a2;
      v57[6] = (unsigned __int16)v5;
LABEL_38:
      v57[4] = a1;
      WdLogEvent5_WdWarning(v57);
      goto LABEL_41;
    }
  }
  if ( v21 != -1071774970 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v14 = (unsigned __int16)v5;
    v57[3] = v20;
    v57[5] = (unsigned __int16)v5;
    v57[6] = a2;
    goto LABEL_38;
  }
LABEL_40:
  v14 = (unsigned __int16)v5;
LABEL_41:
  if ( *(_WORD *)(v13 + a1 + 66)
    && !(unsigned __int8)sub_1C00A87FC(a1, (unsigned __int16)v5, 0LL)
    && *(_WORD *)(v13 + a1 + 64) )
  {
    v36 = sub_1C0182E44(a1, a2, (unsigned __int16)v5);
    if ( v36 >= 0 )
    {
      *(_WORD *)(v13 + a1 + 64) = 0;
      goto LABEL_20;
    }
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
    v62[3] = a1;
    v62[4] = a2;
    v62[5] = v14;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_19;
  }
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v63, 0LL);
  return (unsigned int)v20;
}
