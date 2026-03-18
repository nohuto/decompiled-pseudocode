/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x140201244 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     MenuRecalc @ 0x14023D0D0 (MenuRecalc.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  __int64 SessionDpiServerInfo; // r12
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  int v18; // ebp
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // edi
  __int64 v37; // rcx
  int v39; // [rsp+90h] [rbp+18h]
  int v40; // [rsp+98h] [rbp+20h]

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1);
  v6 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v39 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 2124LL);
  v40 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 2128LL);
  v13 = 0LL;
  v15 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904);
  v16 = *(_DWORD *)(v15 + 2400);
  if ( a3 )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
    v19 = *((_DWORD *)a3 + 5) - *(_DWORD *)(v20 + 2336);
    v18 = *((_DWORD *)a3 + 55) - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v21) + 19904) + 2388LL);
  }
  else
  {
    if ( a2 == v6 )
      return 0LL;
    v18 = 0;
    v19 = 0;
  }
  xxxSetWindowNCMetrics(a1, a3, a2);
  MenuRecalc();
  v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904);
  v26 = *(_DWORD *)(v25 + 2400) + *(_DWORD *)(SessionDpiServerInfo + 4) - v6 - v16;
  if ( v16 > 0 )
    goto LABEL_25;
  v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904);
  if ( *(int *)(v25 + 2400) <= 0 )
  {
    v27 = 0;
    goto LABEL_14;
  }
  if ( v16 )
  {
LABEL_25:
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904) + 2400LL) )
      v27 = v26;
    else
      v27 = -(v6 + v16);
    goto LABEL_14;
  }
  v27 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904) + 2400LL)
      + *(_DWORD *)(SessionDpiServerInfo + 4);
LABEL_14:
  if ( v26 || (v28 = 2, v27) )
    v28 = 3;
  xxxMetricsRecalc(v28, 0, 0, v19, v18, v26, v27);
  v31 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 19904);
  v32 = *(_DWORD *)(v31 + 2124);
  v34 = *(_QWORD *)(W32GetUserSessionState(v31, v33) + 19904);
  v35 = *(_DWORD *)(v34 + 2128) - v40;
  v36 = v32 - v39;
  if ( v36 || v35 )
    xxxMetricsRecalc(4, v36, v35, 0, 0, 0, 0);
  if ( *((_QWORD *)PtiCurrent(v34) + 61) )
    v13 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v37) + 61) + 8LL) + 24LL);
  xxxInternalInvalidate(v13, (HRGN)1, 0x10485u);
  return 1LL;
}
