/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x140487158
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PspLockJobChain @ 0x1403E951C (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int i; // ebx
  __int64 v8; // rcx

  --*(_WORD *)(a3 + 486);
  if ( a2 )
  {
    v4 = (unsigned __int64 *)(a2 + 728);
    v5 = KeAbPreAcquire(a2 + 728, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
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
