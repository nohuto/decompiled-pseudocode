/*
 * XREFs of ??1CDcompRenderTarget@@MEAA@XZ @ 0x180060C40
 * Callers:
 *     ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x180060BD0 (--_ECDcompRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
