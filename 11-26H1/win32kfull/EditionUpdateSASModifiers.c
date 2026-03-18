/*
 * XREFs of EditionUpdateSASModifiers @ 0x1400F9880
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1400F9918 (-VKTOMODIFIERS@@YAIE@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 */

void __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3, int a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( !a1
    || (unsigned int)IsRemoteConnection()
    && (v12 = PtiCurrent(v11), v12 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v14, v13) + 18696)) )
  {
    if ( (a3 & 0x200) == 0 )
    {
      v7 = VKTOMODIFIERS(a2);
      UserSessionState = W32GetUserSessionState(v9, v8);
      if ( a4 )
        *(_DWORD *)(UserSessionState + 14004) &= ~v7;
      else
        *(_DWORD *)(UserSessionState + 14004) |= v7;
    }
  }
}
