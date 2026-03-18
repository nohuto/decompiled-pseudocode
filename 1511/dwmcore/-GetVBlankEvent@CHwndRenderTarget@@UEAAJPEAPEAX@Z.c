/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18007CA10
 * Callers:
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180090820 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x180081650 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwDisplayRenderTarget **this, void **a2)
{
  unsigned int v4; // esi
  CHwDisplayRenderTarget *v5; // rax
  CHwDisplayRenderTarget *v6; // rbx
  int (*v7)(CHwDisplayRenderTarget *__hidden, void **); // rdi
  int VBlankEvent; // eax

  v4 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(char *))*(this - 5) + 18))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 516)
      && (v5 = this[5], *((_BYTE *)v5 + 299))
      && *((_BYTE *)v5 + 300)
      && (v6 = this[6]) != 0LL )
    {
      v7 = *(int (**)(CHwDisplayRenderTarget *__hidden, void **))(*(_QWORD *)v6 + 288LL);
      if ( v7 == CHwDisplayRenderTarget::GetVBlankEvent )
        VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(this[6], a2);
      else
        VBlankEvent = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, void **))v7)(this[6], a2);
      v4 = VBlankEvent;
      if ( VBlankEvent < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, VBlankEvent, 0x73Eu);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, -2147467263, 0x742u);
    }
  }
  return v4;
}
