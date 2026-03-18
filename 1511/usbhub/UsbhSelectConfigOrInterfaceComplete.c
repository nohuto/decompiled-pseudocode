/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1C001F190
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C00094D4 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x1C003B528 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C8D4 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(
        PDEVICE_OBJECT DeviceObject,
        __int64 Irp,
        __int64 Context,
        __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _IO_SECURITY_CONTEXT *v15; // rsi
  __int64 PortData; // r15
  unsigned int *v17; // rbp
  unsigned int *i; // rsi

  v6 = PdoExt(Context, Irp, Context, a4);
  FdoExt(*((_QWORD *)v6 + 147), v7, v8, v9);
  v10 = *((unsigned __int16 *)v6 + 710);
  v11 = *((_QWORD *)v6 + 147);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v15 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v11, v10);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710));
    if ( PortData )
    {
      v13 = 2147485440LL;
      if ( HIDWORD(v15->SecurityQos) == -2147481856 )
      {
        UsbhSetOutOfBandwidthTimer(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), *(unsigned int *)(Irp + 48));
        *(_DWORD *)(PortData + 436) = 0;
        if ( WORD1(v15->SecurityQos) )
        {
          if ( WORD1(v15->SecurityQos) == 1 )
            *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                            *((_QWORD *)v6 + 147),
                                            Context,
                                            &v15[1].AccessState);
        }
        else
        {
          v17 = (unsigned int *)((char *)v15 + LOWORD(v15->SecurityQos));
          for ( i = &v15[1].DesiredAccess; i < v17; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
            *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v6 + 147), Context, i);
        }
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v11, v10);
  }
  UsbhDecPdoIoCount(Context, Irp, v12, v13);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
