/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C00BD274
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C00BD4B8 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C00BD56C (BmlPinPathContentRotation.c)
 *     BmlGetNextBestTargetMode @ 0x1C00BE624 (BmlGetNextBestTargetMode.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01ABD80 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rax
  unsigned int v5; // edi
  unsigned __int16 v6; // r14
  __int64 v8; // rbp
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  struct DMMVIDPNTARGETMODESET *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rbx
  int NextBestTargetMode; // eax
  unsigned __int16 v25; // bx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r14d
  _QWORD *v44; // rax
  __int64 v45; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v46; // [rsp+48h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v47; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v50; // [rsp+C0h] [rbp+18h]
  __int64 v51; // [rsp+C8h] [rbp+20h] BYREF

  v50 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v8 = 104LL * (unsigned __int16)a3;
  v49 = (unsigned __int16)a3;
  v46 = v4;
  v11 = (unsigned __int16)a3;
  if ( !v4 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v31);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v51 = 0LL;
    goto LABEL_31;
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v45 = *(_QWORD *)(v12 + 104);
  v51 = v45;
  if ( !v45 )
  {
LABEL_31:
    v32 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v32 + 24) = v11;
    WdLogEvent5_WdError(v32);
    v5 = -1071774968;
    goto LABEL_22;
  }
  v14 = *(_QWORD *)(a4 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 96), 1u);
    v16 = *(struct DMMVIDPNTARGETMODESET **)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v47 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, a2, a3, a4);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v21 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v21;
  if ( !v16 )
  {
    LODWORD(v23) = -1071774967;
LABEL_48:
    v38 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_QWORD *)(v38 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
    *(_QWORD *)(v38 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
    {
      v43 = BmlUnPinPartialPathModalityOnPath(a1, a2, v6);
      if ( v43 < 0 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
        v44[3] = a1;
        v44[4] = v11;
        v44[5] = a2;
        WdLogEvent5_WdWarning(v44);
        v5 = v43;
        goto LABEL_21;
      }
      *(_WORD *)(a1 + v8 + 68) = 0;
    }
    v5 = v23;
    goto LABEL_21;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v16 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v23) = -1071774970;
LABEL_47:
    v6 = v50;
    goto LABEL_48;
  }
  LODWORD(v22) = -1;
  v48 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( *(_WORD *)(a1 + v8 + 70) )
    {
      LODWORD(v22) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v48 = v22;
      goto LABEL_13;
    }
    WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_39;
  }
  if ( *(_WORD *)(a1 + v8 + 70) )
  {
    if ( *((_QWORD *)v16 + 18) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v34);
    }
LABEL_13:
    LODWORD(v23) = -1071774970;
    while ( 1 )
    {
      if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
        goto LABEL_46;
      NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v50, v16, v45, v22, &v48);
      v23 = NextBestTargetMode;
      if ( NextBestTargetMode < 0 )
        break;
      v22 = v48;
      if ( v48 == -1 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v36);
      }
      ++*(_WORD *)(a1 + v8 + 68);
      LODWORD(v23) = VIDPN_MGR::PinVidPnTargetMode(v46, v16, v22, 1);
      if ( (int)v23 >= 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v18, v19, v20) + 24) = v22;
        v25 = v50;
        if ( (int)BmlPinPathContentScaling(a1, a2, v50) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v25) >= 0 )
          goto LABEL_21;
        LODWORD(v23) = -1071774970;
      }
      ++*(_DWORD *)(a1 + v8 + 76);
      *(_DWORD *)(a1 + v8 + 88) = v23;
      if ( (_DWORD)v23 != -1071774970 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19, v20);
        v37[3] = (int)v23;
LABEL_44:
        v11 = v49;
        v37[4] = a1;
        v37[5] = v11;
        v37[6] = a2;
        WdLogEvent5_WdWarning(v37);
        goto LABEL_47;
      }
    }
    if ( NextBestTargetMode != -1071774970 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19, v20);
      v37[3] = v23;
      goto LABEL_44;
    }
LABEL_46:
    v11 = v49;
    goto LABEL_47;
  }
  if ( !*((_QWORD *)v16 + 18) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( (int)BmlPinPathContentScaling(a1, a2, v6) < 0 || (int)BmlPinPathContentRotation(a1, a2, v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
LABEL_39:
    v5 = -1071774970;
    goto LABEL_21;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_21:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v47, 0LL);
LABEL_22:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v51, 0LL);
  return v5;
}
