/*
 * XREFs of ?AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180105BCC
 * Callers:
 *     ?AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z @ 0x180106B10 (-AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMovedVisuals(CHwndRenderTarget *this, struct CVisual *a2)
{
  unsigned int v2; // esi
  struct CVisual **v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v9; // eax
  struct CVisual *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v3 = (struct CVisual **)*((_QWORD *)this + 59);
  for ( i = 0; i < *((_DWORD *)this + 124); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 124) )
  {
    v5 = *((_DWORD *)this + 124);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17Bu);
      return v2;
    }
    if ( v6 > *((_DWORD *)this + 123) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 472, 8, 1, &v10);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      v2 = v7;
      if ( v7 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 59) + 8LL * *((unsigned int *)this + 124)) = v10;
      *((_DWORD *)this + 124) = v6;
    }
    (*(void (__fastcall **)(struct CVisual *, _QWORD, struct CVisual **))(*(_QWORD *)v10 + 8LL))(
      v10,
      *(_QWORD *)v10,
      v3);
  }
  return v2;
}
