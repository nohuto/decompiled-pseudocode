/*
 * XREFs of ACPIRootIrpQueryPower @ 0x1C00560E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C004C1C0 (ACPIDispatchForwardPowerIrp.c)
 */

__int64 __fastcall ACPIRootIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  int Status; // ebx
  char v5; // di
  _QWORD *DeviceExtension; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // eax
  int v9; // ebx
  __int64 *v10; // r14
  __int64 v11; // rdx
  char v12; // dl
  const char *v13; // rax
  const char *v14; // r8
  __int64 v15; // rcx

  Status = a2->IoStatus.Status;
  v5 = 1;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options )
  {
    if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    {
LABEL_3:
      v5 = 0;
      Status = -1073741808;
      goto LABEL_18;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    switch ( LowPart )
    {
      case 1u:
        v9 = 1597002591;
        break;
      case 2u:
        v9 = 1597068127;
        break;
      case 3u:
        v9 = 1597133663;
        break;
      case 4u:
        v9 = 1597199199;
        break;
      default:
        if ( LowPart - 5 <= 1 )
        {
          Status = 0;
          goto LABEL_18;
        }
        goto LABEL_3;
    }
    v10 = (__int64 *)AMLIGetParent(DeviceExtension[89]);
    if ( AMLIIsNamedChildPresent(v10, v9) )
    {
      Status = 0;
    }
    else
    {
      v5 = 0;
      Status = -1073741808;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v10, v11);
  }
LABEL_18:
  v12 = 0;
  a2->IoStatus.Status = Status;
  v13 = (const char *)qword_1C002C340;
  v14 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v15 = DeviceExtension[1];
    v12 = (char)DeviceExtension;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)DeviceExtension[70];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)DeviceExtension[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x15u,
    (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
    (char)a2,
    Status,
    v12,
    v13,
    v14);
  if ( v5 )
    ACPIDispatchForwardPowerIrp(a1, a2);
  else
    IofCompleteRequest(a2, 0);
  return 259LL;
}
