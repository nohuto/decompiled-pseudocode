/*
 * XREFs of PostDeviceNotification @ 0x1C00790B0
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0078ED8 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01453D0 (Win32kRIMDevChangeCallback.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C0078B5C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0079340 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     PostPointerEventMessage @ 0x1C0155090 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C0229254 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  struct tagPROCESS_HID_TABLE *v8; // rbx
  __int16 v9; // bp
  __int16 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r15d
  struct tagPROCESS_HID_TABLE *v13; // rax
  struct tagPROCESS_HID_REQUEST *v14; // rax

  if ( aDeviceTemplate[308] )
    v8 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  else
    v8 = qword_1C0328810;
  v9 = 0;
  v10 = 0;
  if ( *((_BYTE *)a2 + 48) )
  {
    if ( *((_BYTE *)a2 + 48) == 1 )
    {
      v9 = 1;
      v10 = 6;
    }
    else if ( *((_BYTE *)a2 + 48) == 2 )
    {
      v11 = *((_QWORD *)a2 + 50);
      v9 = *(_WORD *)(v11 + 42);
      v10 = *(_WORD *)(v11 + 40);
    }
  }
  else
  {
    v9 = 1;
    v10 = 2;
  }
  v12 = 0;
  if ( *((_DWORD *)a2 + 79) )
  {
    if ( a4 == 2 )
      Edgy::OnDeviceRemoval(*(Edgy **)a2, 0LL);
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 52), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v12 = 712;
      }
      else if ( a4 == 2 )
      {
        v12 = 713;
      }
      PostMessage(-1LL, v12);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v10 && *((_WORD *)a1 + 8) == v9 )
      PostHidNotification(a1, a2, 0xFEu, a4);
  }
  else
  {
    while ( 1 )
    {
      v13 = (struct tagPROCESS_HID_TABLE *)(aDeviceTemplate[308]
                                          ? &RawInputManagerObject::gHidRequestTable[4]
                                          : &qword_1C0328810);
      if ( v8 == v13 )
        break;
      v14 = InProcessDeviceTypeRequestTable(v8, v9, v10);
      if ( v14 )
        PostHidNotification(v14, a2, 0xFEu, a4);
      v8 = *(struct tagPROCESS_HID_TABLE **)v8;
    }
  }
}
