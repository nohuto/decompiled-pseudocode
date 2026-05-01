/*
 * XREFs of ?Release@ModernResourceManagerProxy@@UEAAKXZ @ 0x18000F600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::Release(ModernResourceManagerProxy *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceManagerProxy *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
  return v1;
}
