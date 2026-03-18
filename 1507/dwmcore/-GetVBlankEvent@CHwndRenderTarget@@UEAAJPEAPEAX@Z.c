/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18004B370
 * Callers:
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180067750 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x1800455A0 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwDisplayRenderTarget **this, void **a2)
{
  unsigned int v4; // esi
  CHwDisplayRenderTarget *v5; // rax
  CHwDisplayRenderTarget *v6; // rbx
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *, void **); // rdi
  int VBlankEvent; // eax

  v4 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(char *))*(this - 5) + 17))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 523)
      && (v5 = this[5], *((_BYTE *)v5 + 144))
      && *((_BYTE *)v5 + 145)
      && (v6 = this[6]) != 0LL )
    {
      v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, void **))(*(_QWORD *)v6 + 280LL);
      if ( v7 == CHwDisplayRenderTarget::GetVBlankEvent )
        VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(this[6], a2);
      else
        VBlankEvent = v7(this[6], a2);
      v4 = VBlankEvent;
      if ( VBlankEvent < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, VBlankEvent, 0x783u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, -2147467263, 0x787u);
    }
  }
  return v4;
}
