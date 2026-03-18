/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x14054E968
 * Callers:
 *     PnpQueryBusInformation @ 0x14054E8A4 (PnpQueryBusInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(char *Source1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // ebx
  bool v9; // zf
  char *v10; // rdx
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  PVOID PoolWithTag; // rax
  void *v15; // rsi
  PVOID v16; // rdi

  v5 = KeAbPreAcquire((ULONG_PTR)&PnpBusTypeGuidLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpBusTypeGuidLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpBusTypeGuidLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = 0;
  v9 = PnpBusTypeGuidCount == 0;
  qword_14034B168 = (__int64)KeGetCurrentThread();
  dword_14034B190 = CurrentIrql;
  if ( PnpBusTypeGuidCount )
  {
    do
    {
      v10 = (char *)PnpBusTypeGuidArray + 16 * v8;
      if ( Source1 == v10 )
        break;
      if ( RtlCompareMemory(Source1, v10, 0x10uLL) == 16 )
        break;
      ++v8;
    }
    while ( v8 < PnpBusTypeGuidCount );
    v9 = v8 == PnpBusTypeGuidCount;
  }
  if ( v9 )
  {
    if ( v8 == PnpBusTypeGuidCountMax )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (v8 + 1), 0x75737050u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        v16 = PnpBusTypeGuidArray;
        memmove(PoolWithTag, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
        ++PnpBusTypeGuidCountMax;
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        PnpBusTypeGuidArray = v15;
      }
      else
      {
        v8 = -1;
      }
    }
    if ( v8 != -1 )
      *((_OWORD *)PnpBusTypeGuidArray + (unsigned int)PnpBusTypeGuidCount++) = *(_OWORD *)Source1;
  }
  qword_14034B168 = 0LL;
  v11 = dword_14034B190;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpBusTypeGuidLock, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpBusTypeGuidLock, v12);
  __writecr8(v11);
  KeAbPostRelease((ULONG_PTR)&PnpBusTypeGuidLock);
  return (unsigned __int16)v8;
}
