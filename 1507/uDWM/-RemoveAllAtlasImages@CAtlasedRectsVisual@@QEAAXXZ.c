/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001B628
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18001B7B4 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180019140 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x180028500 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 i; // rsi
  volatile signed __int32 *v3; // rdi
  CAtlasButton *(__fastcall *v4)(CAtlasButton *, char); // rbp
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    v3 = *(volatile signed __int32 **)(*((_QWORD *)this + 33) + 8 * i);
    *((_QWORD *)v3 + 10) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = **(CAtlasButton *(__fastcall ***)(CAtlasButton *, char))v3;
      if ( (char *)v4 == (char *)CAtlasedImage::`vector deleting destructor' )
      {
        CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v3, 1u);
      }
      else if ( v4 == CAtlasButton::`scalar deleting destructor' )
      {
        CAtlasButton::`scalar deleting destructor'((CAtlasButton *)v3, 1);
      }
      else
      {
        v4((CAtlasButton *)v3, 1);
      }
    }
  }
  *((_DWORD *)this + 72) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 264, 8LL);
  v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v5(this, 0x2000u);
}
