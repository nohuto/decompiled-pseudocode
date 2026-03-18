/*
 * XREFs of ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401FFB98
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x140290668 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 */

void __fastcall xxxHandleVolumeUpDownKey(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( (_BYTE)a1 != 0xAE )
  {
    if ( (_BYTE)a1 != 0xAF )
      return;
    if ( !(_BYTE)a2 )
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66784) )
      {
        *(_DWORD *)(W32GetUserSessionState(v3, v2) + 66788) = 1;
        return;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  if ( (_BYTE)a2 )
  {
LABEL_7:
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66784) = 0;
    return;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66788) )
  {
    xxxHandleVolumeUpDownCombo();
LABEL_10:
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66788) = 0;
    return;
  }
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 66784) = 1;
}
