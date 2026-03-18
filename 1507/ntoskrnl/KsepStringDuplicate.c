/*
 * XREFs of KsepStringDuplicate @ 0x14054B5E0
 * Callers:
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x1405785E4 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringTransform @ 0x140578DD4 (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x1405C6DC8 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetSdbString @ 0x14069BFD4 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x14069D6EC (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14069D9B4 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
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
