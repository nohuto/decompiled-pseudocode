/*
 * XREFs of ?Release@CAtlasedRects@@UEAAKXZ @ 0x180070290
 * Callers:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x180016C50 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18006F300 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::Release(CAtlasedRects *this)
{
  unsigned __int32 v1; // edi
  CAtlasedRectsGroup *(__fastcall *v3)(CAtlasedRectsGroup *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CAtlasedRectsGroup *(__fastcall **)(CAtlasedRectsGroup *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CAtlasedRectsMesh::`vector deleting destructor' )
    {
      CAtlasedRectsMesh::`vector deleting destructor'(this, 1);
    }
    else if ( v3 == CAtlasedRectsGroup::`vector deleting destructor' )
    {
      CAtlasedRectsGroup::`vector deleting destructor'(this, 1);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
