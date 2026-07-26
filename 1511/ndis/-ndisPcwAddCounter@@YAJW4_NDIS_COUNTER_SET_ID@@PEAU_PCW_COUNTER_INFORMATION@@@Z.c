/*
 * XREFs of ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D1B78
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00D1B30 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00637B4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall ndisPcwAddCounter(unsigned int a1, __int64 a2)
{
  int v4; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  int ReferencesForConsumer; // edi
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = **(unsigned __int16 **)(a2 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v4 + 56), 0x7763444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    ReferencesForConsumer = ndisPcwGetReferencesForConsumer(a1, a2, (__int64)PoolWithTag);
    if ( ReferencesForConsumer < 0 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      *((_WORD *)v6 + 13) = v4;
      v6[4] = v6 + 7;
      *((_WORD *)v6 + 12) = v4;
      memmove(v6 + 7, *(const void **)(*(_QWORD *)(a2 + 8) + 8LL), (unsigned __int16)v4);
      *((_DWORD *)v6 + 2) = a1;
      v6[2] = *(_QWORD *)a2;
      KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v9, &ndisPcwMutex);
      *v6 = ndisPcwConsumerList;
      ndisPcwConsumerList = v6;
      KLockHolder::~KLockHolder(&v9);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ReferencesForConsumer;
}
