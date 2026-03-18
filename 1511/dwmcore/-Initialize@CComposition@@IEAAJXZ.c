/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B4614 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x18006A340 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8CC8 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8E54 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800AB2BC (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800B2224 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B2798 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B2E2C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B3D90 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B47DC (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800B49E8 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::Initialize(struct CMonitorTreeAssociation **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  CBitmapOfDeviceBitmaps *v6; // rsi
  int v7; // eax
  int v8; // eax
  struct CMonitorTreeAssociation *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct IMessageSession *v13; // rbp
  int v14; // eax
  int v15; // eax
  CBitmapOfDeviceBitmaps *v17; // [rsp+50h] [rbp+8h] BYREF
  void *v18; // [rsp+58h] [rbp+10h] BYREF
  void *v19; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v2 = CMonitorTreeAssociation::Create((struct CComposition *)this, this + 3);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB2u);
  }
  else
  {
    v4 = CWindowManager::Create(this + 6);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB7u);
    }
    else
    {
      v5 = CMILFactory::Create(&v17);
      v6 = v17;
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xBCu);
      }
      else
      {
        v7 = CRenderTargetManager::Create((struct CComposition *)this, this + 4);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC1u);
        }
        else
        {
          v8 = CSurfaceManager::Create((struct CComposition *)this, this + 5, &v18, &v19);
          v3 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC9u);
          }
          else
          {
            v9 = this[63];
            *((_QWORD *)v9 + 13) = v18;
            *((_QWORD *)v9 + 15) = v19;
            v10 = CExpressionManager::Create(this + 21);
            v3 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xCFu);
            }
            else
            {
              v11 = CInputManager::Create((struct CComposition *)this, this + 7);
              v3 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD4u);
              }
              else
              {
                v12 = CManipulationManager::Create((struct CComposition *)this, this + 8);
                v3 = v12;
                if ( v12 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD9u);
                }
                else
                {
                  v13 = (struct IMessageSession *)*((_QWORD *)this[63] + 32);
                  v14 = CMessageConversationHost::Create(v13, this + 141);
                  v3 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE0u);
                  }
                  else
                  {
                    v15 = CEffectCompilationService::Create(v13, this + 9);
                    v3 = v15;
                    if ( v15 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE5u);
                    }
                    else
                    {
                      this[2] = v6;
                      if ( v6 )
                        CBitmapOfDeviceBitmaps::AddRef(v6);
                      *((_OWORD *)this + 65) = _xmm;
                      *((_OWORD *)this + 66) = _xmm;
                      *((_OWORD *)this + 67) = _xmm;
                      *((_OWORD *)this + 68) = _xmm;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v6 )
        CMILCOMBase::InternalRelease(v6);
    }
  }
  return v3;
}
