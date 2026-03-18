/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1400E2444
 * Callers:
 *     ExInterlockedAddUlong @ 0x1400E220C (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1400E2338 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedInsertHeadList @ 0x1400E237C (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400E23E0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedPopEntryList @ 0x14012F6A8 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14012F774 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  _disable();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( (v5 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v6, a2, a3);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return (v5 & 0x200) != 0;
}
