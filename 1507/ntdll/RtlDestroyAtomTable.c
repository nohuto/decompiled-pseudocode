/*
 * XREFs of RtlDestroyAtomTable @ 0x1800D1B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x180052564 (RtlpLockAtomTable.c)
 *     RtlDestroyHandleTable @ 0x180079250 (RtlDestroyHandleTable.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  _QWORD **i; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable((__int64)a1, a2, a3, a4) )
      return 3221225485LL;
    v6 = 0;
    for ( i = (_QWORD **)(a1 + 72); v6 < *((_DWORD *)a1 + 16); ++v6 )
    {
      v8 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v9 = v8;
        if ( !v8 )
          break;
        v8 = (_QWORD *)*v8;
        *v9 = 0LL;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset(a1, 0, 0x50uLL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  }
  return 0LL;
}
