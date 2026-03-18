/*
 * XREFs of ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402C71FC
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxMoveSizeSetWindowPos(struct MOVESIZEDATA *a1, const struct tagRECT *a2)
{
  LONG left; // r8d
  LONG top; // r9d
  struct tagMONITOR *v6; // rdx
  int v7; // eax
  int v8; // eax
  const struct tagWND *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+24h] [rbp-DCh]
  LONG v14; // [rsp+2Ch] [rbp-D4h]
  LONG v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+34h] [rbp-CCh]
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+48h] [rbp-B8h]
  char v19[40]; // [rsp+D8h] [rbp-28h] BYREF

  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v12, 1);
  left = a2->left;
  top = a2->top;
  v6 = (struct tagMONITOR *)*((_QWORD *)a1 + 27);
  v7 = a2->right - a2->left;
  v12 |= 6u;
  v16 = v7;
  v8 = a2->bottom - top;
  v14 = left;
  v15 = top;
  v9 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v17 = v8;
  AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)&v12, v6, 0, v9);
  v10 = *((_DWORD *)a1 + 50);
  if ( (v10 & 0x40000000) != 0 )
  {
    v12 |= 0x20u;
    v18 = 0;
    *((_DWORD *)a1 + 50) = v10 & 0xBFFFFFFF;
  }
  v11 = *((_QWORD *)a1 + 2);
  v13 |= 0x20000u;
  AdvancedWindowPos::xxxApplyWindowAction(v11, &v12, 8LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v19);
}
