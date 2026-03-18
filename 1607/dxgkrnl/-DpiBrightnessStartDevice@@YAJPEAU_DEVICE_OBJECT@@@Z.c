/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00EA23C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C00EBA80 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01989EC (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0199614 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // r14d
  __int64 v5; // xmm1_8
  int v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 74, 0);
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1086) = 131160;
  *((_QWORD *)DeviceExtension + 538) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 537) = a1;
  *((_QWORD *)DeviceExtension + 539) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1072) = 65592;
  *((_QWORD *)DeviceExtension + 540) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 541) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 542) = DpiBrightnessIfGet;
  *(_OWORD *)(DeviceExtension + 4200) = *((_OWORD *)DeviceExtension + 268);
  *(_OWORD *)(DeviceExtension + 4216) = *((_OWORD *)DeviceExtension + 269);
  *(_OWORD *)(DeviceExtension + 4232) = *((_OWORD *)DeviceExtension + 270);
  v5 = *((_QWORD *)DeviceExtension + 542);
  *((_QWORD *)DeviceExtension + 532) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 533) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 534) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 531) = v5;
  *((_QWORD *)DeviceExtension + 535) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1050) = 131160;
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 550))(*((_QWORD *)DeviceExtension + 544), &v7) >= 0
    && (v7 & 1) != 0 )
  {
    v6 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 551))(*((_QWORD *)DeviceExtension + 544), &v6);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 549))(
    *((_QWORD *)DeviceExtension + 544),
    DeviceExtension + 4072);
  DeviceExtension[4136] = DeviceExtension[4072];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
