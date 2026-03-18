/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x1404F2A94
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     PspLockJobChain @ 0x140469EEC (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rsi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  unsigned int i; // ebx
  __int64 v8; // rcx

  --*(_WORD *)(a3 + 486);
  if ( a2 )
  {
    v4 = (unsigned __int64 *)(a2 + 728);
    v5 = (_BYTE *)KeAbPreAcquire(a2 + 728, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      v6[26] |= 1u;
  }
  for ( i = 0; i < *a1; ++i )
  {
    v8 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v8, 0LL);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 56), 1u);
  }
}
