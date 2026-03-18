/*
 * XREFs of ?IdentifyScenarioInteractionTypeForKbdMouse@@YA?AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@W41@KI_K@Z @ 0x1800E4D30
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdentifyScenarioInteractionTypeForKbdMouse(unsigned int a1, int a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d

  v4 = 0;
  if ( a2 == 4 )
  {
    if ( (unsigned int)(a3 - 513) <= 1 )
    {
      return 7;
    }
    else if ( a3 == 522 )
    {
      return 8;
    }
    else if ( a3 == 526 )
    {
      return 9;
    }
  }
  else if ( a2 == 6 )
  {
    if ( a4 <= 0x28 )
    {
      v5 = a4 - 33;
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
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = v10 - 1;
                  if ( v11 )
                  {
                    if ( v11 == 1 )
                      return 11;
                  }
                  else
                  {
                    return 15;
                  }
                }
                else
                {
                  return 10;
                }
              }
              else
              {
                return 14;
              }
            }
            else
            {
              return 16;
            }
          }
          else
          {
            return 17;
          }
        }
        else
        {
          return 13;
        }
      }
      else
      {
        return 12;
      }
    }
  }
  else
  {
    return a1;
  }
  return v4;
}
