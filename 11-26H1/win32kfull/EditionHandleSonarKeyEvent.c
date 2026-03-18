/*
 * XREFs of EditionHandleSonarKeyEvent @ 0x1401F3D00
 * Callers:
 *     <none>
 * Callees:
 *     StopSonar @ 0x1402A4434 (StopSonar.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 */

__int64 __fastcall EditionHandleSonarKeyEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  result = *(unsigned __int16 *)(a1 + 2);
  v3 = a2;
  if ( (result & 0x4000) == 0 )
  {
    if ( (result & 0x8000u) != 0LL )
    {
      if ( (_BYTE)a2 == *(_BYTE *)(W32GetUserSessionState(a1, a2) + 14326)
        && v3 == *(_BYTE *)(W32GetUserSessionState(v9, v8) + 14327)
        && _bittest((const signed __int32 *)(W32GetUserSessionState(v9, v8) + 66796), 0xEu) )
      {
        zzzStartSonar();
      }
      result = W32GetUserSessionState(v9, v8);
      if ( _bittest((const signed __int32 *)(result + 66796), 0xEu) )
      {
        result = W32GetUserSessionState(v11, v10);
        if ( *(_BYTE *)(result + 14327) )
        {
          result = W32GetUserSessionState(v13, v12);
          *(_BYTE *)(result + 14327) = 0;
        }
      }
    }
    else
    {
      if ( _bittest((const signed __int32 *)(W32GetUserSessionState(a1, a2) + 66796), 0xEu) )
      {
        v5 = *(unsigned int *)(W32GetUserSessionState(v5, v4) + 43056);
        if ( (v5 & 0x80u) != 0LL )
          StopSonar();
      }
      result = W32GetUserSessionState(v5, v4);
      if ( *(_BYTE *)(result + 14327) != v3 )
      {
        result = W32GetUserSessionState(v7, v6);
        *(_BYTE *)(result + 14327) = v3;
      }
    }
  }
  return result;
}
