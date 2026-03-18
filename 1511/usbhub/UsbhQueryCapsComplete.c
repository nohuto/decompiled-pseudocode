/*
 * XREFs of UsbhQueryCapsComplete @ 0x1C00265C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueryCapsComplete(PDEVICE_OBJECT DeviceObject, __int64 Irp, __int64 Context, __int64 a4)
{
  _DWORD *v5; // rdi
  _IO_SECURITY_CONTEXT *v6; // rcx
  __int128 v7; // xmm1

  v5 = FdoExt(Context, Irp, Context, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids,
      *(_DWORD *)(Irp + 48));
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  v6 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
  HIDWORD(v6->SecurityQos) |= 0x200u;
  *((_OWORD *)v5 + 312) = *(_OWORD *)&v6->SecurityQos;
  *((_OWORD *)v5 + 313) = *(_OWORD *)&v6->DesiredAccess;
  *((_OWORD *)v5 + 314) = *(_OWORD *)&v6[1].AccessState;
  v7 = *(_OWORD *)&v6[2].SecurityQos;
  v5[640] |= 0x200u;
  *((_OWORD *)v5 + 315) = v7;
  KeSetEvent((PRKEVENT)(v5 + 650), 0, 0);
  return *(unsigned int *)(Irp + 48);
}
