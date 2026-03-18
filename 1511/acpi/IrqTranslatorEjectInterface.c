/*
 * XREFs of IrqTranslatorEjectInterface @ 0x1C0070808
 * Callers:
 *     ACPIRootIrpQueryInterface @ 0x1C006EB80 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall IrqTranslatorEjectInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // eax
  unsigned __int16 v4; // cx
  int Src; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  void (__fastcall *v8)(PDEVICE_OBJECT, UCHAR, POWER_STATE, PVOID); // [rsp+30h] [rbp-28h]
  void (__fastcall *v9)(PDEVICE_OBJECT, UCHAR, POWER_STATE, PVOID); // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v10)(__int64, __int64, int, __int64, int, PVOID, PRTL_RANGE); // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v11)(int, int, int, int, __int64); // [rsp+48h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 184);
  Src = 65584;
  v3 = 48;
  v7 = 0LL;
  v8 = PciConfigPinToLine;
  v9 = PciConfigPinToLine;
  v10 = IrqTranslateResources;
  v11 = IrqTranslateRequirements;
  v4 = *(_WORD *)(v2 + 16);
  if ( v4 <= 0x30u )
    v3 = v4;
  memmove(*(void **)(v2 + 24), &Src, v3);
  return 0LL;
}
