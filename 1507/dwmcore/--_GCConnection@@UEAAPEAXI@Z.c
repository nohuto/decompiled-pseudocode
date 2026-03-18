/*
 * XREFs of ??_GCConnection@@UEAAPEAXI@Z @ 0x1800E0E30
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18009432C (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ??_ECConnection@@W7EAAPEAXI@Z @ 0x180099C30 (--_ECConnection@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800E0DA4 (--1CConnection@@UEAA@XZ.c)
 */

CConnection *__fastcall CConnection::`scalar deleting destructor'(CConnection *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CConnection::~CConnection(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CConnection *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
