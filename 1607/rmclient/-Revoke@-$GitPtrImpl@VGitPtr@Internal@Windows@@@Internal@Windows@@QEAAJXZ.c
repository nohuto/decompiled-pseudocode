/*
 * XREFs of ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x1800012B4
 * Callers:
 *     ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x1800012F4 (--1-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1800166A8 + 32LL))(qword_1800166A8);
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
