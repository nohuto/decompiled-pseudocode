/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AFB4 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B32C (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 13 )
  {
    if ( v1 == 13 )
    {
      WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
      return;
    }
    if ( v1 <= 6 )
    {
      if ( v1 == 6 )
      {
        WriteDxgDiagnosticsEvent_CODE_POINT(a1);
        return;
      }
      v5 = v1 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
                WriteDxgDiagnosticsEvent_DRV_CDS(a1);
            }
            else
            {
              WriteDxgDiagnosticsEvent_USER_CDS(a1);
            }
          }
          else
          {
            WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(a1);
          }
        }
        else
        {
          WriteDxgDiagnosticsEvent_HPD(a1);
        }
        return;
      }
LABEL_28:
      WriteDxgDiagnosticsEvent_SDC(a1);
      return;
    }
    v13 = v1 - 7;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 == 1 )
              WriteDxgDiagnosticsEvent_BML_PACKET_EX(a1);
          }
          else
          {
            WriteDxgDiagnosticsEvent_BML_PACKET(a1);
          }
        }
        else
        {
          WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
        }
      }
      else
      {
        WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
      }
      return;
    }
LABEL_26:
    WriteDxgDiagnosticsEvent_QDC(a1);
    return;
  }
  if ( v1 <= 19 )
  {
    if ( v1 == 19 )
    {
      WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
    }
    else
    {
      v9 = v1 - 14;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
            }
            else
            {
              WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS(a1);
            }
          }
          else
          {
            WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
          }
        }
        else
        {
          WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
        }
      }
      else
      {
        WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
      }
    }
  }
  else
  {
    v2 = v1 - 21;
    if ( !v2 )
      goto LABEL_28;
    v3 = v2 - 1;
    if ( !v3 )
      goto LABEL_26;
    v4 = v3 - 1;
    if ( v4 )
    {
      v17 = v4 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX(a1);
      }
      else
      {
        WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
      }
    }
    else
    {
      WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(a1);
    }
  }
}
