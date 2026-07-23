/*
 * XREFs of TtmInitCurrentSession @ 0x14067879C
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     TtmiUpdateActiveTerminalCount @ 0x140678E18 (TtmiUpdateActiveTerminalCount.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 *     TtmiLogInitCurrentSessionStart @ 0x14067B12C (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x14067B1CC (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x14067B9A8 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 TtmInitCurrentSession()
{
  int SessionId; // edi
  unsigned int v1; // edi
  int v2; // edx
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  TtmpAcquireSessionLock();
  if ( TtmpSession )
  {
    v1 = -1073741637;
    v2 = 301;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v2, -1, v1);
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x536D7454u);
  v4 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v1 = -1073741670;
    v2 = 310;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0xC0uLL);
  *(_DWORD *)(v4 + 8) = 1;
  *(_DWORD *)v4 = SessionId;
  LOBYTE(v5) = 1;
  *(_QWORD *)(v4 + 48) = v4 + 40;
  *(_QWORD *)(v4 + 40) = v4 + 40;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *(_QWORD *)(v4 + 80) = v4 + 80;
  *(_QWORD *)(v4 + 64) = v4 + 72;
  *(_DWORD *)(v4 + 56) = 32;
  *(_DWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 104) = v4 + 96;
  *(_QWORD *)(v4 + 96) = v4 + 96;
  *(_DWORD *)(v4 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(v5);
  *(_DWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 136) = TtmpSessionWorker;
  *(_QWORD *)(v4 + 144) = v4;
  *(_DWORD *)(v4 + 4) |= 8u;
  *(_DWORD *)(v4 + 76) = 1;
  v6 = TtmiCreateTerminal(v4, 0x1F0003u, 0, (HANDLE *)(v4 + 24), &v11, (_QWORD *)(v4 + 32));
  v1 = v6;
  if ( v6 >= 0 )
  {
    TtmiUpdateActiveTerminalCount(v4, 0LL, 0LL);
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v4,
           (PVOID *)(v4 + 168)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v4,
           (PVOID *)(v4 + 176)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v1 = 0;
    TtmpSession = v4;
    v4 = 0LL;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 366, v6, v6);
  }
  if ( v4 )
    ExFreePoolWithTag((PVOID)v4, 0x536D7454u);
LABEL_15:
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  TtmiLogInitCurrentSessionStop(v1);
  return v1;
}
