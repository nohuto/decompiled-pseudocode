/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C0082BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char *IrpText; // rax
  const char *v8; // r8
  const char *v9; // r10
  char v10; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
    v6 = *(_QWORD *)(DeviceExtension + 8);
  IrpText = ACPIDebugGetIrpText(v6, *(_BYTE *)(v2 + 1));
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    a2,
    IrpText,
    *(_DWORD *)(a2 + 48),
    v10,
    v8,
    v9);
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
