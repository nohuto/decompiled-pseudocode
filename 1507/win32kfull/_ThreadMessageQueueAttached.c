/*
 * XREFs of _ThreadMessageQueueAttached @ 0x1C00DF340
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 */

__int64 __fastcall ThreadMessageQueueAttached(int a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( gptiCurrent )
  {
    *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x200u;
    if ( !a1 )
    {
      LOBYTE(v1) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) > 1u;
      return v1;
    }
    v3 = PtiFromThreadId(a1);
    if ( v3 )
    {
      LOBYTE(v1) = *(_QWORD *)(gptiCurrent + 392LL) == *(_QWORD *)(v3 + 392);
      return v1;
    }
    UserSetLastError(87);
  }
  return 0LL;
}
