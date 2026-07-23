/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x140669158
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(
        ULONG_PTR *BugCheckParameter2,
        __int64 a2,
        void (__fastcall **a3)(volatile signed __int64 *BugCheckParameter2, unsigned __int64 a2))
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = 0;
  v5 = 0LL;
  ++dword_1403286EC;
  if ( BugCheckParameter2 )
  {
    *((_DWORD *)BugCheckParameter2 + 18) = 1;
    _InterlockedAdd((volatile signed __int32 *)BugCheckParameter2 + 28, 1u);
    *((_DWORD *)BugCheckParameter2 + 15) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2 + 15) <= 1 )
      __fastfail(0xEu);
    if ( !BugCheckParameter2[16] )
      goto LABEL_6;
  }
  else
  {
    BugCheckParameter2 = &PfGlobals;
  }
  v6 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  v5 = v6;
  if ( v6 )
  {
    KeAbPreWait(v6, v7);
    goto LABEL_9;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_9:
  a3[1] = (void (__fastcall *)(volatile signed __int64 *, unsigned __int64))v5;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
