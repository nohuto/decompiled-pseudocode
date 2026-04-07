/*
 * XREFs of ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x180005738
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180035990 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

bool __fastcall CDesktopManager::GetMonitorRectAtIndex(unsigned int a1, struct tagRECT *a2)
{
  CDesktopManager *v2; // rsi
  bool result; // al
  __int64 v4; // rbx
  __int64 v6; // rcx
  tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  result = 0;
  v4 = a1;
  *a2 = 0uLL;
  if ( a1 < *((_DWORD *)v2 + 36) )
  {
    memset_0(&mi, 0, sizeof(mi));
    v6 = *((_QWORD *)v2 + 15);
    mi.cbSize = 40;
    GetMonitorInfoW(*(HMONITOR *)(v6 + 8 * v4), &mi);
    result = 1;
    *a2 = mi.rcMonitor;
  }
  return result;
}
