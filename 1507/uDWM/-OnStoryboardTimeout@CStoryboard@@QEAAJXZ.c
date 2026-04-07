/*
 * XREFs of ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x180091CF4
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000BB40 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F670 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800905F0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::OnStoryboardTimeout(CStoryboard *this)
{
  int v1; // ebx

  v1 = 0;
  if ( !*((_DWORD *)this + 6) )
  {
    *((_BYTE *)this + 76) = 1;
    if ( *((_BYTE *)this + 68) )
    {
      v1 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 72LL))(this);
    }
    else
    {
      CStoryboard::_EnumerateWindows(this, 2u);
      CStoryboard::Abandon(this);
    }
    if ( v1 < 0 )
      CStoryboard::Abandon(this);
  }
  return (unsigned int)v1;
}
