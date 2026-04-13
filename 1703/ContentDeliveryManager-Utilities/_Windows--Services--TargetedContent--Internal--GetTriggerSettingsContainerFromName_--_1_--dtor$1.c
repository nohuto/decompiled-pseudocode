/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$1 @ 0x1800729D8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18001053C (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 72);
  }
  return result;
}
