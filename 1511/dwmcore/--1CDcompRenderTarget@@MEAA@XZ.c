/*
 * XREFs of ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800B2CE0
 * Callers:
 *     ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800B2BB0 (--_ECDcompRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDcompRenderTarget::~CDcompRenderTarget(CDcompRenderTarget *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &CDcompRenderTarget::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 5) = 0LL;
  }
  CResource::~CResource(this);
}
