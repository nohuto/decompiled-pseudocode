/*
 * XREFs of ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x1801673C4
 * Callers:
 *     ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165CC4 (-WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165E08 (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x180166F3C (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorTarget::WaitForVBlankInternal(CAnalogCompositorTarget *this, __int64 a2, void *a3)
{
  int v5; // eax
  DWORD v6; // ebx
  void *v7; // rax
  __int64 v8; // rcx
  BOOL v9; // esi
  int v10; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 20) || (v5 = CAnalogCompositorTarget::EnsureAnalogDisplay(this), v6 = v5, v5 >= 0) )
  {
    v7 = (void *)*((_QWORD *)this + 23);
    v8 = *((_QWORD *)this + 22);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE2u);
  }
  return v6;
}
