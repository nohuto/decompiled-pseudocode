/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C0220C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetWindowRgn @ 0x1C007606C (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C0076E60 (MirrorRegion.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     SelectNewFrameRgn @ 0x1C010A6D0 (SelectNewFrameRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( v8 && (v10 = (*(_WORD *)(v8 + 66) & 0x3FFFu) - 669, (v10 & 0xFFFFFFFD) != 0) )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    CurrentProcess = PsGetCurrentProcess(gptiCurrent, gptiCurrent, v11, v12);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      if ( (a3 & 5) != 0 )
      {
        if ( !a2
          || (v17 = UserValidateCopyRgn(a2), (v5 = v17) != 0)
          && ((*(_BYTE *)(v13 + 50) & 0x40) == 0
           || v17 <= 2
           || (unsigned int)GreOffsetRgn(
                              v17,
                              (unsigned int)-*(_DWORD *)(v13 + 112),
                              (unsigned int)-*(_DWORD *)(v13 + 116))
           && (unsigned int)MirrorRegion(v13, v5, 0)
           && (unsigned int)GreOffsetRgn(v5, *(unsigned int *)(v13 + 112), *(unsigned int *)(v13 + 116))) )
        {
          if ( (a3 & 1) != 0 )
          {
            SelectNewFrameRgn(v13, v5);
          }
          else
          {
            if ( !a2 )
              v5 = 1LL;
            SelectWindowRgn(v13, v5, 0);
          }
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v7 = xxxSetWindowRgn(v13, a2, a3 & 2);
      }
    }
    else
    {
      v7 = 0;
      UserSetLastError(5);
    }
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
