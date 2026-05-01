/*
 * XREFs of ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180002D10
 * Callers:
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002B34 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 *     ??$CreateGitHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@PEAPEAU342@@Z @ 0x18000C020 (--$CreateGitHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Fo.c)
 *     ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18000C760 (--1-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 0LL;
  if ( v1 )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_180022720 + 32LL))(qword_180022720, v1);
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
