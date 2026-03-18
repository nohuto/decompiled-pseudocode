/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z @ 0x1801465F0
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180145D34 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180145E0C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CComposition **this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3)
{
  int ManipulationManager; // eax
  unsigned int v7; // ebx
  struct CManipulationManager *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct CManipulationManager *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v12);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x1B5u);
  }
  else
  {
    v8 = v12;
    *a2 = 0LL;
    if ( !*((_QWORD *)v8 + 45) )
      goto LABEL_6;
    v9 = *((_QWORD *)v8 + 45);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *a2 = (struct IMessageCallSendHost *)*((_QWORD *)v8 + 45);
    if ( *((_QWORD *)v8 + 45) )
    {
      v10 = *((_DWORD *)v8 + 82);
      *a3 = v10;
      if ( v10 )
      {
        v7 = 0;
      }
      else
      {
        v7 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1B9u);
      }
    }
    else
    {
LABEL_6:
      v7 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1B7u);
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
  return v7;
}
