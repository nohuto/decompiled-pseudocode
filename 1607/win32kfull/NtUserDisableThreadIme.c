/*
 * XREFs of NtUserDisableThreadIme @ 0x1C0128490
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDisableThreadIme(int a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 i; // rdi
  _QWORD *v5; // rcx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 *v10; // rax

  EnterCrit(0LL, 1LL);
  v2 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v3 = 0;
    goto LABEL_12;
  }
  v3 = 0;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 288LL); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 440) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v7 = *(__int64 **)(i + 696);
        if ( v7 )
          PostEventMessageEx(i, *(_QWORD *)(i + 384), 8u, 0LL, 0, *v7, 0LL, 0LL);
      }
    }
LABEL_9:
    v5 = *(_QWORD **)(gptiCurrent + 696LL);
    if ( v5 )
      xxxDestroyWindow(v5);
LABEL_11:
    v3 = 1;
    goto LABEL_12;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x2000000u;
    goto LABEL_9;
  }
  v8 = PtiFromThreadId(a1);
  v9 = v8;
  if ( v8 )
  {
    v5 = *(_QWORD **)(gptiCurrent + 376LL);
    if ( *(_QWORD **)(v8 + 376) == v5 )
    {
      *(_DWORD *)(v8 + 440) |= 0x2000000u;
      v10 = *(__int64 **)(v8 + 696);
      if ( v10 )
        PostEventMessageEx(v9, *(_QWORD *)(v9 + 384), 8u, 0LL, 0, *v10, 0LL, 0LL);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5, v2);
  return v3;
}
