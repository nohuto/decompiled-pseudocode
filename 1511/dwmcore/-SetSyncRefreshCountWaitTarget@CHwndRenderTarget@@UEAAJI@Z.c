/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18007CAF0
 * Callers:
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180090820 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x180081520 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwDisplayRenderTarget **this, unsigned int a2)
{
  unsigned int v4; // esi
  CHwDisplayRenderTarget *v5; // rax
  CHwDisplayRenderTarget *v6; // rbx
  int (*v7)(CHwDisplayRenderTarget *__hidden, unsigned int); // rdi
  int refreshed; // eax

  v4 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(char *))*(this - 5) + 18))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 516)
      && (v5 = this[5], *((_BYTE *)v5 + 299))
      && *((_BYTE *)v5 + 300)
      && (v6 = this[6]) != 0LL )
    {
      v7 = *(int (**)(CHwDisplayRenderTarget *__hidden, unsigned int))(*(_QWORD *)v6 + 280LL);
      if ( v7 == CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(this[6], a2);
      else
        refreshed = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, _QWORD))v7)(this[6], a2);
      v4 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, refreshed, 0x715u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, -2147467263, 0x719u);
    }
  }
  return v4;
}
