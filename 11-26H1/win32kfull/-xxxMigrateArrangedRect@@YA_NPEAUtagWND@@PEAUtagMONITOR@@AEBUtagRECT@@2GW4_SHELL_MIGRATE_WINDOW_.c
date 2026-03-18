/*
 * XREFs of ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14022C618
 * Callers:
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14028F9F4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x140295068 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402E813C (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall xxxMigrateArrangedRect(
        struct tagRECT *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        unsigned int a6,
        struct tagRECT *a7,
        _DWORD *a8,
        unsigned int *a9,
        int *a10)
{
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagRECT v16; // xmm1
  _DWORD *v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  char v21; // r13
  LONG v22; // r14d
  LONG v23; // edi
  LONG v24; // esi
  LONG v25; // ebx
  __int64 v26; // rax
  bool v27; // di
  bool v28; // si
  const char *v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char result; // al
  struct tagRECT *v34; // rdi
  struct tagRECT v35; // xmm0
  __int64 v36; // rax
  unsigned __int16 v37; // r9
  __int64 v38; // rdx
  char v39; // r13
  LONG top; // r14d
  LONG bottom; // edi
  LONG left; // esi
  LONG right; // ebx
  __int64 v44; // rax
  LONG v45; // edx
  LONG v46; // r8d
  int v47; // ecx
  struct tagRECT *v48; // [rsp+20h] [rbp-B1h]
  int *v49; // [rsp+40h] [rbp-91h]
  unsigned int *v50; // [rsp+48h] [rbp-89h]
  char v51; // [rsp+70h] [rbp-61h]
  char v52; // [rsp+70h] [rbp-61h]
  int v53; // [rsp+74h] [rbp-5Dh] BYREF
  unsigned int v54; // [rsp+78h] [rbp-59h] BYREF
  _DWORD *v55; // [rsp+80h] [rbp-51h]
  struct tagRECT *v56; // [rsp+88h] [rbp-49h]
  __int64 v57; // [rsp+90h] [rbp-41h]
  __int64 *v58; // [rsp+98h] [rbp-39h]
  struct tagRECT v59; // [rsp+A0h] [rbp-31h] BYREF
  struct tagRECT v60; // [rsp+B0h] [rbp-21h]

  v55 = a8;
  v58 = a3;
  v57 = a2;
  v56 = a1;
  v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      64,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
  }
  v16 = *a7;
  v17 = v55;
  v18 = v58;
  v53 = *v55;
  v54 = *a9;
  v50 = &v54;
  v49 = &v53;
  LOWORD(v48) = a5;
  v60 = 0LL;
  v59 = v16;
  if ( !(unsigned __int8)CallShell::xxxMigrateWindowHandler(v56, a6, v58, a4) )
  {
    v34 = v56;
    v35 = *WindowMargins::ReduceRect((WindowMargins *)&v59, v56, (const struct tagWND *)a7, (const struct tagRECT *)a5);
    v36 = *(_QWORD *)&v34[2].right;
    *a7 = v35;
    v37 = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
    if ( v37 )
      ScaleDPIRect(a7, (__m128i *)a7, a5, v37, *a4, *v18);
    *a7 = *AdvancedWindowPos::NormalizeArrangeRect(
             (AdvancedWindowPos *)&v59,
             a7,
             (const struct tagRECT *)a4,
             (const struct tagRECT *)(*(_QWORD *)(v57 + 40) + 44LL),
             v48);
    v39 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      top = a7->top;
      bottom = a7->bottom;
      left = a7->left;
      right = a7->right;
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
      LODWORD(v50) = top;
      LODWORD(v49) = left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v52,
        *(_QWORD *)(v44 + 69152),
        4u,
        4u,
        0x43u,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v49,
        v50,
        right,
        bottom,
        right - left,
        bottom - top);
    }
    goto LABEL_43;
  }
  *a9 = v54;
  v20 = v53;
  *v17 = v53;
  if ( v20 != 3 )
  {
    v27 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = "maximized";
      if ( v53 != 1 )
        v29 = "restored";
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v31) = v28;
      LOBYTE(v32) = v27;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69152),
        4,
        4,
        66,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        (__int64)v29);
    }
    goto LABEL_29;
  }
  *a7 = v60;
  v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = a7->top;
    v23 = a7->bottom;
    v24 = a7->left;
    v25 = a7->right;
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LODWORD(v50) = v22;
    LODWORD(v49) = v24;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v51,
      *(_QWORD *)(v26 + 69152),
      4u,
      4u,
      0x41u,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v49,
      v50,
      v25,
      v23,
      v25 - v24,
      v23 - v22);
LABEL_29:
    v17 = v55;
  }
  if ( a6 != 2 )
  {
    result = SaveShellRequestedOperationData(v56, a7, (unsigned int)*v17, v54);
    if ( !result )
      return result;
    *a10 |= 0x400u;
  }
LABEL_43:
  if ( v53 == 3 )
  {
    v45 = a7->left;
    v46 = a7->top;
    v47 = *a10 | 6;
    a10[3] = a7->left;
    a10[4] = v46;
    *a10 = v47;
    a10[5] = a7->right - v45;
    a10[6] = a7->bottom - v46;
    a10[1] |= 1u;
  }
  return 1;
}
