/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14023D21C
 * Callers:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x140249A28 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetMinMetrics @ 0x1400CE450 (SetMinMetrics.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  struct _UNICODE_STRING *v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct tagWND *v12; // rbx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edi
  __int64 v16; // rcx

  v3 = a1;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2124LL);
  v7 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904) + 2128LL);
  SetMinMetrics(v3, (__int128 *)a2);
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
  LODWORD(v3) = *(_DWORD *)(v10 + 2124);
  v12 = 0LL;
  v13 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19904);
  v14 = *(_DWORD *)(v13 + 2128) - v7;
  v15 = (_DWORD)v3 - v4;
  if ( v15 || v14 )
    xxxMetricsRecalc(4, v15, v14, 0, 0, 0, 0);
  if ( *((_QWORD *)PtiCurrent(v13) + 61) )
    v12 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v16) + 61) + 8LL) + 24LL);
  xxxInternalInvalidate(v12, (HRGN)1, 0x10485u);
  return 1LL;
}
