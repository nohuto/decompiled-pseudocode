/*
 * XREFs of NtUserRemoveProp @ 0x1C0065170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
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
  __int64 v13; // rcx

  EnterCrit(1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL);
    if ( *(_QWORD *)(v9 + 16) == v4
      || gbEnforceUIPI && (v9 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 448LL), (v9 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
          v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) + 740LL),
          *(_DWORD *)(CurrentProcessWin32Process + 740) == (_DWORD)v13)
      && *(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 744) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL)
                                                                              + 744LL) )
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
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
