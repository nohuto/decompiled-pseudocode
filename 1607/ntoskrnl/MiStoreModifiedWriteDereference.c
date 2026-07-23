/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x14011B430
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MmStoreAsyncWriteComplete @ 0x14011B3BC (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 */

__int64 __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v3 = *(_QWORD *)(a1 + 192);
    v4 = *(unsigned int *)(a1 + 248);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    KeInitializeApc(a1 + 48, *(_QWORD *)(v3 + 856), 0, (__int64)MiStoreWriteModifiedCompleteApc, 0LL, 0LL, 0, 0LL);
    return KeInsertQueueApc(a1 + 48, a1, 0LL, 0);
  }
  return result;
}
