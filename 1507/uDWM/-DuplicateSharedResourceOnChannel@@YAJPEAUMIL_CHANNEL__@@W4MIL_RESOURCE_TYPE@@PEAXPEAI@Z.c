/*
 * XREFs of ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x180009700
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000AC7C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BC5C (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003FA30 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800794D0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DuplicateSharedResourceOnChannel(
        struct MIL_CHANNEL__ *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  int ChannelKernelHandle; // ebx
  int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-14h] BYREF
  unsigned int v13[4]; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0;
  v11 = 0;
  ChannelKernelHandle = MilConnection_GetChannelKernelHandle(a1, v13);
  if ( ChannelKernelHandle >= 0 )
  {
    v9 = NtDCompositionReferenceSharedResourceOnDwmChannel(v13[0], a3, a2, &v12, &v11);
    ChannelKernelHandle = v9 | 0x10000000;
    if ( v9 >= 0 )
    {
      ChannelKernelHandle = MilResource_DuplicateHandleOnTarget(v12, v11, a2, a1, a4);
      if ( ChannelKernelHandle >= 0 )
      {
        ChannelKernelHandle = MilChannel_CommitChannel(a1);
        if ( ChannelKernelHandle < 0 )
        {
          MilResource_ReleaseOnChannel(a1, *a4, 0LL);
          *a4 = 0;
        }
      }
    }
  }
  return (unsigned int)ChannelKernelHandle;
}
