/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001DA58
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18001DC24 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800837E0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180018AB0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002AE80 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 i; // rdi
  volatile signed __int32 *v3; // rcx
  CAtlasButton *(__fastcall *v4)(CAtlasButton *, char); // rax
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax

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
