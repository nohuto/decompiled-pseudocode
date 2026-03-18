/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18004B2E0
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180043200 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004ABD8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget **this, unsigned int *a2)
{
  CHwFullScreenRenderTarget *v3; // rbx
  __int64 (__fastcall *v4)(CHwFullScreenRenderTarget *, unsigned int *); // rsi
  int LastPresentCount; // eax
  unsigned int v6; // ebx

  if ( *((_BYTE *)this + 523) || (v3 = this[6]) == 0LL )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x7A8u);
  }
  else
  {
    v4 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, unsigned int *))(*(_QWORD *)v3 + 224LL);
    if ( v4 == CHwFullScreenRenderTarget::GetLastPresentCount )
      LastPresentCount = CHwFullScreenRenderTarget::GetLastPresentCount(this[6], a2);
    else
      LastPresentCount = v4(this[6], a2);
    v6 = LastPresentCount;
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, LastPresentCount, 0x7A4u);
  }
  CHwndRenderTarget::HandleWindowErrors(this - 5, v6);
  return v6;
}
