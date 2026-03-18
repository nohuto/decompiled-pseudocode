/*
 * XREFs of PrepareForLogoff @ 0x1C009D4B0
 * Callers:
 *     <none>
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C009D544 (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // rcx
  __int64 ProfileUserName; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 640LL);
    if ( v0 )
    {
      if ( *(_DWORD *)(v0 + 152) || *(_DWORD *)(v0 + 156) )
      {
        ProfileUserName = CreateProfileUserName(v3);
        RegisterPerUserKeyboardIndicators(ProfileUserName);
        FreeProfileUserName(ProfileUserName, v3);
      }
    }
  }
  return 1LL;
}
