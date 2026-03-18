/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01E3630
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3630 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C013C648 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3630 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rbx
  int i; // edi
  __int64 v10; // rcx
  __int64 v13; // [rsp+30h] [rbp-308h]
  _QWORD v14[82]; // [rsp+80h] [rbp-2B8h] BYREF

  v3 = a3;
  v5 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  while ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 400);
    if ( v6 != v3 && (*(_DWORD *)(a1 + 448) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 704) )
      {
        LockW32Thread(a1, (__int64)&v14[5 * v5 + 2]);
        v14[5 * v5++ + 1] = a1;
        v3 = a3;
        if ( v5 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 720) = *(_QWORD *)(v6 + 40);
        HMAssignmentLock(a1 + 400, v3);
        if ( *(_QWORD *)(a1 + 712) )
          **(_QWORD **)(a1 + 440) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 440) + 144LL) = *(_QWORD *)(v3 + 40);
        *(_WORD *)(*(_QWORD *)(a1 + 440) + 152LL) = *(_WORD *)(v3 + 72);
      }
    }
    a1 = *(_QWORD *)(a1 + 592);
  }
  result = a2;
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v5 )
      return result;
LABEL_14:
    if ( !a1 )
      goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 592) )
  {
    v14[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 592), v14, v3);
  }
LABEL_17:
  v14[0] = a2;
  v8 = v14;
  while ( v8 )
  {
    for ( i = v5 - 1; i >= 0; --i )
    {
      v10 = v8[5 * i + 1];
      v13 = v10;
      if ( (*(_DWORD *)(v10 + 448) & 1) == 0 )
      {
        xxxImmActivateLayout(v10, a3);
        if ( (*(_DWORD *)(v13 + 448) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 440) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v13 + 440) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)&v8[4 * i + 2 + i]);
    }
    v8 = (_QWORD *)*v8;
    v5 = 16;
  }
  return 1LL;
}
