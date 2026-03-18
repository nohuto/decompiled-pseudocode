/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C0249934
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01EC0CC (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v3 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]));
    if ( (WORD1(a1) == *((_WORD *)v3 + 9)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*((_BYTE *)v3 + 17) & 1) == 0
      && *((_BYTE *)v3 + 16) == 11 )
    {
      v2 = *v3;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v2;
  return v2;
}
