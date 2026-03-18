/*
 * XREFs of ??_GCMesh2DEffect@@MEAAPEAXI@Z @ 0x180168250
 * Callers:
 *     ??_ECMesh2DEffect@@OBA@EAAPEAXI@Z @ 0x1800BF620 (--_ECMesh2DEffect@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMesh2DEffect@@MEAA@XZ @ 0x180168174 (--1CMesh2DEffect@@MEAA@XZ.c)
 */

CMesh2DEffect *__fastcall CMesh2DEffect::`scalar deleting destructor'(CMesh2DEffect *this, char a2)
{
  CMesh2DEffect::~CMesh2DEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMesh2DEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
