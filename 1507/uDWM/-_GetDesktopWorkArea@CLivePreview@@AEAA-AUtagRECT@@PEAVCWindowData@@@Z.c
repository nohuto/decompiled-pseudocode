/*
 * XREFs of ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180069C5C
 * Callers:
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180069B00 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x18009B564 (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 */

struct tagRECT *__fastcall CLivePreview::_GetDesktopWorkArea(
        CLivePreview *this,
        struct tagRECT *__return_ptr retstr,
        HWND *a3)
{
  CImmersiveState *v5; // rcx
  unsigned int i; // r8d
  struct DesktopWorkAreaInfo *DesktopWorkAreaAtIndex; // rax
  int v8; // r8d
  __int64 v9; // r9

  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 67) )
    {
      if ( MonitorFromWindow(a3[5], 0) )
      {
        v5 = (CImmersiveState *)*((_QWORD *)this + 67);
        for ( i = 0; i < *((_DWORD *)v5 + 10); i = v8 + 1 )
        {
          DesktopWorkAreaAtIndex = CImmersiveState::GetDesktopWorkAreaAtIndex(v5, i);
          if ( DesktopWorkAreaAtIndex && v9 == *((_QWORD *)DesktopWorkAreaAtIndex + 2) )
            *retstr = *(struct tagRECT *)DesktopWorkAreaAtIndex;
        }
      }
    }
  }
  return retstr;
}
