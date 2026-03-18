/*
 * XREFs of NtUserDelegateInput @ 0x1C0100F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 */

__int64 __fastcall NtUserDelegateInput(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  int v18; // ecx

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a4);
  v12 = 0;
  v13 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v14 = PtiFromThreadId(a1);
      if ( !v14 )
        goto LABEL_25;
    }
    else
    {
      v14 = gptiCurrent;
    }
    if ( *(char *)(v13 + 43) >= 0 && *(char *)(v13 + 44) >= 0 )
    {
      v15 = *(_QWORD *)(v13 + 16);
      if ( *(_QWORD *)(v15 + 376) == PsGetCurrentProcessWin32Process(v11) )
      {
        v16 = *(_DWORD *)(v13 + 320);
        if ( v16 )
        {
          if ( !a3
            && *(_QWORD *)(v13 + 312) == v14
            && *(_QWORD *)(v14 + 1088) == a2
            && !*(_QWORD *)(v14 + 1096)
            && v16 == a5 )
          {
            v18 = 1242;
            goto LABEL_26;
          }
        }
        else if ( *(_QWORD *)(v15 + 376) == *(_QWORD *)(v14 + 376)
               && v15 != v14
               && *(_DWORD *)(*(_QWORD *)(v14 + 384) + 336LL) == 1
               && *(_QWORD *)(v15 + 408) == *(_QWORD *)(v14 + 408)
               && !*(_QWORD *)(v15 + 1088) )
        {
          *(_QWORD *)(v13 + 312) = v14;
          v12 = 1;
          *(_DWORD *)(v13 + 320) = a5;
          *(_DWORD *)(v14 + 1072) |= 0x2000u;
          *(_DWORD *)(v14 + 440) |= 0xC0u;
          ++*(_DWORD *)(v14 + 1104);
          *(_QWORD *)(v14 + 1088) = a2;
          *(_QWORD *)(v14 + 1096) = a3;
          ++*(_DWORD *)(v15 + 1104);
          goto LABEL_16;
        }
      }
      v18 = 5;
LABEL_26:
      UserSetLastError(v18);
      goto LABEL_16;
    }
LABEL_25:
    v18 = 87;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
