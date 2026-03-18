/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801453F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801452A0 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  struct IMessageCallSendHost *v2; // rbx
  int ManipulationManager; // eax
  unsigned int v4; // edi
  CManipulationManager *v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  struct _D3DMATRIX v10; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+F0h] [rbp+67h] BYREF
  CManipulationManager *v12; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v13; // [rsp+100h] [rbp+77h] BYREF
  __int64 v14; // [rsp+108h] [rbp+7Fh] BYREF

  v12 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v12);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x1F6u);
  }
  else
  {
    v5 = v12;
    v6 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v12, &v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1F8u);
      goto LABEL_9;
    }
    v7 = *((unsigned int *)v5 + 88);
    if ( !(_DWORD)v7 )
    {
      v4 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1FBu);
LABEL_9:
      v2 = v11;
      goto LABEL_11;
    }
    (**(void (__fastcall ***)(CInteraction *))this)(this);
    CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 908), &v10);
    v14 = v7;
    v2 = v11;
    v13 = this;
    v8 = CoreUICallSend(v11, &v14, 1LL, 4LL, 3, &unk_1801AD3C2, (unsigned int)&v13);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x204u);
    else
      SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 512LL) + 96LL));
  }
LABEL_11:
  if ( v2 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
  return v4;
}
