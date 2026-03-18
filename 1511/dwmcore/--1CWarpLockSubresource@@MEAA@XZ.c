/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x18001B144
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x18001AFA0 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x18001B000 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf
  __int64 v3; // rsi
  __int64 v4; // rsi

  v1 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 3));
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 2));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
