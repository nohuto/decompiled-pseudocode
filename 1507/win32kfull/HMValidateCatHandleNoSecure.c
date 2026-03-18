/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C02498EC
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01EBBAC (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v4 = a1 >> 16;
    v5 = gSharedInfo[1] + (unsigned int)(v3 * LODWORD(gSharedInfo[2]));
    if ( ((_WORD)v4 == *(_WORD *)(v5 + 18) || (_WORD)v4 == 0xFFFF || !(_WORD)v4 && PsGetCurrentProcessWow64Process(v3))
      && *(_BYTE *)(v5 + 16) == 1 )
    {
      return *(_QWORD *)v5;
    }
  }
  return v2;
}
