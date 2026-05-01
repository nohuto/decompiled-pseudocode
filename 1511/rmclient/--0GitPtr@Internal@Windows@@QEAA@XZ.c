/*
 * XREFs of ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x180002E0C
 * Callers:
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180002D5C (--0-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@.c)
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x18000D090 (--0-$GitInvokeHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1800012C0 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 */

Windows::Internal::GitPtr *__fastcall Windows::Internal::GitPtr::GitPtr(Windows::Internal::GitPtr *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  *((_DWORD *)this + 3) = Windows::Internal::Details::Git::Acquire(this);
  *(_QWORD *)this = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  return this;
}
