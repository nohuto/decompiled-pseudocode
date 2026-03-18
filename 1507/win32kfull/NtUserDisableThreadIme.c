/*
 * XREFs of NtUserDisableThreadIme @ 0x1C00FBE80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserDisableThreadIme(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 i; // rdi
  LARGE_INTEGER *v7; // rax
  LARGE_INTEGER *v8; // rax

  EnterCrit(1LL);
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
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 296LL); i; i = *(_QWORD *)(i + 592) )
    {
      *(_DWORD *)(i + 448) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v7 = *(LARGE_INTEGER **)(i + 704);
        if ( v7 )
          PostEventMessageEx(i, *(_QWORD *)(i + 392), 8u, 0LL, 0, *v7, 0LL, 0LL);
      }
    }
LABEL_11:
    v3 = *(_QWORD *)(gptiCurrent + 704LL);
    if ( v3 )
      xxxDestroyWindow(v3);
LABEL_13:
    v4 = 1;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v3 = PtiFromThreadId(a1);
  if ( v3 && *(_QWORD *)(v3 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
  {
    *(_DWORD *)(v3 + 448) |= 0x2000000u;
    v8 = *(LARGE_INTEGER **)(v3 + 704);
    if ( v8 )
      PostEventMessageEx(v3, *(_QWORD *)(v3 + 392), 8u, 0LL, 0, *v8, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
