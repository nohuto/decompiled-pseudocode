/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x140678740
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008870 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionById(&v7, a1);
  v2 = 0;
  if ( v1 < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 2442, v1, -1);
  }
  else
  {
    v2 = *(_DWORD *)(v7 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return v2;
}
