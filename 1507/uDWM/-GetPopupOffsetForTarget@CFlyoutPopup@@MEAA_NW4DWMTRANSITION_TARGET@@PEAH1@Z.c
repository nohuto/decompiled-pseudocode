/*
 * XREFs of ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z @ 0x180004C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlyoutPopup::GetPopupOffsetForTarget(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // cl
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  double v12; // xmm0_8
  double v14; // xmm0_8

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v5 = a2 - 12;
  if ( !v5 )
  {
    v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * 40.0;
    goto LABEL_20;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * -40.0;
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 62;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              return v4;
            v12 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * -80.0;
          }
          else
          {
            v12 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * 80.0;
          }
          goto LABEL_9;
        }
        v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * -80.0;
      }
      else
      {
        v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * 80.0;
      }
LABEL_20:
      *a3 = (int)v14;
      return 1;
    }
    v12 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * -40.0;
  }
  else
  {
    v12 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * 40.0;
  }
LABEL_9:
  *a4 = (int)v12;
  return 1;
}
