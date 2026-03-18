/*
 * XREFs of ACPIInitialize @ 0x1C0086558
 * Callers:
 *     ACPIInitStartACPI @ 0x1C0086F88 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIInitializeKernelTableHandler @ 0x1C001AD1C (ACPIInitializeKernelTableHandler.c)
 *     ACPIEnableInitializeACPI @ 0x1C001AF70 (ACPIEnableInitializeACPI.c)
 *     ACPIGetTableVersion @ 0x1C001B5A0 (ACPIGetTableVersion.c)
 *     ACPIInterruptInitialize @ 0x1C006FB20 (ACPIInterruptInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C0085294 (ACPIInitializeAMLI.c)
 *     ACPILoadProcessRSDT @ 0x1C0085D88 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C0085FB4 (ACPIInitializeDDBs.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C00866DC (AcpiIrqLibConfigureLibrary.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A48 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C0086DB8 (AcpiIrqLibInitializeGlobalState.c)
 */

char __fastcall ACPIInitialize(__int64 a1)
{
  _QWORD *v2; // rax
  bool v3; // al
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( (int)ACPIInitializeAMLI() < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  AcpiIrqLibInitializeGlobalState(a1);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C005A9F0 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v2 = v2;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  if ( (int)ACPILoadProcessRSDT() < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  v3 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902, &v10) >= 0 && v10 >= 5);
  gAcpiHonorBiosPolarities = v3;
  if ( (int)ACPIGetTableVersion(1346584902, &v10) >= 0 && v10 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIEnableInitializeACPI(0LL, v4);
  v5 = ACPIInitializeDDBs();
  if ( v5 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, v5);
  v6 = NotifyHalWithMachineStatesAndRetrieveInterruptModel(&v10);
  if ( v6 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, v6);
  v7 = AcpiIrqLibConfigureLibrary(v10);
  if ( v7 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v7);
  v8 = ACPIInterruptInitialize();
  if ( v8 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v8);
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(a1 + 8));
  return 1;
}
