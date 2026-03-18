/*
 * XREFs of KiAcquireSpinLockCheckForFreeze @ 0x140200EF4
 * Callers:
 *     KiProcessNMI @ 0x1401FF5DC (KiProcessNMI.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140201108 (KiTryToAcquireSpinLockInstrumented.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 */

char __fastcall KiAcquireSpinLockCheckForFreeze(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  unsigned __int64 v10; // rax

  while ( 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = KiTryToAcquireSpinLockInstrumented(&KiNMILock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiNMILock, 0LL) )
    {
      result = 0;
      _mm_pause();
    }
    else
    {
      result = 1;
    }
    if ( result )
      break;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( CurrentPrcb->IpiFrozen == 5 )
      {
        KiFreezeTargetExecution(a2, a3);
        if ( KiResumeForReboot )
        {
          if ( a2 )
          {
            if ( *(_WORD *)(a2 + 368) != 16 )
            {
              *(_WORD *)(a2 + 368) = 16;
              *(_WORD *)(a2 + 392) = 24;
              *(_QWORD *)(a2 + 384) = CurrentPrcb->RspBase;
            }
            *(_DWORD *)(a2 + 376) &= ~0x200u;
            v7 = __readmsr(0xC0000101);
            *(_QWORD *)(a2 + 104) = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7;
            *(_QWORD *)(a2 + 360) = xHalHaltSystem;
            if ( KiKvaShadow )
            {
              v8 = 7LL;
              v9 = (_QWORD *)(CurrentPrcb[-1].PrcbPad140[468] + 5184);
              do
              {
                v10 = __readcr3();
                v9[1] = v10;
                *v9 = __readmsr(0xC0000101);
                v9 += 64;
                --v8;
              }
              while ( v8 );
            }
          }
        }
      }
    }
    while ( KiNMILock );
  }
  return result;
}
