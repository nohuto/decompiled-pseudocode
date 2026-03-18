/*
 * XREFs of ACPIDockIrpQueryPower @ 0x1C0043250
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C004C280 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  const char *v7; // rcx
  const char *v8; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v11; // edx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = DeviceExtension[23];
  if ( !v5 )
  {
    v6 = DeviceExtension[1];
    v7 = (const char *)qword_1C002C340;
    v8 = (const char *)qword_1C002C340;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)DeviceExtension[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x19u,
      (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      v7,
      v8);
    goto LABEL_6;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options && CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    switch ( (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF )
    {
      case 2u:
        v11 = 826951007;
        break;
      case 3u:
        v11 = 843728223;
        break;
      case 4u:
        v11 = 860505439;
        break;
      case 5u:
        v11 = 877282655;
        break;
      default:
        goto LABEL_6;
    }
    if ( !AMLIIsNamedChildPresent(*(__int64 **)(v5 + 712), v11) )
    {
      a2->IoStatus.Status = -1073741823;
      IofCompleteRequest(a2, 0);
      return 259LL;
    }
  }
LABEL_6:
  ACPIDispatchPowerIrpSuccess(a1, a2);
  return 259LL;
}
