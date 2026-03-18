/*
 * XREFs of UsbhResumeSuspendedPort @ 0x1C0025898
 * Callers:
 *     UsbhHandleSuspend @ 0x1C00257E8 (UsbhHandleSuspend.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhResumePort @ 0x1C002596C (UsbhResumePort.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  _DWORD *v16; // rax
  unsigned int v17; // r10d
  int v18; // r10d
  __int64 v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+48h] [rbp-10h]
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937549, a4, a3);
  FdoExt(a1, v8, v9, v10);
  if ( (a3 & 0x1A) == 0x18 && a5 )
  {
    v16 = PdoExt(a5, v11, v12, v13);
    v16[353] |= 0x2000u;
  }
  if ( (a3 & 2) == 0 || (a3 & 0x10) == 0 )
    goto LABEL_9;
  v14 = UsbhResumePort(a1, a4, &v21);
  v19 = *(unsigned __int16 *)(a4 + 4);
  if ( v14 < 0 )
  {
    Log(a1, 16, 1347568944, v14, v19);
    if ( !(unsigned __int8)Usb_Disconnected(v17) )
    {
      LOBYTE(v20) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 47, 0, 0, v18, v21, usbfile_busfunc_c, 3100, v20);
    }
LABEL_9:
    UsbhSignalResumeEvent(a1, a4);
    return 0LL;
  }
  Log(a1, 16, 2004111955, 0LL, v19);
  return 0LL;
}
