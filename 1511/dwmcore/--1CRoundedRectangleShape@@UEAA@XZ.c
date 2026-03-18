/*
 * XREFs of ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1801590F4
 * Callers:
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x180159190 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CRoundedRectangleShape::~CRoundedRectangleShape(CRoundedRectangleShape *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 7);
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &CShape::`vftable';
}
