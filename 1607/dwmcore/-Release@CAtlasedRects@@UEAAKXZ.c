/*
 * XREFs of ?Release@CAtlasedRects@@UEAAKXZ @ 0x18009BC80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18009C9C0 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18009D0E0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRects::Release(CAtlasedRects *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CAtlasedRectsMesh *__hidden, unsigned int); // rax

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
