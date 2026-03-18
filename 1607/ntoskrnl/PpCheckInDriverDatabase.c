/*
 * XREFs of PpCheckInDriverDatabase @ 0x14049D7A4
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14049D6CC (PnpPrepareDriverLoading.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     Template_j @ 0x1401CE054 (Template_j.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     PiLookupInDDBCache @ 0x14049D88C (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x14049DA9C (IopBuildFullDriverPath.c)
 *     PnpLogEvent @ 0x14062DA98 (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, ULONGLONG a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[8]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( InitIsWinPEMode )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, v18);
  if ( v10 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      RtlInitUnicodeString(&DestinationString, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v10 = PiLookupInDDBCache(v18, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB((__int64)v18, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
    ExFreePoolWithTag(P, 0);
  }
  if ( (unsigned int)(v10 + 1073740949) <= 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x20000) != 0 )
      Template_j(v9, v8, v11, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
