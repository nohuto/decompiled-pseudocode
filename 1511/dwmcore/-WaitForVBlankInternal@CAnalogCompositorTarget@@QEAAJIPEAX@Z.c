/*
 * XREFs of ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x18013D450
 * Callers:
 *     ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BAD4 (-WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BC8C (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58 (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorTarget::WaitForVBlankInternal(CAnalogCompositorTarget *this, __int64 a2, void *a3)
{
  int v5; // eax
  DWORD v6; // ebx
  void *v7; // rax
  __int64 v8; // rdi
  BOOL v9; // esi
  int v10; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 11) || (v5 = CAnalogCompositorTarget::EnsureAnalogDisplay(this), v6 = v5, v5 >= 0) )
  {
    v7 = (void *)*((_QWORD *)this + 14);
    v8 = *((_QWORD *)this + 13);
    Handles[1] = a3;
    Handles[0] = v7;
    v9 = a3 != 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, 0LL);
    v6 = v10;
    if ( v10 >= 0 && v10 != 142213121 )
    {
      v6 = WaitForMultipleObjects(v9 + 1, Handles, 0, 0x64u);
      if ( v6 == 258 )
        return 0;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF1u);
  }
  return v6;
}
