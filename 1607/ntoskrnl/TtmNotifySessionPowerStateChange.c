/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x140678C1C
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionPowerStateChange @ 0x14067BE60 (TtmiLogSessionPowerStateChange.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = TtmpAcquireSessionById(&v11, a1);
  if ( v3 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 2176, v3, v3);
    return;
  }
  LOBYTE(v4) = a2;
  TtmiLogSessionPowerStateChange(v4);
  v5 = v11;
  v6 = *(_DWORD *)(v11 + 4);
  if ( a2 )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = v6 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v6 & 0x40) != 0 )
  {
    v7 = v6 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v11 + 4) = v7;
    TtmiScheduleSessionWorker(v5, 4LL);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
}
