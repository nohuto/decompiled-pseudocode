/*
 * XREFs of PpCheckInDriverDatabase @ 0x140572AC8
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1405729F0 (PnpPrepareDriverLoading.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     Template_j @ 0x1401FB6BC (Template_j.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiLookupInDDBCache @ 0x140572BDC (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, ULONGLONG a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( InitIsWinPEMode )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, v17);
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
    v10 = PiLookupInDDBCache(v17, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(v17, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
      && !v14->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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
