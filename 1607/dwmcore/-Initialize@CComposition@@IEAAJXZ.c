/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B7880 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AA198 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AA2E8 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800ADE70 (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B43B0 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CCounterManager@@CAJPEAPEAV1@@Z @ 0x1800B5440 (-Create@CCounterManager@@CAJPEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800B5EB0 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B63DC (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B72D0 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800B77DC (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B7B0C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800B7C60 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::Initialize(CComposition *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  struct IMessageSession *v8; // rsi
  CBitmapOfDeviceBitmaps *v9; // rcx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-38h]
  CBitmapOfDeviceBitmaps *v13; // [rsp+68h] [rbp+10h] BYREF
  void *v14; // [rsp+70h] [rbp+18h] BYREF
  void *v15; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v1 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !CCounterManager::s_pGlobalPerFrameCounterManager )
  {
    v3 = CCounterManager::Create((struct CCounterManager **)this);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCu);
  }
  if ( (v1 & 0x80000000) != 0 )
  {
    v12 = 178;
    v11 = v1;
  }
  else
  {
    v4 = CMonitorTreeAssociation::Create(this, (struct CMonitorTreeAssociation **)this + 3);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB4u);
      return v1;
    }
    v5 = CWindowManager::Create((struct CWindowManager **)this + 6);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB9u);
      return v1;
    }
    v6 = CMILFactory::Create(&v13);
    v1 = v6;
    if ( v6 < 0 )
    {
      v12 = 190;
    }
    else
    {
      v6 = CRenderTargetManager::Create(this, (struct CRenderTargetManager **)this + 4);
      v1 = v6;
      if ( v6 < 0 )
      {
        v12 = 195;
      }
      else
      {
        v6 = CSurfaceManager::Create(this, (struct CSurfaceManager **)this + 5, &v14, &v15);
        v1 = v6;
        if ( v6 < 0 )
        {
          v12 = 203;
        }
        else
        {
          v7 = *((_QWORD *)this + 64);
          *(_QWORD *)(v7 + 104) = v14;
          *(_QWORD *)(v7 + 128) = v15;
          v6 = CExpressionManager::Create((struct CExpressionManager **)this + 21);
          v1 = v6;
          if ( v6 < 0 )
          {
            v12 = 210;
          }
          else
          {
            v6 = CInputManager::Create(this, (struct CInputManager **)this + 7);
            v1 = v6;
            if ( v6 < 0 )
            {
              v12 = 215;
            }
            else
            {
              v6 = CManipulationManager::Create(this, (struct CManipulationManager **)this + 8);
              v1 = v6;
              if ( v6 < 0 )
              {
                v12 = 220;
              }
              else
              {
                v8 = *(struct IMessageSession **)(*((_QWORD *)this + 64) + 264LL);
                v6 = CMessageConversationHost::Create(v8, (struct CMessageConversationHost **)this + 154);
                v1 = v6;
                if ( v6 < 0 )
                {
                  v12 = 227;
                }
                else
                {
                  v6 = CEffectCompilationService::Create(v8, (struct CEffectCompilationService **)this + 9);
                  v1 = v6;
                  if ( v6 >= 0 )
                  {
                    v9 = v13;
                    *((_QWORD *)this + 2) = v13;
                    if ( v9 )
                      CBitmapOfDeviceBitmaps::AddRef(v9);
                    *(_OWORD *)((char *)this + 1144) = _xmm;
                    *(_OWORD *)((char *)this + 1160) = _xmm;
                    *(_OWORD *)((char *)this + 1176) = _xmm;
                    *(_OWORD *)((char *)this + 1192) = _xmm;
                    goto LABEL_18;
                  }
                  v12 = 232;
                }
              }
            }
          }
        }
      }
    }
    v11 = v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
LABEL_18:
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  return v1;
}
