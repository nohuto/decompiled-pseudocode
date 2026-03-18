/*
 * XREFs of PrepareForLogoff @ 0x1C0131720
 * Callers:
 *     <none>
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C01317B4 (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  __int64 ProfileUserName; // rbx
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 728LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 640LL);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 152) || *(_DWORD *)(v1 + 156) )
      {
        ProfileUserName = CreateProfileUserName(v4, 0LL, v0);
        RegisterPerUserKeyboardIndicators(ProfileUserName);
        FreeProfileUserName(ProfileUserName, v4);
      }
    }
  }
  return 1LL;
}
