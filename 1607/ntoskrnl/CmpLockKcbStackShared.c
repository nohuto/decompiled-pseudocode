/*
 * XREFs of CmpLockKcbStackShared @ 0x140432F60
 * Callers:
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140403F54 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAEB8 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rdi
  __int64 v4; // rsi

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (i - 2));
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v3 + 60) = CmpLockTableAdd(v3, 0);
    v4 = KeAbPreAcquire(v3 + 40, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 40), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v3 + 40), v4, v3 + 40);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  }
}
