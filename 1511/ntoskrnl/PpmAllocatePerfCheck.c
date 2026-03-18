/*
 * XREFs of PpmAllocatePerfCheck @ 0x140536FC4
 * Callers:
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24168) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x704D5050u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a1 + 24168) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
