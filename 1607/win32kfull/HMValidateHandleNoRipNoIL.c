/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C0245C5C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rdi

  v5 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v7 = (unsigned __int16)a1;
  v8 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v9 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]));
    if ( (WORD1(a1) == *((_WORD *)v9 + 9)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*((_BYTE *)v9 + 17) & 1) == 0
      && *((_BYTE *)v9 + 16) == 11 )
    {
      v5 = *v9;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v7, v6) + 440) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v5;
  return v5;
}
