/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x1400EE98C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400EE464 (ExpTimerPause.c)
 *     ExpTimerResume @ 0x1400EEB44 (ExpTimerResume.c)
 *     PspComputeExecutionState @ 0x1403E90FC (PspComputeExecutionState.c)
 */

__int64 __fastcall PspSetJobFreezeCountCallback(__int64 a1, _DWORD *a2)
{
  int v4; // ecx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  _QWORD *i; // rbx
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  unsigned __int8 v12; // r13
  KSPIN_LOCK *v13; // r12
  _QWORD *v14; // r15
  int v15; // eax

  if ( (**(_DWORD **)a2 & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 864);
    if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
    {
      if ( !v4 && (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v6 = MEMORY[0xFFFFF78000000008];
        v7 = MEMORY[0xFFFFF78000000014];
        KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 1208));
        for ( i = *(_QWORD **)(a1 + 1216); i != (_QWORD *)(a1 + 1216); i = (_QWORD *)*i )
          ExpTimerPause((__int64)(i - 35), v7, v6);
        ++*(_DWORD *)(a1 + 864);
        v9 = CurrentIrql;
        v10 = (KSPIN_LOCK *)(a1 + 1208);
LABEL_9:
        KeReleaseSpinLock(v10, v9);
        goto LABEL_10;
      }
      v15 = v4 + 1;
    }
    else
    {
      if ( v4 == 1 && (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
      {
        v12 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = (KSPIN_LOCK *)(a1 + 1208);
        KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 1208));
        v14 = *(_QWORD **)(a1 + 1216);
        if ( v14 != (_QWORD *)(a1 + 1216) )
        {
          do
          {
            KxAcquireSpinLock(v14 - 27);
            ExpTimerResume((PKTIMER)(v14 - 35));
            KxReleaseSpinLock(v14 - 27);
            v14 = (_QWORD *)*v14;
          }
          while ( v14 != (_QWORD *)(a1 + 1216) );
          v13 = (KSPIN_LOCK *)(a1 + 1208);
        }
        --*(_DWORD *)(a1 + 864);
        v9 = v12;
        v10 = v13;
        goto LABEL_9;
      }
      v15 = v4 - 1;
    }
    *(_DWORD *)(a1 + 864) = v15;
  }
LABEL_10:
  if ( (**(_DWORD **)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)a2 + 5LL) )
      ++*(_DWORD *)(a1 + 872);
    else
      --*(_DWORD *)(a1 + 872);
  }
  a2[2] = PspComputeExecutionState(a1);
  return 0LL;
}
