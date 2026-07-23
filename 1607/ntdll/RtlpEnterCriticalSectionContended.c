/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180019B88
 * Callers:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlSetCriticalSectionSpinCount @ 0x180019D30 (RtlSetCriticalSectionSpinCount.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180087464 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(
        PRTL_CRITICAL_SECTION CriticalSection,
        __int64 a2,
        unsigned __int64 j)
{
  unsigned __int64 v4; // rbx
  bool v5; // si
  char v6; // bp
  char i; // al
  signed __int32 LockCount; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ecx
  signed __int32 v11; // ett
  __int64 result; // rax

  if ( (CriticalSection->SpinCount & 0x4000000) != 0
    && CriticalSection->DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL
    && !CriticalSection->DebugInfo->ProcessLocksList.Flink )
  {
    RtlpInitializeStaticCriticalSection();
  }
  v4 = 0LL;
  v5 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = (CriticalSection->SpinCount & 0x2000000) != 0;
    v4 = CriticalSection->SpinCount & 0xFFFFFF;
  }
  v6 = 0;
  while ( 2 )
  {
    for ( i = 1; ; i = 0 )
    {
      if ( i )
      {
        for ( j = v4; j; --j )
        {
          LockCount = CriticalSection->LockCount;
          while ( (LockCount & 1) != 0 )
          {
            v11 = LockCount;
            LockCount = _InterlockedCompareExchange(
                          &CriticalSection->LockCount,
                          (v6 != 0 ? 3 : 1) ^ LockCount,
                          LockCount);
            if ( v11 == LockCount )
              goto LABEL_23;
          }
          _mm_pause();
        }
      }
      v9 = (unsigned int)CriticalSection->LockCount;
      LOBYTE(j) = 0;
      if ( v6 )
      {
        if ( (v9 & 2) != 0 )
        {
          v10 = CriticalSection->LockCount;
          goto LABEL_15;
        }
        if ( (v9 & 1) == 0 )
        {
          v10 = v9 - 2;
          goto LABEL_15;
        }
        v10 = v9 ^ 3;
        goto LABEL_36;
      }
      if ( (v9 & 1) != 0 )
      {
        v10 = v9 ^ 1;
LABEL_36:
        LOBYTE(j) = 1;
        goto LABEL_15;
      }
      v10 = v9 - 4;
      if ( (((_BYTE)v9 - 4) & 2) == 0 )
        v10 = v9 - 6;
LABEL_15:
      if ( v10 == (_DWORD)v9 )
        goto LABEL_19;
      if ( _InterlockedCompareExchange(&CriticalSection->LockCount, v10, v9) == (_DWORD)v9 )
        break;
    }
    if ( !(_BYTE)j )
    {
      v6 = 1;
      v9 = v10;
LABEL_19:
      RtlpWaitOnCriticalSection(CriticalSection, v9, j);
      if ( v5 && v4 > 0x64 )
        --v4;
      continue;
    }
    break;
  }
LABEL_23:
  if ( v5 )
  {
    if ( v4 < 0x7D0 )
      LODWORD(v4) = v4 + 1;
    RtlSetCriticalSectionSpinCount(CriticalSection, v4);
  }
  result = 0LL;
  CriticalSection->OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
  CriticalSection->RecursionCount = 1;
  return result;
}
