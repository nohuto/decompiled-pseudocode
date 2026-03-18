/*
 * XREFs of ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C0078D88
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0078ED8 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z @ 0x1C007923C (-AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0079288 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x1C00793C0 (-SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D2A7C (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 */

__int64 __fastcall SetProcDeviceRequest(
        struct tagPROCESSINFO *a1,
        struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        unsigned int a4,
        int a5)
{
  struct tagPROCESS_HID_REQUEST *HidProcessRequest; // rdi
  int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rcx
  struct tagWND *v12; // r15
  unsigned int v13; // esi
  int v14; // eax

  HidProcessRequest = a3;
  v9 = IsLegacyDevice(*(_WORD *)a2, *((_WORD *)a2 + 1));
  if ( a5 )
  {
    v10 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *((_QWORD *)a2 + 1);
  if ( v11 )
  {
    v12 = (struct tagWND *)ValidateHwnd(v11);
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = 0;
  v14 = *((_DWORD *)a2 + 1) & 0xF0;
  switch ( v14 )
  {
    case 32:
      v13 = 2;
      break;
    case 16:
      v13 = 3;
      break;
    case 0:
    case 48:
      v13 = 1;
      break;
  }
  if ( !a3 )
  {
    HidProcessRequest = AllocateHidProcessRequest(*(_WORD *)a2, *((_WORD *)a2 + 1));
    if ( !HidProcessRequest )
    {
      UserSetLastError(8);
      return 0LL;
    }
  }
  if ( v10 )
    *((_QWORD *)HidProcessRequest + 5) = v10;
  if ( a3 )
  {
    RemoveProcRequest(a1, a3, a4, v9);
    HidProcessRequest = a3;
  }
  if ( !(unsigned int)InsertProcRequest(a1, a2, HidProcessRequest, v13, v9, v12, a5) )
  {
    if ( HidProcessRequest )
      Win32FreePool(HidProcessRequest);
    return 0LL;
  }
  if ( v9 )
    SetLegacyDeviceFlags(*((struct tagPROCESS_HID_TABLE **)a1 + 98), a2);
  return 1LL;
}
