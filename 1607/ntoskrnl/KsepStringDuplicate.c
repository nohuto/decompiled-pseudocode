/*
 * XREFs of KsepStringDuplicate @ 0x140485730
 * Callers:
 *     KsepRegistryOpenKey @ 0x140485914 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KsepStringTransform @ 0x140534F40 (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x140534FDC (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x14057E248 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetSdbString @ 0x1406526E8 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x140653BE4 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140653EAC (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     RtlAssert @ 0x140213458 (RtlAssert.c)
 */

__int64 __fastcall KsepStringDuplicate(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  PVOID Paged; // rax
  PVOID v7; // rsi
  __int64 result; // rax
  __int64 v9; // r9
  char v10; // al

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197205;
    if ( (v10 & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x255u, 0LL);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = -1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  Paged = KsepPoolAllocatePaged(v5);
  v7 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2, v5);
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
