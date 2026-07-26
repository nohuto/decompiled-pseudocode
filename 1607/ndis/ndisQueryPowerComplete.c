/*
 * XREFs of ndisQueryPowerComplete @ 0x1C00129F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
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
  v7 = byte_1C00895D5;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_qD(31LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context, (unsigned int)Status);
    v7 = byte_1C00895D5;
  }
  if ( Status < 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(32LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context, (unsigned int)IoStatus->Status);
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
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(33LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context);
}
