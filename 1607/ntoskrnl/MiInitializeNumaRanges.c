/*
 * XREFs of MiInitializeNumaRanges @ 0x1400B3A90
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

__int64 MiInitializeNumaRanges()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rbx
  int v3; // ebp
  KIRQL v4; // al
  KIRQL v5; // r10
  __int64 v6; // rdx
  PVOID PoolWithTag; // rax
  int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rax
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
    v3 = off_1402F37E8();
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
      v4 = ExAcquireSpinLockExclusive(&dword_1403266F0);
      v2 = (void *)qword_140326A00;
      v5 = v4;
      if ( qword_140326A00 && !byte_140326A08 )
      {
        byte_140326A08 = 1;
        v2 = 0LL;
      }
      v6 = (__int64)v13;
      if ( v13 )
      {
        v9 = 0;
        if ( *v13 != -1LL )
        {
          v10 = (unsigned __int16)KeNumberNodes;
          v11 = 0LL;
          do
          {
            if ( *(_DWORD *)(v11 + v6 + 8) >= v10 )
            {
              *(_DWORD *)(v11 + v6 + 8) = 0;
              v6 = (__int64)v13;
            }
            v11 = 16LL * (unsigned int)++v9;
          }
          while ( *(_QWORD *)(v11 + v6) != -1LL );
        }
      }
      dword_1403269F8 = 0;
      qword_140326A00 = v6;
      ExReleaseSpinLockExclusive(&dword_1403266F0, v5);
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
