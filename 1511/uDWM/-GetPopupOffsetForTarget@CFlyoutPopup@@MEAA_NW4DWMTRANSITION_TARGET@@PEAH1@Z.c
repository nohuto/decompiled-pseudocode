/*
 * XREFs of ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z @ 0x180002C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlyoutPopup::GetPopupOffsetForTarget(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // cl
  double v5; // xmm0_8
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  double v16; // xmm0_8

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( a2 > 79 )
  {
    v7 = a2 - 80;
    if ( v7 )
    {
      v8 = v7 - 8;
      if ( !v8 )
        goto LABEL_23;
      v9 = v8 - 1;
      if ( !v9 )
      {
LABEL_19:
        v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * -80.0;
LABEL_24:
        *a3 = (int)v16;
        return 1;
      }
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_3;
      if ( v10 != 1 )
        return v4;
    }
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * -80.0;
    goto LABEL_4;
  }
  if ( a2 != 79 )
  {
    v11 = a2 - 12;
    if ( !v11 )
    {
      v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * 40.0;
      goto LABEL_24;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * -40.0;
      goto LABEL_24;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * 40.0;
      goto LABEL_4;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * -40.0;
      goto LABEL_4;
    }
    v15 = v14 - 62;
    if ( v15 )
    {
      if ( v15 != 1 )
        return v4;
      goto LABEL_19;
    }
LABEL_23:
    v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * 80.0;
    goto LABEL_24;
  }
LABEL_3:
  v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) * 80.0;
LABEL_4:
  *a4 = (int)v5;
  return 1;
}
