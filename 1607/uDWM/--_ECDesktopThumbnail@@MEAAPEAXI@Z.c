/*
 * XREFs of ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x180096780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009660C (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CDesktopThumbnail *__fastcall CDesktopThumbnail::`vector deleting destructor'(CDesktopThumbnail *this, char a2)
{
  *(_QWORD *)this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 304);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopThumbnail *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
