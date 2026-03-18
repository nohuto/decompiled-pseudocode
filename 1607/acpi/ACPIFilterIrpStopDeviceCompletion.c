/*
 * XREFs of ACPIFilterIrpStopDeviceCompletion @ 0x1C004E910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStopDeviceCompletion(ULONG_PTR a1, __int64 a2)
{
  int v2; // esi
  __int64 DeviceExtension; // rax
  char v5; // r8
  const char *v6; // rcx
  __int64 v7; // rbx
  const char *v8; // rdx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a2 + 48);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = (const char *)qword_1C002C340;
  v7 = DeviceExtension;
  v8 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v5 = DeviceExtension;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v7 + 568);
    }
  }
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Cu,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    a2,
    off_1C0071030[0],
    v2,
    v5,
    v6,
    v8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(v7 + 320) = 0;
    ACPIInitStopDevice(v7, 0LL);
  }
  ACPIInternalDecrementIrpReferenceCount(v7);
  return 0LL;
}
