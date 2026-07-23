/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x140679C48
 * Callers:
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiOpenDefaultTerminal @ 0x140677B08 (TtmiOpenDefaultTerminal.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  HANDLE *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = TtmiAcquireCurrentSession((__int64)&v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = a2;
    v6 = v12;
    v5 = TtmiOpenDefaultTerminal(v12, *(_DWORD *)(a1 + 8), KeGetCurrentThread()->PreviousMode, v7);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154, v4, v4);
    v6 = v12;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  return v5;
}
