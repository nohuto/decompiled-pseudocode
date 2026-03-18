/*
 * XREFs of NtUserSetProp @ 0x1C0065070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 *     CreateProp @ 0x1C0065E08 (CreateProp.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 Prop; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  int v16; // ecx

  EnterCrit(1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0;
  v10 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL);
    if ( *(_QWORD *)(v11 + 16) != v6 )
    {
      if ( !gbEnforceUIPI || (v11 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 448LL), (v11 & 0xC) != 0) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
        v15 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL) + 740LL);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 740) != (_DWORD)v15
          || *(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 744) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16)
                                                                                              + 384LL)
                                                                                  + 744LL) )
        {
          v16 = 5;
LABEL_15:
          UserSetLastError(v16);
          goto LABEL_10;
        }
      }
    }
    if ( !(_WORD)a2 )
    {
      v16 = 87;
      goto LABEL_15;
    }
    Prop = FindProp(v10, (unsigned __int16)a2, 0LL);
    if ( Prop )
      goto LABEL_9;
    Prop = CreateProp();
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = a2;
      *(_WORD *)(Prop + 10) = HIWORD(a2) != 0 ? 2 : 0;
LABEL_9:
      *(_QWORD *)Prop = a3;
      v9 = 1;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
