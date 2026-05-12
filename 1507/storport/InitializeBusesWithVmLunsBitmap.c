/*
 * XREFs of InitializeBusesWithVmLunsBitmap @ 0x1C0008198
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C000802C (RaidAdapterStartMiniport.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall InitializeBusesWithVmLunsBitmap(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx
  PVOID PoolWithTag; // rax

  v1 = 0;
  v3 = *(unsigned __int8 *)(a1 + 376) >> 5;
  if ( (*(_BYTE *)(a1 + 376) & 0x1F) != 0 )
    ++v3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v3, 0x4D566152u);
  *(_QWORD *)(a1 + 4976) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 4LL * v3);
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 4960), *(PULONG *)(a1 + 4976), 32 * v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
