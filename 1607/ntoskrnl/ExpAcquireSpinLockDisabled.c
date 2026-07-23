/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1400A614C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1400A60E8 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140133174 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14022E5BC (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14022E600 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14022E640 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  __int16 v3; // [rsp+20h] [rbp-8h]
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  _disable();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( (v3 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v4);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return (v3 & 0x200) != 0;
}
