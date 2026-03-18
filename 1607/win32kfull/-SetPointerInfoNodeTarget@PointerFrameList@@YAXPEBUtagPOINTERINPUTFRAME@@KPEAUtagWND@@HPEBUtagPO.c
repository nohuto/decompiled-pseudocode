/*
 * XREFs of ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01C1994
 * Callers:
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F0D70 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C021F888 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetPointerInfoNodeTargetInt@@YAXPEAUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01C1A78 (-SetPointerInfoNodeTargetInt@@YAXPEAUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHHH@Z.c)
 *     ?UpdateHistoryWithTarget@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHH@Z @ 0x1C01C1EAC (-UpdateHistoryWithTarget@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagWND@@HPEBU.c)
 */

void __fastcall PointerFrameList::SetPointerInfoNodeTarget(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagPOINT *a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v10; // rbx
  int v11; // edi
  const struct tagPOINT *v12; // r9
  int v13; // r10d
  struct tagWND *v14; // r11

  v10 = *((_QWORD *)this + 11) + 216LL * (unsigned int)a2;
  v11 = (*(_DWORD *)(gptiCurrent + 1096LL) >> 13) & 1;
  SetPointerInfoNodeTargetInt((struct tagPOINTERINFONODE *)v10, a3, (int)a4, a5, (int)a6, a7, v11, a9);
  if ( a8 && *(_DWORD *)(v10 + 124) > 1u )
    UpdateHistoryWithTarget(this, (const struct tagPOINTERINFONODE *)v10, v14, v13, v12, (int)a6, v11, a9);
  if ( (_DWORD)a6 )
  {
    if ( !v11 )
      *(_DWORD *)(*((_QWORD *)this + 12) + 40LL * *(unsigned int *)(v10 + 8) + 20) &= ~1u;
  }
}
