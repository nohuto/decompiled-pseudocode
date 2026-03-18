/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x180011D00
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180011BB0 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180011C08 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
