/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18007C970
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180073FD0 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18007C248 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget **this, unsigned int *a2)
{
  CHwFullScreenRenderTarget *v3; // rbx
  __int64 (__fastcall *v4)(CHwFullScreenRenderTarget *, unsigned int *); // rsi
  int LastPresentCount; // eax
  unsigned int v6; // ebx

  if ( *((_BYTE *)this + 516) || (v3 = this[6]) == 0LL )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, 0x763u);
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
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, LastPresentCount, 0x75Fu);
  }
  CHwndRenderTarget::HandleWindowErrors(this - 5, v6);
  return v6;
}
