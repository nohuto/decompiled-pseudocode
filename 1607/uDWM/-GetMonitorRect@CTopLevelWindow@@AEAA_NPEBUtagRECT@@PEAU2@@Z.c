/*
 * XREFs of ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x1800066E4
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

char __fastcall CTopLevelWindow::GetMonitorRect(CTopLevelWindow *this, const struct tagRECT *a2, struct tagRECT *a3)
{
  char v4; // bl
  HMONITOR v5; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = MonitorFromRect(a2, 0);
  if ( v5 && (mi.cbSize = 40, GetMonitorInfoW(v5, &mi)) )
  {
    v4 = 1;
    *a3 = mi.rcWork;
  }
  else
  {
    *(_QWORD *)&a3->left = 0LL;
    *(_QWORD *)&a3->right = 0LL;
  }
  return v4;
}
