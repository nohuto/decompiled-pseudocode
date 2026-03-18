/*
 * XREFs of UsbhPdoPnp_QueryBusInfo @ 0x1C0026CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryBusInfo(__int64 a1, IRP *a2)
{
  GUID *PoolWithTag; // rax
  unsigned int v4; // ebx

  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 15LL;
    v4 = 0;
    *PoolWithTag = GUID_BUS_TYPE_USB;
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
      v4);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
