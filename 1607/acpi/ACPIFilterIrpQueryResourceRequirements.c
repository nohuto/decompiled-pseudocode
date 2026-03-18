/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C0085510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0085A4C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C0085BD4 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0085C6C (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rdx
  int DeviceResourceList; // eax
  char v8; // r10
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // r8
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( DeviceResourceList < 0 )
  {
    v8 = 0;
    v9 = (const char *)qword_1C0090C20;
    v10 = (const char *)qword_1C0090C20;
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
      BugCheckParameter3,
      DeviceResourceList,
      v8,
      v9,
      v10);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
