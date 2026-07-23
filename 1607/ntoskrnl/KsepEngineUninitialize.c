/*
 * XREFs of KsepEngineUninitialize @ 0x1407D0374
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepCacheUninitialize @ 0x140653F44 (KsepCacheUninitialize.c)
 */

void __fastcall KsepEngineUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // rcx

  if ( !a1 )
  {
    v2 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v3 = KsepDebugFlag;
    KsepHistoryErrors[2 * v2 + 1] = -1073740768;
    KsepHistoryErrors[2 * v2] = 131964;
    if ( (v3 & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x37Cu, 0LL);
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    KsepCacheUninitialize(v4);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  *(_DWORD *)a1 |= 3u;
  *(_DWORD *)(a1 + 8) |= 0x400u;
}
