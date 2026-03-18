/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C0245BD4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi

  v5 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v7 = a1 >> 16;
    v8 = gSharedInfo[1] + (unsigned int)(v6 * LODWORD(gSharedInfo[2]));
    if ( ((_WORD)v7 == *(_WORD *)(v8 + 18) || (_WORD)v7 == 0xFFFF || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v6))
      && *(_BYTE *)(v8 + 16) == 1 )
    {
      return *(_QWORD *)v8;
    }
  }
  return v5;
}
