/*
 * XREFs of ??_GCPolygon@@UEAAPEAXI@Z @ 0x18011A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x18011A438 (--1CPolygon@@UEAA@XZ.c)
 */

CPolygon *__fastcall CPolygon::`scalar deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPolygon *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
