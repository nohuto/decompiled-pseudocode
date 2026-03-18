/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ @ 0x18013D270
 * Callers:
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x18013CD6C (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnalogCompositorTarget::ReleaseResourcesForDisplayChange(CAnalogCompositorTarget *this)
{
  CMILRefCountBase *v2; // rcx
  __int64 v3; // rsi
  void *v4; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
