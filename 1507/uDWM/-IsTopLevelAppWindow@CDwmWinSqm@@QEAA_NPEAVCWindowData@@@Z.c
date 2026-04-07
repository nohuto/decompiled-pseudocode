/*
 * XREFs of ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x18007AD2C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDwmWinSqm::IsTopLevelAppWindow(CDwmWinSqm *this, struct CWindowData *a2)
{
  bool result; // al
  char v4; // cl

  if ( !*((_QWORD *)a2 + 5) || *((HWND *)a2 + 5) == GetDesktopWindow() )
    return 0;
  result = 1;
  if ( (*((_DWORD *)a2 + 26) & 0x40000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( (*((_DWORD *)a2 + 26) & 0x8000080) != 0 )
      return 0;
  }
  if ( !*((_QWORD *)a2 + 46)
    || !*((_QWORD *)a2 + 4)
    || (*((_DWORD *)a2 + 25) & 0x10000000) == 0
    || !v4 && *((_QWORD *)a2 + 63) )
  {
    return 0;
  }
  return result;
}
