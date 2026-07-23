/*
 * XREFs of KsepStringTransform @ 0x140535480
 * Callers:
 *     KsepDbQueryRegistryDeviceData @ 0x1405353E8 (KsepDbQueryRegistryDeviceData.c)
 *     KseSetDeviceFlags @ 0x1406525F4 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 * Callees:
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepStringTransform(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  unsigned __int16 i; // ax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  char v11; // al

  v2 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v9 = KsepDebugFlag;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 197408;
    if ( (v9 & 4) != 0 )
      RtlAssert("TargetString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x320u, 0LL);
  }
  if ( !a2 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 197409;
    if ( (v11 & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x321u, 0LL);
  }
  result = KsepStringDuplicate(a1, a2);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1 & 0xFFFE; v2 < i; i = *(_WORD *)a1 >> 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v7 + 2LL * v2) == 92 )
        *(_WORD *)(v7 + 2LL * v2) = 33;
      ++v2;
    }
    return 0LL;
  }
  return result;
}
