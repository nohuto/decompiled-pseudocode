/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x180094E24 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092134 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180092228 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092670 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18009316C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180093B18 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180093CCC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180093F18 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x18009405C (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x18009413C (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18009421C (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xAFu);
  }
  else
  {
    v4 = CWindowManager::Create(this + 6);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB4u);
    }
    else
    {
      v5 = CMILFactory::Create(&v17);
      v6 = v17;
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB9u);
      }
      else
      {
        v7 = CRenderTargetManager::Create((struct CComposition *)this, this + 4);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBEu);
        }
        else
        {
          v8 = CSurfaceManager::Create((struct CComposition *)this, this + 5, &v18, &v19);
          v3 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC6u);
          }
          else
          {
            v9 = this[63];
            *((_QWORD *)v9 + 12) = v18;
            *((_QWORD *)v9 + 14) = v19;
            v10 = CExpressionManager::Create(this + 21);
            v3 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xCCu);
            }
            else
            {
              v11 = CInputManager::Create((struct CComposition *)this, this + 7);
              v3 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD1u);
              }
              else
              {
                v12 = CManipulationManager::Create((struct CComposition *)this, this + 8);
                v3 = v12;
                if ( v12 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD6u);
                }
                else
                {
                  v13 = (struct IMessageSession *)*((_QWORD *)this[63] + 31);
                  v14 = CMessageConversationHost::Create(v13, this + 145);
                  v3 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDDu);
                  }
                  else
                  {
                    v15 = CEffectCompilationService::Create(v13, this + 9);
                    v3 = v15;
                    if ( v15 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE2u);
                    }
                    else
                    {
                      this[2] = v6;
                      if ( v6 )
                        CBitmapOfDeviceBitmaps::AddRef(v6);
                      *((_OWORD *)this + 67) = _xmm;
                      *((_OWORD *)this + 68) = _xmm;
                      *((_OWORD *)this + 69) = _xmm;
                      *((_OWORD *)this + 70) = _xmm;
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
