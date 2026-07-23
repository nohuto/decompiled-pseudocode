/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140678B14
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x14052DD2C (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiUndimAllTerminals @ 0x140677FBC (TtmiUndimAllTerminals.c)
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x14067BA74 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x14067BB34 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, char a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  __int64 *i; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = TtmpAcquireSessionById(&v18, a1);
  v6 = v18;
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = v5;
    v9 = 2349;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v9, v8, -1);
    goto LABEL_17;
  }
  v10 = *(_DWORD *)(v18 + 20);
  if ( a2 )
  {
    if ( v10 == -1 )
    {
      v7 = -1073741675;
      v9 = 2378;
      v8 = -1073741675;
      goto LABEL_3;
    }
    v13 = v10 + 1;
    *(_DWORD *)(v18 + 20) = v13;
    if ( v13 == 1 )
      TtmiUndimAllTerminals(v6);
  }
  else
  {
    if ( !v10 )
    {
      v7 = -1073741811;
      v9 = 2358;
      v8 = -1073741811;
      goto LABEL_3;
    }
    v11 = v10 - 1;
    *(_DWORD *)(v18 + 20) = v11;
    if ( !v11 )
    {
      for ( i = *(__int64 **)(v6 + 40); i != (__int64 *)(v6 + 40); i = (__int64 *)*i )
        *((_DWORD *)i + 8) |= 0x24u;
      TtmiScheduleSessionWorker(v6, 2LL);
    }
  }
  v7 = 0;
LABEL_17:
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  if ( a2 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v7);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v7);
}
