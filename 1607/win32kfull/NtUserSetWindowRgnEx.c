/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C021AB60
 * Callers:
 *     <none>
 * Callees:
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     xxxSetWindowRgn @ 0x1C00A592C (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C00A6900 (MirrorRegion.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     SelectNewFrameRgn @ 0x1C00DB974 (SelectNewFrameRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( v8 && (v10 = (*(_WORD *)(v8 + 66) & 0x3FFFu) - 669, (v10 & 0xFFFFFFFD) != 0) )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    CurrentProcess = PsGetCurrentProcess(gptiCurrent);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      if ( (a3 & 5) != 0 )
      {
        if ( !a2
          || (v15 = UserValidateCopyRgn(a2), (v5 = v15) != 0)
          && ((*(_BYTE *)(v11 + 50) & 0x40) == 0
           || v15 <= 2
           || (unsigned int)GreOffsetRgn(
                              v15,
                              (unsigned int)-*(_DWORD *)(v11 + 112),
                              (unsigned int)-*(_DWORD *)(v11 + 116))
           && (unsigned int)MirrorRegion(v11, v5, 0)
           && (unsigned int)GreOffsetRgn(v5, *(unsigned int *)(v11 + 112), *(unsigned int *)(v11 + 116))) )
        {
          if ( (a3 & 1) != 0 )
          {
            SelectNewFrameRgn(v11, v5);
          }
          else
          {
            if ( !a2 )
              v5 = 1LL;
            SelectWindowRgn(v11, v5, 0);
          }
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v7 = xxxSetWindowRgn(v11, a2, a3 & 2);
      }
    }
    else
    {
      v7 = 0;
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
