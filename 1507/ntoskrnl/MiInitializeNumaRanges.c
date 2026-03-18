/*
 * XREFs of MiInitializeNumaRanges @ 0x1401639AC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

__int64 MiInitializeNumaRanges()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rbx
  int v3; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rcx
  PVOID PoolWithTag; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp+10h]

  if ( MmPhysicalMemoryBlock )
  {
    v0 = (unsigned int *)&v12;
    v1 = 0;
  }
  else
  {
    v0 = 0LL;
    v1 = 16;
  }
  v2 = 0LL;
  while ( 1 )
  {
    v3 = off_140321B18();
    if ( v3 < 0 )
      break;
    if ( !v0 )
      goto LABEL_11;
    if ( v1 == *v0 )
    {
      if ( !v1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v13 = 0LL;
      }
      goto LABEL_11;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v1 = *v0;
    if ( !*v0 )
    {
      v13 = 0LL;
      v3 = 0;
LABEL_11:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E8B0);
      }
      else
      {
        v5 = 0;
        if ( _interlockedbittestandset(&dword_14034E8B0, 0x1Fu) )
          v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E8B0);
        while ( (dword_14034E8B0 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E8B0 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E8B0, dword_14034E8B0 | 0x40000000, dword_14034E8B0);
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
      }
      v2 = (void *)qword_14034EB80;
      if ( qword_14034EB80 && !byte_14034EB88 )
      {
        byte_14034EB88 = 1;
        v2 = 0LL;
      }
      v6 = (__int64)v13;
      if ( v13 )
      {
        v7 = 0;
        if ( *v13 != -1LL )
        {
          v8 = 0LL;
          do
          {
            if ( *(_DWORD *)(v8 + v6 + 8) >= (unsigned int)(unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v8 + v6 + 8) = 0;
              v6 = (__int64)v13;
            }
            v8 = 16LL * (unsigned int)++v7;
          }
          while ( *(_QWORD *)(v8 + v6) != -1LL );
        }
      }
      dword_14034EB78 = 0;
      qword_14034EB80 = v6;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
      else
        dword_14034E8B0 = 0;
      __writecr8(CurrentIrql);
      break;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x20206D4Du);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v13 = PoolWithTag;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v3;
}
