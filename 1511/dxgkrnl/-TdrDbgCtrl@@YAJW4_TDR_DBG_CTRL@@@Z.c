/*
 * XREFs of ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0144114
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?_TdrIsTestMode@@YA_NXZ @ 0x1C0144B2C (-_TdrIsTestMode@@YA_NXZ.c)
 */

__int64 __fastcall TdrDbgCtrl(int a1)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  __int32 v8; // eax

  if ( !_TdrIsTestMode() )
    return 3221225659LL;
  if ( !a1 )
  {
    _InterlockedExchange(&g_TdrForceTimeout, 1);
    return 0LL;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    _InterlockedExchange(&g_TdrDebugMode, 0);
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = 2;
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = 3;
LABEL_14:
    _InterlockedExchange(&g_TdrDebugMode, v8);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225659LL;
      _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 1);
    }
    else
    {
      _InterlockedExchange(&g_TdrForceDodPresentTimeout, 1);
    }
  }
  return 0LL;
}
