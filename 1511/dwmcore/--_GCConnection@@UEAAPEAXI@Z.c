/*
 * XREFs of ??_GCConnection@@UEAAPEAXI@Z @ 0x1800FF550
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800B445C (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ??_ECConnection@@W7EAAPEAXI@Z @ 0x1800BC950 (--_ECConnection@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800FF4C4 (--1CConnection@@UEAA@XZ.c)
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
