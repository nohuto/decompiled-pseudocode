/*
 * XREFs of ??1CRectangleGeometry@@MEAA@XZ @ 0x1800654F8
 * Callers:
 *     ??_ECRectangleGeometry@@MEAAPEAXI@Z @ 0x180065090 (--_ECRectangleGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x1800581A0 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 */

void __fastcall CRectangleGeometry::~CRectangleGeometry(CRectangleGeometry *this)
{
  CRectangleShape *v1; // rbx
  CRectangleShape *(__fastcall *v3)(CRectangleShape *, char); // rsi

  v1 = (CRectangleShape *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &CRectangleGeometry::`vftable';
  if ( v1 )
  {
    v3 = **(CRectangleShape *(__fastcall ***)(CRectangleShape *, char))v1;
    if ( v3 == CRectangleShape::`vector deleting destructor' )
      CRectangleShape::`vector deleting destructor'(v1, 1);
    else
      v3(v1, 1);
  }
  CGeometry::~CGeometry(this);
}
