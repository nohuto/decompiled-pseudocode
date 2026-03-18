/*
 * XREFs of MiInitializeNumaRanges @ 0x140132088
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
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
  int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rax
  PVOID PoolWithTag; // rax
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
    v3 = off_1402D29C8();
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
      v4 = ExAcquireSpinLockExclusive(&dword_1402FE3E8);
      v2 = (void *)qword_1402FE6D0;
      v5 = v4;
      if ( qword_1402FE6D0 && !byte_1402FE6D8 )
      {
        byte_1402FE6D8 = 1;
        v2 = 0LL;
      }
      v6 = (__int64)v13;
      if ( v13 )
      {
        v7 = 0;
        if ( *v13 != -1LL )
        {
          v8 = (unsigned __int16)KeNumberNodes;
          v9 = 0LL;
          do
          {
            if ( *(_DWORD *)(v9 + v6 + 8) >= v8 )
            {
              *(_DWORD *)(v9 + v6 + 8) = 0;
              v6 = (__int64)v13;
            }
            v9 = 16LL * (unsigned int)++v7;
          }
          while ( *(_QWORD *)(v9 + v6) != -1LL );
        }
      }
      dword_1402FE6C8 = 0;
      qword_1402FE6D0 = v6;
      ExReleaseSpinLockExclusive(&dword_1402FE3E8, v5);
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
