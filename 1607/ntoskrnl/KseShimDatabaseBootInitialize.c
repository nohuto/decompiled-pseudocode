/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x1407BC020
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  size_t v3; // rsi
  PVOID Paged; // rax
  __int64 v6; // rdi
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al

  v2 = 0;
  v3 = (unsigned int)Size;
  if ( KsepShimDbDuringBoot )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v9 = KsepDebugFlag;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 589945;
    if ( (v9 & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0x79u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 589946;
    if ( (v11 & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0x7Au, 0LL);
  }
  if ( KsepShimDbAddress )
  {
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v13 = KsepDebugFlag;
    KsepHistoryErrors[2 * v12 + 1] = -1073740768;
    KsepHistoryErrors[2 * v12] = 589947;
    if ( (v13 & 4) != 0 )
      RtlAssert("KsepShimDbAddress == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0x7Bu, 0LL);
  }
  KsepShimDbLock = 0LL;
  KsepShimDbDuringBoot = 1;
  KsepShimDbHandle = 0LL;
  KsepShimDbAddress = 0LL;
  if ( !Src || !(_DWORD)v3 )
    return (unsigned int)-1073741823;
  Paged = KsepPoolAllocatePaged(v3);
  KsepShimDbAddress = Paged;
  v6 = (__int64)Paged;
  if ( Paged )
  {
    memmove(Paged, Src, v3);
    KsepShimDbHandle = SdbInitDatabaseInMemory(v6, v3);
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      return v2;
    }
    v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v17 = KsepDebugFlag;
    KsepHistoryErrors[2 * v16 + 1] = -1073741823;
    KsepHistoryErrors[2 * v16] = 589999;
    if ( (v17 & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
    KsepLogError(1, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
    KsepPoolFreePaged(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
    return (unsigned int)-1073741823;
  }
  v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  v15 = KsepDebugFlag;
  KsepHistoryErrors[2 * v14 + 1] = -1073741823;
  KsepHistoryErrors[2 * v14] = 589982;
  if ( (v15 & 2) != 0 )
    KsepDebugPrint(0LL, "KSE: Failed to allocate memory for shim database during boot!\n");
  KsepLogError(0, "KSE: Failed to allocate memory for shim database during boot!\n");
  return (unsigned int)-1073741670;
}
