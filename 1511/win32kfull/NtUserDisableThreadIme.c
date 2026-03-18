/*
 * XREFs of NtUserDisableThreadIme @ 0x1C01083A0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDisableThreadIme(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 i; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rax

  EnterCrit(0LL, 1LL);
  v2 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    v4 = 0;
    goto LABEL_3;
  }
  v4 = 0;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 440) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v7 = *(__int64 **)(i + 696);
        if ( v7 )
          PostEventMessageEx(i, *(_QWORD *)(i + 384), 8u, 0LL, 0, *v7, 0LL, 0LL);
      }
    }
LABEL_11:
    v3 = *(_QWORD *)(gptiCurrent + 696LL);
    if ( v3 )
      xxxDestroyWindow((_QWORD *)v3);
LABEL_13:
    v4 = 1;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v3 = PtiFromThreadId(a1);
  if ( v3 && *(_QWORD *)(v3 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
  {
    *(_DWORD *)(v3 + 440) |= 0x2000000u;
    v8 = *(__int64 **)(v3 + 696);
    if ( v8 )
      PostEventMessageEx(v3, *(_QWORD *)(v3 + 384), 8u, 0LL, 0, *v8, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
