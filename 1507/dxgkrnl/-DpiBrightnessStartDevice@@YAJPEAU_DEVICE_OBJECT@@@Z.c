/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00C51A8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C00C6840 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C016CA84 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // r14d
  __int64 v5; // xmm1_8
  int v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2928), 0);
  MiniportInterface = DpiQueryMiniportInterface(
                        (_DWORD)a1,
                        (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2,
                        88,
                        2,
                        -1,
                        (__int64)(DeviceExtension + 3128));
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 782) = 131160;
  *((_QWORD *)DeviceExtension + 386) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 385) = a1;
  *((_QWORD *)DeviceExtension + 387) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 768) = 65592;
  *((_QWORD *)DeviceExtension + 388) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 389) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 390) = DpiBrightnessIfGet;
  *(_OWORD *)(DeviceExtension + 2984) = *((_OWORD *)DeviceExtension + 192);
  *(_OWORD *)(DeviceExtension + 3000) = *((_OWORD *)DeviceExtension + 193);
  *(_OWORD *)(DeviceExtension + 3016) = *((_OWORD *)DeviceExtension + 194);
  v5 = *((_QWORD *)DeviceExtension + 390);
  *((_QWORD *)DeviceExtension + 380) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 381) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 382) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 379) = v5;
  *((_QWORD *)DeviceExtension + 383) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 746) = 131160;
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 398))(*((_QWORD *)DeviceExtension + 392), &v7) >= 0
    && (v7 & 1) != 0 )
  {
    v6 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 399))(*((_QWORD *)DeviceExtension + 392), &v6);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 397))(
    *((_QWORD *)DeviceExtension + 392),
    DeviceExtension + 2856);
  DeviceExtension[2920] = DeviceExtension[2856];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
