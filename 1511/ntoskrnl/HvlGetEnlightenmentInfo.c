/*
 * XREFs of HvlGetEnlightenmentInfo @ 0x1401B011C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 (__fastcall *__fastcall HvlGetEnlightenmentInfo(_DWORD *a1))()
{
  int v2; // eax
  __int16 v3; // ax
  __int64 (__fastcall *result)(); // rax

  memset(a1, 0, 0x160uLL);
  *a1 = HvlEnlightenments;
  a1[1] = HvlpFlags & 1;
  a1[7] = HvlLongSpinCountMask;
  v2 = HvlEnlightenments;
  if ( (HvlEnlightenments & 0x40) != 0 )
  {
    *((_QWORD *)a1 + 4) = HvlNotifyLongSpinWait;
    v2 = HvlEnlightenments;
  }
  if ( (v2 & 0x100) != 0 )
  {
    *((_QWORD *)a1 + 5) = HvlGetReferenceTimeUsingTscPage;
    v2 = HvlEnlightenments;
  }
  if ( (v2 & 0x4000) != 0 )
  {
    *((_QWORD *)a1 + 25) = HvlSendSyntheticClusterIpi;
    v2 = HvlEnlightenments;
  }
  if ( (v2 & 0x10000) != 0 )
  {
    *((_QWORD *)a1 + 6) = HvlSetSystemSleepProperty;
    *((_QWORD *)a1 + 7) = HvlEnterSleepState;
    *((_QWORD *)a1 + 8) = HvlNotifyDebugDeviceAvailable;
    LOBYTE(v2) = HvlEnlightenments;
  }
  if ( (v2 & 0x10) != 0 )
  {
    *((_QWORD *)a1 + 1) = HvlEndSystemInterrupt;
    *((_QWORD *)a1 + 2) = HvlWriteApicCommandRegister;
  }
  *((_QWORD *)a1 + 26) = HvlHalVpStartEnabled;
  if ( (HvlEnlightenments & 0x8000) != 0 )
  {
    *((_QWORD *)a1 + 27) = HvlHalStartVirtualProcessor;
    *((_QWORD *)a1 + 28) = HvlHalGetVpIndexFromApicId;
  }
  *((_QWORD *)a1 + 30) = HvlSvmGetSystemCapabilities;
  *((_QWORD *)a1 + 31) = HvlSvmGetDeviceCapabilities;
  *((_QWORD *)a1 + 32) = HvlSvmCreatePasidSpace;
  *((_QWORD *)a1 + 33) = HvlSvmSetPasidAddressSpace;
  *((_QWORD *)a1 + 34) = HvlSvmFlushPasid;
  *((_QWORD *)a1 + 35) = HvlSvmAttachPasidSpace;
  *((_QWORD *)a1 + 36) = HvlSvmDetachPasidSpace;
  *((_QWORD *)a1 + 37) = HvlSvmEnablePasid;
  *((_QWORD *)a1 + 38) = HvlSvmDisablePasid;
  *((_QWORD *)a1 + 39) = HvlSvmAcknowledgePageRequest;
  *((_QWORD *)a1 + 40) = HvlSvmCreatePrQueue;
  *((_QWORD *)a1 + 41) = HvlSvmDeletePrQueue;
  *((_QWORD *)a1 + 42) = HvlSvmClearPrqStalled;
  v3 = HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *((_QWORD *)a1 + 43) = HvlSvmSetDeviceEnabled;
    v3 = HvlpRootFlags;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    *((_QWORD *)a1 + 14) = &HvlQueryAssociatedProcessors;
    *((_QWORD *)a1 + 19) = HvlLpGetMachineCheckContext;
    *((_QWORD *)a1 + 20) = HvlSuspendPartition;
    *((_QWORD *)a1 + 21) = HvlResumePartition;
    *((_QWORD *)a1 + 22) = HvlSetSystemMachineCheckProperty;
    *((_QWORD *)a1 + 23) = HvlInvokeWheaErrorNotificationCallback;
    *((_QWORD *)a1 + 24) = HvlGetProcessorIndexFromVpIndex;
    *((_QWORD *)a1 + 15) = HvlLpReadMultipleMsr;
    *((_QWORD *)a1 + 16) = HvlLpWriteMultipleMsr;
    *((_QWORD *)a1 + 17) = HvlLpReadCpuid;
    *((_QWORD *)a1 + 18) = HvlLpWritebackInvalidate;
    v3 = HvlpRootFlags;
  }
  if ( (v3 & 0x100) != 0 )
  {
    *((_QWORD *)a1 + 9) = HvlMapDeviceInterrupt;
    *((_QWORD *)a1 + 10) = HvlUnmapDeviceInterrupt;
    *((_QWORD *)a1 + 11) = HvlRetargetDeviceInterrupt;
    LOBYTE(v3) = HvlpRootFlags;
  }
  if ( (v3 & 1) != 0 )
  {
    *((_QWORD *)a1 + 12) = HvlSetHpetConfig;
    *((_QWORD *)a1 + 13) = HvlNotifyHpetEnabled;
  }
  result = HvlpIumEfiRuntimeService;
  *((_QWORD *)a1 + 29) = HvlpIumEfiRuntimeService;
  return result;
}
