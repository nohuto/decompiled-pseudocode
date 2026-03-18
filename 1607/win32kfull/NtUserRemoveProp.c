/*
 * XREFs of NtUserRemoveProp @ 0x1C007AF10
 * Callers:
 *     <none>
 * Callees:
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 *Prop; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL);
    if ( *(_QWORD *)(v9 + 16) == v4
      || gbEnforceUIPI && (v9 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 440LL), (v9 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v5),
          v13 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL),
          v14 = *(unsigned int *)(v13 + 732),
          *(_DWORD *)(CurrentProcessWin32Process + 732) == (_DWORD)v14)
      && *(_DWORD *)(PsGetCurrentProcessWin32Process(v14, v13) + 736) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16)
                                                                                               + 376LL)
                                                                                   + 736LL) )
    {
      Prop = (__int64 *)FindProp(v8, a2, 0LL);
      if ( Prop )
      {
        v7 = *Prop;
        --*(_DWORD *)(*(_QWORD *)(v8 + 168) + 4LL);
        v5 = *(_QWORD *)(v8 + 168);
        v6 = 2LL * *(unsigned int *)(v5 + 4);
        *(_OWORD *)Prop = *(_OWORD *)(v5 + 16LL * *(unsigned int *)(v5 + 4) + 8);
        *(_QWORD *)(v5 + 8 * v6 + 8) = 0LL;
        *(_QWORD *)(v5 + 8 * v6 + 16) = 0LL;
      }
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
