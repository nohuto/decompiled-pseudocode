/*
 * XREFs of ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180017ED4
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180017D50 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18007F674 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002C444 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

char __fastcall CDesktopManager::AdjustDesktopWindowSize(HWND a1, struct tagRECT *a2)
{
  char v4; // bl
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_GENERIC_TABLE *v6; // rcx
  _QWORD *v7; // rax
  HWND v8; // rax
  HMONITOR v10; // rax
  _OWORD Buffer[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  char v13; // [rsp+58h] [rbp-30h]

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                       a1);
  if ( !WindowDataByHwnd )
    goto LABEL_5;
  v12 = -1LL;
  memset((char *)Buffer + 8, 0, 24);
  v6 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL);
  *(_QWORD *)&Buffer[0] = *((_QWORD *)WindowDataByHwnd + 15);
  v13 = 0;
  Buffer[2] = 0LL;
  v7 = RtlLookupElementGenericTable(v6, Buffer);
  v8 = v7 ? (HWND)v7[6] : 0LL;
  if ( a1 == v8 )
  {
    v10 = MonitorFromWindow(0LL, 1u);
    LODWORD(Buffer[0]) = 40;
    if ( GetMonitorInfoW(v10, (LPMONITORINFO)Buffer) )
    {
      v4 = 1;
      *a2 = *(struct tagRECT *)((char *)Buffer + 4);
    }
  }
  else
  {
LABEL_5:
    *(_QWORD *)&a2->left = 0LL;
  }
  return v4;
}
