/*
 * XREFs of AllocGestureInfo @ 0x1C01FB12C
 * Callers:
 *     SendGestureMessage @ 0x1C01FB48C (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C0216690 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall AllocGestureInfo(__int64 a1, int a2, __int64 a3, const void *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a3 + 48);
  if ( v8 + 96 < v8 )
  {
    UserSetLastError(534LL);
    return 0LL;
  }
  if ( v8 == -96 )
    return 0LL;
  LOBYTE(a3) = 21;
  v9 = HMAllocObject(v7, 0LL, a3);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_DWORD *)(v9 + 24) = a2;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)v5;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(v9 + 64) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(v9 + 80) = *(_QWORD *)(v5 + 48);
  if ( a4 )
    memmove((void *)(v9 + 88), a4, *(unsigned int *)(v5 + 48));
  return *(_QWORD *)v10;
}
