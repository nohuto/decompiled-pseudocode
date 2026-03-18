/*
 * XREFs of ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0 (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x14019E5D8 (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14019EA2C (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetRestoreAroundCursorOffset@@YAJJJJ@Z @ 0x1402939B4 (-GetRestoreAroundCursorOffset@@YAJJJJ@Z.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402C5524 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402EFE80 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402EFFDC (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

bool __fastcall xxxSizeOrMoveRect(struct MOVESIZEDATA *this, struct tagPOINT a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v6; // r8d
  LONG v8; // eax
  LONG x; // r14d
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // r8
  int v14; // edx
  int v15; // r11d
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  bool v21; // r8
  __int64 v22; // rdx
  char v24; // di
  char v25; // bl
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  LONG right; // ecx
  __m128i v32; // xmm0
  struct tagRECT v33; // xmm1
  struct tagPOINT v34; // rax
  int v35; // r8d
  int v36; // edx
  int RestoreAroundCursorOffset; // eax
  LONG top; // r8d
  LONG v39; // ebx
  int v40; // ecx
  LONG v41; // eax
  __int64 v42; // rdx
  LONG v43; // r14d
  LONG v44; // ebx
  LONG left; // ecx
  int v46; // eax
  struct MOVESIZEDATA *v47; // rcx
  char v48; // al
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  struct MOVESIZEDATA *v52; // rcx
  char v53; // al
  LONG v54; // r14d
  LONG bottom; // edi
  LONG v56; // esi
  LONG v57; // ebx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  int v61; // r8d
  struct MOVESIZEDATA *v62; // rcx
  char v63; // al
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rcx
  char v68; // r14
  bool v69; // bl
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  char v73; // bl
  bool v74; // di
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  __int16 v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+40h] [rbp-C0h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  __int64 v81; // [rsp+50h] [rbp-B0h]
  __int64 v82; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+60h] [rbp-A0h]
  __int64 v84; // [rsp+68h] [rbp-98h]
  char v85; // [rsp+80h] [rbp-80h]
  char v86; // [rsp+80h] [rbp-80h]
  char v87; // [rsp+80h] [rbp-80h]
  bool v88; // [rsp+81h] [rbp-7Fh]
  char v89; // [rsp+81h] [rbp-7Fh]
  bool v90; // [rsp+81h] [rbp-7Fh]
  unsigned int v91; // [rsp+84h] [rbp-7Ch] BYREF
  bool v92; // [rsp+88h] [rbp-78h]
  bool v93; // [rsp+89h] [rbp-77h]
  LONG v94; // [rsp+8Ch] [rbp-74h]
  int v95; // [rsp+90h] [rbp-70h]
  unsigned int v96; // [rsp+94h] [rbp-6Ch]
  struct tagRECT *v97; // [rsp+98h] [rbp-68h]
  struct tagPOINT v98; // [rsp+A0h] [rbp-60h]
  int v99; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v100; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v101; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+C8h] [rbp-38h]
  unsigned int *v104; // [rsp+D0h] [rbp-30h]
  struct tagRECT v105; // [rsp+D8h] [rbp-28h]
  struct tagMONITOR *v106[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v107; // [rsp+100h] [rbp+0h]
  char v108; // [rsp+104h] [rbp+4h]
  __int128 v109; // [rsp+108h] [rbp+8h]

  v97 = a3;
  *a4 = 534;
  v6 = *((_DWORD *)this + 50);
  v104 = a4;
  v98 = a2;
  if ( (v6 & 0x200) == 0 )
    return MoveDragRect(this, a2, 0, a3);
  v8 = v98.y - *((_DWORD *)this + 43);
  v100.x = a2.x - *((_DWORD *)this + 42);
  x = v100.x;
  v94 = v8;
  v100.y = v8;
  if ( __PAIR64__(v8, v100.x) == *(_QWORD *)((char *)this + 252) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v25 = 0;
    }
    if ( !v24 && !v25 )
      return 0;
    v28 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(WPP_GLOBAL_Control, a2) + 69152);
    v78 = 45;
    goto LABEL_37;
  }
  v10 = *(_QWORD *)((char *)this + 260);
  *(struct tagPOINT *)((char *)this + 252) = v100;
  v11 = *((_DWORD *)this + 44);
  v101 = 0LL;
  v91 = 0;
  HitTargetAndMonitorFromPoint(v11, v10, (v6 >> 11) & 7, &v101, &v91);
  v12 = v91;
  v96 = v91;
  if ( v91 == 3 )
  {
    v91 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3713LL);
  }
  v13 = *((unsigned int *)this + 62);
  v91 = v13;
  if ( (_DWORD)v13 == 3 )
  {
    v91 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3714LL);
    v13 = *((unsigned int *)this + 62);
    v91 = *((_DWORD *)this + 62);
  }
  v14 = *((_DWORD *)this + 50);
  v15 = 128;
  v16 = 4LL;
  if ( (v14 & 0x80u) != 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 1) != 0 )
  {
    if ( v12 )
      v12 = 4;
    v96 = v12;
  }
  v92 = v12 != (_DWORD)v13;
  v17 = v14 & 0xF7FFFFFF ^ (v14 | ((v12 != (_DWORD)v13) << 27)) & 0x8000000;
  v18 = v101;
  v19 = v101 == *((_QWORD *)this + 30);
  *((_DWORD *)this + 50) = v17;
  v93 = !v19;
  LOBYTE(v16) = (v17 & 0x80) != 0 && (v12 == 4 || v12 != (_DWORD)v13 && (v17 & 0x10000020) == 0x20);
  *((_DWORD *)this + 62) = v12;
  *((_QWORD *)this + 30) = v18;
  if ( v12 != (_DWORD)v13 || !v19 )
  {
    UpdateDragThresholdForMove(this, v12, v13, v16);
    LODWORD(v13) = v91;
  }
  v20 = *((unsigned int *)this + 50);
  if ( (_BYTE)v16 )
  {
    LODWORD(v20) = v20 & 0xFFFFFF7F;
    *((_DWORD *)this + 50) = v20;
    UserSessionState = W32GetUserSessionState(v20, v18);
    Prop = GetProp(*((_QWORD *)this + 2), *(unsigned __int16 *)(UserSessionState + 41374), 1u);
    right = a3->right;
    v32 = _mm_loadl_epi64((const __m128i *)(Prop + 28));
    v33 = *(struct tagRECT *)(Prop + 20);
    v34 = *(struct tagPOINT *)(Prop + 20);
    v103 = v32.m128i_i64[0];
    v98 = v34;
    v35 = _mm_cvtsi128_si32(v32) - v34.x;
    v34.x = a3->left;
    v36 = x - a3->left;
    v99 = v35;
    v105 = v33;
    RestoreAroundCursorOffset = GetRestoreAroundCursorOffset(right - v34.x, v36, v35);
    top = a3->top;
    v39 = v94;
    v95 = RestoreAroundCursorOffset;
    v40 = a3->bottom - top;
    v102 = (unsigned int)(v32.m128i_i32[1] - v98.y);
    v41 = GetRestoreAroundCursorOffset(v40, v94 - top, v32.m128i_i32[1] - v98.y);
    v43 = x - v95;
    v44 = v39 - v41;
    *a3 = v33;
    left = a3->left;
    v94 = v41;
    v46 = v44 - a3->top;
    a3->left = v43;
    a3->right += v43 - left;
    a3->bottom += v46;
    a3->top = v44;
    v47 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v48 = 0;
    }
    v85 = v48;
    v88 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v47) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v49 = W32GetUserSessionState(v47, v42);
      LOBYTE(v50) = v88;
      LOBYTE(v51) = v85;
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 69152),
        4,
        1,
        46,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v98.x,
        v105.top,
        v103,
        v105.bottom,
        v99,
        v102,
        v95,
        v94);
    }
    v52 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v53 = 0;
    }
    v86 = v53;
    v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v53 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v54 = v97->top;
      bottom = v97->bottom;
      v56 = v97->left;
      v57 = v97->right;
      LOBYTE(v52) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v58 = W32GetUserSessionState(v52, v42);
      LODWORD(v84) = bottom - v54;
      LODWORD(v83) = v57 - v56;
      LODWORD(v82) = bottom;
      LODWORD(v81) = v57;
      LODWORD(v80) = v54;
      LODWORD(v79) = v56;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v86,
        v89,
        *(_QWORD *)(v58 + 69152),
        4u,
        1u,
        0x2Fu,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      v12 = v96;
    }
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    {
      v59 = *((_DWORD *)this + 50);
      if ( (v59 & 0x20) != 0 )
        *((_DWORD *)this + 50) = v59 | 0x40000000;
      MOVESIZEDATA::RecomputeMouseOffset(this, v97, &v100);
    }
    else
    {
      v60 = *((unsigned int *)this + 50);
      v61 = *((_DWORD *)this + 50) & 0x20;
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 384LL) & 0x10) != 0 )
      {
        if ( v61 )
          *((_DWORD *)this + 50) = v60 | 0x40000000;
        MOVESIZEDATA::RecomputeMouseOffsetOld(this, v97);
      }
      else if ( v61 )
      {
        v62 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v63 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v63 = 0;
        }
        v87 = v63;
        v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v63 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v62) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v64 = W32GetUserSessionState(v62, v60);
          LOBYTE(v65) = v90;
          LOBYTE(v66) = v87;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v66,
            v65,
            *(_QWORD *)(v64 + 69152),
            4,
            1,
            48,
            (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
        }
        v106[0] = 0LL;
        v106[2] = 0LL;
        v107 = 0;
        *v104 = 532;
        v67 = *((_QWORD *)this + 2);
        v106[1] = (struct tagMONITOR *)v97;
        v108 = 0;
        v109 = 0LL;
        xxxMinMaximizeEx(v67, 9u, 12, v106);
      }
    }
    if ( (*((_DWORD *)this + 50) & 0x40000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v68 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v68 = 0;
      }
      v69 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v68 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v70 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
        LOBYTE(v71) = v69;
        LOBYTE(v72) = v68;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v72,
          v71,
          *(_QWORD *)(v70 + 69152),
          4,
          1,
          51,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      *((_DWORD *)this + 50) &= 0xFFFBFDFF;
    }
  }
  else
  {
    if ( (v20 & 0x8000000) == 0 && (v20 & 0x10000080) == v15 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v24 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v25 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v25 = 0;
      }
      if ( !v24 && !v25 )
        return 0;
      v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v18) + 69152);
      v78 = 49;
LABEL_37:
      LOBYTE(v27) = v25;
      LOBYTE(v26) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v27,
        v28,
        5,
        1,
        v78,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      return 0;
    }
    if ( v12
      || (_DWORD)v13
      || (v20 & 0x10000000) == 0
      || (v21 = 1, (((*((_DWORD *)this + 50) & 0x3800) - 0x2000) & 0xFFFFF7FF) != 0) )
    {
      v21 = 0;
    }
    if ( !MoveDragRect(this, a2, v21, a3) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v73 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v73 = 0;
      }
      v74 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v73 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v76) = v74;
        LOBYTE(v77) = v73;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v77,
          v76,
          *(_QWORD *)(v75 + 69152),
          3,
          1,
          50,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      return 0;
    }
  }
  if ( v92 || v93 || (unsigned __int8)MOVESIZEDATA::SHData_NeedsArrangementCallout(this, v12, (char *)this + 260) )
    xxxUpdateArrangeDataForMove(this, v101, v12, v91);
  return 1;
}
