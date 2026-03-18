/*
 * XREFs of ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x180075E50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x18011CEA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 */

void __fastcall CDesktopRenderTarget::DeleteComposeTopContent(CDesktopRenderTarget *this)
{
  CComposeTop *v2; // rcx

  v2 = (CComposeTop *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    CComposeTop::`scalar deleting destructor'(v2, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
}
