/*
 * XREFs of ndisDummyHandler @ 0x1C00D09F8
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0003150 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C00575C4 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C005F19C (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 *     ndisWMIDispatch @ 0x1C00A7D9C (ndisWMIDispatch.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( *a2 == 9 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48];
      if ( v8 )
      {
        v7 = v8(a1, a3);
        goto LABEL_10;
      }
    }
    v7 = -1073741637;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 2);
LABEL_10:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a3);
  return v7;
}
