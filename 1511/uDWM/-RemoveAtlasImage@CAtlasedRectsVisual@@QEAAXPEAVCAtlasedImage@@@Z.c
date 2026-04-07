/*
 * XREFs of ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180020400
 * Callers:
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002C378 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAtlasImage(CAtlasedRectsVisual *this, struct CAtlasedImage *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r10
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rdi
  __int64 v8; // rdx

  v4 = 0LL;
  v5 = *((_DWORD *)this + 72);
  v6 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    do
    {
      if ( a2 == *(struct CAtlasedImage **)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    if ( (unsigned int)v4 < v5 - 1 )
    {
      do
      {
        v8 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8 * v8);
        v4 = v8;
      }
      while ( (unsigned int)v8 < *((_DWORD *)this + 72) - 1 );
    }
    --*((_DWORD *)this + 72);
  }
  *((_QWORD *)a2 + 10) = 0LL;
  CBaseObject::Release(a2);
  v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v7 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v7(this, 0x2000u);
}
