/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01DA380
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C01354E4 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD *v11; // rbx
  int i; // edi
  __int64 v13; // rcx
  __int64 v16; // [rsp+40h] [rbp-2E8h]
  _QWORD v17[82]; // [rsp+70h] [rbp-2B8h] BYREF

  v4 = a3;
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 392);
    if ( v7 != v4 && (*(_DWORD *)(a1 + 440) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 696) )
      {
        LockW32Thread(a1, (__int64)&v17[5 * v6 + 2]);
        v17[5 * v6++ + 1] = a1;
        v4 = a3;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 712) = *(_QWORD *)(v7 + 40);
        HMAssignmentLock(a1 + 392, v4);
        if ( *(_QWORD *)(a1 + 704) )
          **(_QWORD **)(a1 + 432) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 432) + 144LL) = *(_QWORD *)(v4 + 40);
        *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = *(_WORD *)(v4 + 72);
      }
    }
    a1 = *(_QWORD *)(a1 + 584);
  }
  result = a2;
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v6 )
      return result;
LABEL_14:
    if ( !a1 )
      goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 584) )
  {
    v17[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 584), v17, v4);
  }
LABEL_17:
  v17[0] = a2;
  v11 = v17;
  while ( v11 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v13 = v11[5 * i + 1];
      v16 = v13;
      if ( (*(_DWORD *)(v13 + 440) & 1) == 0 )
      {
        xxxImmActivateLayout(v13, a3, v8, v9);
        v7 = v16;
        if ( (*(_DWORD *)(v16 + 440) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 432) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v16 + 432) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)&v11[4 * i + 2 + i], v7, v8, v9);
    }
    v11 = (_QWORD *)*v11;
    v6 = 16;
  }
  return 1LL;
}
