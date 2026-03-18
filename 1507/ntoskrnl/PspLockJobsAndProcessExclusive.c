/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x14041A978
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PspLockJobChain @ 0x14041ACD8 (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int i; // ebx
  __int64 v10; // rcx

  --*(_WORD *)(a3 + 486);
  if ( a2 )
  {
    v5 = (unsigned __int64 *)(a2 + 728);
    v6 = KeAbPreAcquire(a2 + 728, 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
  }
  for ( i = 0; i < *a1; ++i )
  {
    v10 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v10, 0LL);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 56), 1u);
  }
}
