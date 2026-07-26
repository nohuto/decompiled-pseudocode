/*
 * XREFs of ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D8DF4
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00D8430 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D8C64 (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00D8EE0 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

__int64 __fastcall ndisPcwRemoveCounter(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  unsigned int *i; // rdi
  __int64 j; // rsi
  struct _NDIS_PCW_DATA_BLOCK *v7; // rbx
  void *v8; // rcx
  KLockHolder v10; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v10, (struct KPushLockBase *)&ndisPcwMutex);
  for ( i = (unsigned int *)ndisPcwConsumerList; i; i = *(unsigned int **)i )
  {
    if ( i[2] == a1
      && *((_QWORD *)i + 2) == *(_QWORD *)a2
      && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 6), *(PCUNICODE_STRING *)(a2 + 8), 0) )
    {
      if ( v4 )
        *v4 = *(_QWORD *)i;
      else
        ndisPcwConsumerList = *(PVOID *)i;
      for ( j = 0LL; (unsigned int)j < i[10]; j = (unsigned int)(j + 1) )
      {
        v7 = *(struct _NDIS_PCW_DATA_BLOCK **)(*((_QWORD *)i + 6) + 8 * j);
        ndisPcwUpdateMiniportDataBlock(v7, i[2], *((_QWORD *)i + 2));
        ndisPcwMaybeDeleteDataBlock(v7);
      }
      v8 = (void *)*((_QWORD *)i + 6);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        *((_QWORD *)i + 6) = 0LL;
      }
      ExFreePoolWithTag(i, 0);
      break;
    }
    v4 = i;
  }
  KLockHolder::~KLockHolder(&v10);
  return 0LL;
}
