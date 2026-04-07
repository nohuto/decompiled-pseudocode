/*
 * XREFs of ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055F8
 * Callers:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055B0 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::FindStationaryAnimation(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v7; // r11
  __int64 v8; // rax

  v3 = *(_DWORD *)(a1 + 144);
  v4 = -1;
  v5 = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 24 * v5) == a2 )
      {
        v8 = *(_QWORD *)(v7 + 24 * v5 + 16);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 400) == a3 )
            break;
        }
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        return v4;
    }
    return (unsigned int)v5;
  }
  return v4;
}
