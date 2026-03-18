/*
 * XREFs of UsbhBusSuspend_Action @ 0x1C0004A20
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C0021A9C (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C000A590 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhBusSuspend_Action(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 result; // rax
  int v6; // r9d
  unsigned __int16 i; // bx
  int PortState; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+90h] [rbp+18h]
  int v14; // [rsp+98h] [rbp+20h]

  v4 = FdoExt(a1);
  result = Log(a1, 2048, 1114862963, 0, 0LL);
  if ( *(_DWORD *)(v4 + 4216) != v6 )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      PortState = UsbhQueryPortState(a1);
      if ( PortState < 0 )
      {
        if ( !(unsigned __int8)Usb_Disconnected((unsigned int)PortState) )
        {
          LOBYTE(v12) = 0;
          UsbhException(a1, i, 78, 0, 0, v11, v14, usbfile_busm_c, 1198, v12);
          *(_DWORD *)(v4 + 4216) = 2;
        }
      }
      else if ( (v13 & 7) == 3 )
      {
        v9 = UsbhLatchPdo(a1, i, 0LL, 1180976179LL);
        v10 = v9;
        if ( !v9 || !*(_DWORD *)(PdoExt(v9) + 2776) )
          UsbhPCE_Suspend(a1, a2, i);
        if ( v10 )
          UsbhUnlatchPdo(a1, v10, 0LL, 1180976179LL);
      }
    }
  }
  return result;
}
