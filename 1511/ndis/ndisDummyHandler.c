/*
 * XREFs of ndisDummyHandler @ 0x1C009762C
 * Callers:
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C000B2C0 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C005EAFC (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ndisDummyIrpHandler @ 0x1C0097620 (ndisDummyIrpHandler.c)
 *     ndisWMIDispatch @ 0x1C009EDDC (ndisWMIDispatch.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(__int64, _IRP *); // rax

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
    goto LABEL_6;
  }
  if ( *a2 != 9
    || (v9 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48]) == 0LL )
  {
    v7 = -1073741637;
    goto LABEL_5;
  }
  v7 = v9(a1, a3);
LABEL_6:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, a3);
  return v7;
}
