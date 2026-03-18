/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180074830
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x18008F640 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  CHwDisplayRenderTarget *v6; // rcx
  int (*v7)(CHwDisplayRenderTarget *__hidden, void **); // rax
  int VBlankEvent; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 14) + 152LL))((char *)this - 112) )
  {
    if ( !*((_BYTE *)this + 637)
      && (v5 = *((_QWORD *)this + 5), *(_BYTE *)(v5 + 299))
      && *(_BYTE *)(v5 + 300)
      && (v6 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 6)) != 0LL )
    {
      v7 = *(int (**)(CHwDisplayRenderTarget *__hidden, void **))(*(_QWORD *)v6 + 304LL);
      if ( v7 == CHwDisplayRenderTarget::GetVBlankEvent )
        VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(v6, a2);
      else
        VBlankEvent = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, void **))v7)(v6, a2);
      v4 = VBlankEvent;
      if ( VBlankEvent < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B0A20, 2u, VBlankEvent, 0x74Cu);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_1801B0A20, 2u, -2147467263, 0x750u);
    }
  }
  return v4;
}
