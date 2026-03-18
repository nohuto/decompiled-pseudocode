/*
 * XREFs of PostDeviceNotification @ 0x1C00E24AC
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00E22D4 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00E1E9C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00E275C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     PostPointerEventMessage @ 0x1C00E4A50 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C00E58A4 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

_QWORD *__fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  _QWORD *result; // rax
  unsigned __int64 v8; // rdx
  __int16 v10; // bp
  __int16 v11; // r14
  struct tagPROCESS_HID_TABLE *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  struct tagPROCESS_HID_REQUEST *v15; // rax
  unsigned int v16; // r8d

  result = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v8 = *((unsigned __int8 *)a2 + 48);
  v10 = 0;
  v11 = 0;
  v12 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  v13 = 1;
  if ( (_DWORD)v8 )
  {
    v8 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        result = (_QWORD *)*((_QWORD *)a2 + 58);
        v10 = *((_WORD *)result + 21);
        v11 = *((_WORD *)result + 20);
      }
    }
    else
    {
      v10 = 1;
      v11 = 6;
    }
  }
  else
  {
    v10 = 1;
    v11 = 2;
  }
  v14 = 0;
  if ( *((_DWORD *)a2 + 79) )
  {
    if ( a4 == 2 )
    {
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)v8);
      result = (_QWORD *)*((_QWORD *)&xmmword_1C0331C50 + 1);
      if ( *((_QWORD *)&xmmword_1C0331C50 + 1) && *((_QWORD *)&xmmword_1C0331C50 + 1) == *(_QWORD *)a2 )
      {
        v13 = 1;
        *((_QWORD *)&xmmword_1C0331C50 + 1) = 0LL;
        if ( !(_DWORD)xmmword_1C0331C60 )
        {
          *(_QWORD *)&xmmword_1C0331C50 = 0LL;
          *(&gPalmRejectData + 1) = 0;
        }
      }
      else
      {
        v13 = 1;
      }
    }
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 60), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v14 = 712;
      }
      else if ( a4 == 2 )
      {
        v14 = 713;
      }
      result = (_QWORD *)PostMessage(-1LL, v14, a5, 0LL);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v11 && *((_WORD *)a1 + 8) == v10 )
      return (_QWORD *)PostHidNotification(a1, a2, v13, a4);
  }
  else
  {
    while ( 1 )
    {
      result = &RawInputManagerObject::gHidRequestTable[4];
      if ( v12 == (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
        break;
      v15 = InProcessDeviceTypeRequestTable(v12, v10, v11);
      if ( v15 )
        PostHidNotification(v15, a2, v16, a4);
      v12 = *(struct tagPROCESS_HID_TABLE **)v12;
    }
  }
  return result;
}
