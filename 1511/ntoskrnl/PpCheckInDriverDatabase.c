/*
 * XREFs of PpCheckInDriverDatabase @ 0x1403B8FE0
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1403B8F08 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     Template_j @ 0x1401BFACC (Template_j.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiLookupInDDB @ 0x1403B68CC (PiLookupInDDB.c)
 *     PiLookupInDDBCache @ 0x1403B90C8 (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x1403BB854 (IopBuildFullDriverPath.c)
 *     PnpLogEvent @ 0x14060369C (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, ULONGLONG a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  _BYTE v15[8]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( InitIsWinPEMode )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, v15);
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
    v10 = PiLookupInDDBCache(v15, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB((__int64)v15, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
