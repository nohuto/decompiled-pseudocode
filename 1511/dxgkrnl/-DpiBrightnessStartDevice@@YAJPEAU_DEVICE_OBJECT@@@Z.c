/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00D2338
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C00D3AB0 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01706D4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0171294 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // r14d
  __int64 v5; // xmm1_8
  int v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2992), 0);
  MiniportInterface = DpiQueryMiniportInterface(
                        (_DWORD)a1,
                        (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2,
                        88,
                        2,
                        -1,
                        (__int64)(DeviceExtension + 3192));
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 798) = 131160;
  *((_QWORD *)DeviceExtension + 394) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 393) = a1;
  *((_QWORD *)DeviceExtension + 395) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 784) = 65592;
  *((_QWORD *)DeviceExtension + 396) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 397) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 398) = DpiBrightnessIfGet;
  *(_OWORD *)(DeviceExtension + 3048) = *((_OWORD *)DeviceExtension + 196);
  *(_OWORD *)(DeviceExtension + 3064) = *((_OWORD *)DeviceExtension + 197);
  *(_OWORD *)(DeviceExtension + 3080) = *((_OWORD *)DeviceExtension + 198);
  v5 = *((_QWORD *)DeviceExtension + 398);
  *((_QWORD *)DeviceExtension + 388) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 389) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 390) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 387) = v5;
  *((_QWORD *)DeviceExtension + 391) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 762) = 131160;
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 406))(*((_QWORD *)DeviceExtension + 400), &v7) >= 0
    && (v7 & 1) != 0 )
  {
    v6 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 407))(*((_QWORD *)DeviceExtension + 400), &v6);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 405))(
    *((_QWORD *)DeviceExtension + 400),
    DeviceExtension + 2920);
  DeviceExtension[2984] = DeviceExtension[2920];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
