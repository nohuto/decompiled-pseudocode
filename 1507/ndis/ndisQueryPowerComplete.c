/*
 * XREFs of ndisQueryPowerComplete @ 0x1C0010F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisQueryPowerComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  char v7; // al
  _IRP *v8; // rbx

  Status = IoStatus->Status;
  v7 = byte_1C0085315;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    WPP_SF_qD(31LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context, (unsigned int)Status);
    v7 = byte_1C0085315;
  }
  if ( Status < 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(32LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context, (unsigned int)IoStatus->Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&QueryPowerComplete,
        (_DWORD)Context + 4064,
        (_DWORD)Context + 4064,
        *((_DWORD *)Context + 1028),
        *((_QWORD *)Context + 510),
        IoStatus->Status);
  }
  v8 = (_IRP *)*((_QWORD *)Context + 97);
  v8->IoStatus.Status = Status;
  IofCompleteRequest(v8, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4176), v8, 0x20u);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(33LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context);
}
