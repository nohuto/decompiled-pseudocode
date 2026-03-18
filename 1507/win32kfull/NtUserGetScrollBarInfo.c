/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C00874E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxGetScrollBarInfo @ 0x1C00876E8 (xxxGetScrollBarInfo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _BYTE *v9; // rdx
  unsigned int ScrollBarInfo; // ebx
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // r15
  _QWORD v19[4]; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v20[4]; // [rsp+68h] [rbp-60h] BYREF

  memset(v20, 0, 0x3CuLL);
  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    v19[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v9 = (_BYTE *)W32UserProbeAddress;
    *v9 = *v9;
    v9[59] = v9[59];
    LODWORD(v20[0]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v8, a2, v20);
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    v14 = *(_QWORD *)(v11 + 440);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
      if ( !CurrentProcessWin32Process )
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( !v15 )
        v15 = PsGetCurrentProcessWin32Process(v16);
      v13 = *(unsigned int *)(CurrentProcessWin32Process + 776);
      if ( (((unsigned int)v13 ^ *(_DWORD *)(v15 + 776)) & 0x4000) != 0
        || (v14 = (unsigned int)v13 ^ *(_DWORD *)(v15 + 776),
            (((unsigned __int16)v13 ^ *(_WORD *)(v15 + 776)) & 0x2000) != 0) )
      {
        TransformRectBetweenCoordinateSpaces((char *)v20 + 4, (char *)v20 + 4, 0LL, v8);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v20[0];
      *(_OWORD *)(a3 + 16) = v20[1];
      *(_OWORD *)(a3 + 32) = v20[2];
      *(_QWORD *)(a3 + 48) = *(_QWORD *)&v20[3];
      *(_DWORD *)(a3 + 56) = DWORD2(v20[3]);
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return ScrollBarInfo;
}
