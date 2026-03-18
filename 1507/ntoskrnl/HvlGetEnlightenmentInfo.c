/*
 * XREFs of HvlGetEnlightenmentInfo @ 0x1401E7E90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 (__fastcall *__fastcall HvlGetEnlightenmentInfo(_DWORD *a1))()
{
  int v2; // eax
  char v3; // al
  __int64 (__fastcall *result)(); // rax

  memset(a1, 0, 0x158uLL);
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
  if ( (v2 & 0x1000) != 0 )
  {
    *((_QWORD *)a1 + 9) = HvlMapDeviceInterrupt;
    *((_QWORD *)a1 + 10) = HvlUnmapDeviceInterrupt;
    v2 = HvlEnlightenments;
  }
  if ( (v2 & 0x8000) != 0 )
  {
    *((_QWORD *)a1 + 24) = HvlSendSyntheticClusterIpi;
    v2 = HvlEnlightenments;
  }
  if ( (v2 & 0x20000) != 0 )
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
  *((_QWORD *)a1 + 25) = HvlHalVpStartEnabled;
  if ( (HvlEnlightenments & 0x10000) != 0 )
  {
    *((_QWORD *)a1 + 26) = HvlHalStartVirtualProcessor;
    *((_QWORD *)a1 + 27) = HvlHalGetVpIndexFromApicId;
  }
  *((_QWORD *)a1 + 29) = HvlSvmGetSystemCapabilities;
  *((_QWORD *)a1 + 30) = HvlSvmGetDeviceCapabilities;
  *((_QWORD *)a1 + 31) = HvlSvmCreatePasidSpace;
  *((_QWORD *)a1 + 32) = HvlSvmSetPasidAddressSpace;
  *((_QWORD *)a1 + 33) = HvlSvmFlushPasid;
  *((_QWORD *)a1 + 34) = HvlSvmAttachPasidSpace;
  *((_QWORD *)a1 + 35) = HvlSvmDetachPasidSpace;
  *((_QWORD *)a1 + 36) = HvlSvmEnablePasid;
  *((_QWORD *)a1 + 37) = HvlSvmDisablePasid;
  *((_QWORD *)a1 + 38) = HvlSvmAcknowledgePageRequest;
  *((_QWORD *)a1 + 39) = HvlSvmCreatePrQueue;
  *((_QWORD *)a1 + 40) = HvlSvmDeletePrQueue;
  *((_QWORD *)a1 + 41) = HvlSvmClearPrqStalled;
  v3 = HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *((_QWORD *)a1 + 42) = HvlSvmSetDeviceEnabled;
    v3 = HvlpRootFlags;
  }
  if ( v3 < 0 )
  {
    *((_QWORD *)a1 + 13) = HvlQueryAssociatedProcessors;
    *((_QWORD *)a1 + 18) = HvlLpGetMachineCheckContext;
    *((_QWORD *)a1 + 19) = HvlSuspendPartition;
    *((_QWORD *)a1 + 20) = HvlResumePartition;
    *((_QWORD *)a1 + 21) = HvlSetSystemMachineCheckProperty;
    *((_QWORD *)a1 + 22) = HvlInvokeWheaErrorNotificationCallback;
    *((_QWORD *)a1 + 23) = HvlGetProcessorIndexFromVpIndex;
    *((_QWORD *)a1 + 14) = HvlLpReadMultipleMsr;
    *((_QWORD *)a1 + 15) = HvlLpWriteMultipleMsr;
    *((_QWORD *)a1 + 16) = HvlLpReadCpuid;
    *((_QWORD *)a1 + 17) = HvlLpWritebackInvalidate;
    v3 = HvlpRootFlags;
  }
  if ( (v3 & 1) != 0 )
  {
    *((_QWORD *)a1 + 11) = HvlSetHpetConfig;
    *((_QWORD *)a1 + 12) = HvlNotifyHpetEnabled;
  }
  result = HvlpIumEfiRuntimeService;
  *((_QWORD *)a1 + 28) = HvlpIumEfiRuntimeService;
  return result;
}
