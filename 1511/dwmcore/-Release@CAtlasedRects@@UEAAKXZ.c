/*
 * XREFs of ?Release@CAtlasedRects@@UEAAKXZ @ 0x180025300
 * Callers:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800260C0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800269F0 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAtlasedRects::Release(CAtlasedRects *this)
{
  unsigned __int32 v1; // edi
  void *(__fastcall *v3)(CAtlasedRectsMesh *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(void *(__fastcall **)(CAtlasedRectsMesh *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == CAtlasedRectsMesh::`vector deleting destructor' )
    {
      CAtlasedRectsMesh::`vector deleting destructor'(this, 1u);
    }
    else if ( v3 == CAtlasedRectsGroup::`vector deleting destructor' )
    {
      CAtlasedRectsGroup::`vector deleting destructor'(this, 1u);
    }
    else
    {
      v3(this, 1u);
    }
  }
  return v1;
}
