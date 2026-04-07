/*
 * XREFs of ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180072E10
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800731A4 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

struct CWindowData *__fastcall CMagnifierControl::FindWindowByHandle(HWND a1)
{
  __int64 v1; // rdi
  struct CWindowData *result; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         a1);
  result = 0LL;
  if ( v1 )
    return (struct CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
