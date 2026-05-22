/*
 * XREFs of ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x1800565A0
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180054F3C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180077984 (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIHeadEventHandler@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180056B30 (-AddInternal@-$EventSource@UIHeadEventHandler@@U-$InvokeModeOptions@$0-1@WRL@Microsoft@@@WRL@Mic.c)
 */

__int64 __fastcall MPCHeadUpdateListener::AddHeadEventOccurred(
        MPCHeadUpdateListener *this,
        struct IHeadEventHandler *a2,
        struct EventRegistrationToken *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = Microsoft::WRL::EventSource<IHeadEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
         this,
         a2,
         *(_QWORD *)(*(_QWORD *)a2 + 24LL),
         a3);
  if ( v7 < 0 )
    goto LABEL_4;
  v7 = 0;
LABEL_6:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
