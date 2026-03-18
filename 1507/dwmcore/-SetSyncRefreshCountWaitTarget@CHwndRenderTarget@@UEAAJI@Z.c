/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18004B440
 * Callers:
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180067750 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x180045490 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwDisplayRenderTarget **this, unsigned int a2)
{
  unsigned int v4; // esi
  CHwDisplayRenderTarget *v5; // rax
  CHwDisplayRenderTarget *v6; // rbx
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *, unsigned int); // rdi
  int refreshed; // eax

  v4 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(char *))*(this - 5) + 17))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 523)
      && (v5 = this[5], *((_BYTE *)v5 + 144))
      && *((_BYTE *)v5 + 145)
      && (v6 = this[6]) != 0LL )
    {
      v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, unsigned int))(*(_QWORD *)v6 + 272LL);
      if ( v7 == CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(this[6], a2);
      else
        refreshed = v7(this[6], a2);
      v4 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, refreshed, 0x75Au);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, -2147467263, 0x75Eu);
    }
  }
  return v4;
}
