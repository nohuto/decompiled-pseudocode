/*
 * XREFs of ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z @ 0x180003EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlyoutPopup::GetPopupOffsetForTarget(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // cl
  int v5; // edx
  double v6; // xmm0_8
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
  if ( a2 <= 79 )
  {
    if ( a2 == 79 )
      goto LABEL_8;
    v11 = a2 - 12;
    if ( !v11 )
    {
      v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163) * 40.0;
      goto LABEL_25;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163) * -40.0;
      goto LABEL_25;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v6 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 164) * 40.0;
      goto LABEL_4;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v6 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 164) * -40.0;
      goto LABEL_4;
    }
    v15 = v14 - 62;
    if ( v15 )
    {
      if ( v15 != 1 )
        return v4;
LABEL_20:
      v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163) * -80.0;
LABEL_25:
      *a3 = (int)v16;
      return 1;
    }
LABEL_24:
    v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163) * 80.0;
    goto LABEL_25;
  }
  v5 = a2 - 80;
  if ( v5 )
  {
    v8 = v5 - 8;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return v4;
          goto LABEL_3;
        }
LABEL_8:
        v6 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 164) * 80.0;
        goto LABEL_4;
      }
      goto LABEL_20;
    }
    goto LABEL_24;
  }
LABEL_3:
  v6 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 164) * -80.0;
LABEL_4:
  *a4 = (int)v6;
  return 1;
}
