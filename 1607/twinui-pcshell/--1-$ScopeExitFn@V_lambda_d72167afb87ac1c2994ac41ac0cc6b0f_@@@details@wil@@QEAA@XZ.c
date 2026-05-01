/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_d72167afb87ac1c2994ac41ac0cc6b0f_@@@details@wil@@QEAA@XZ @ 0x180013D14
 * Callers:
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180031016 (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010860 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_d72167afb87ac1c2994ac41ac0cc6b0f_>::~ScopeExitFn<_lambda_d72167afb87ac1c2994ac41ac0cc6b0f_>(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)(*(_QWORD *)a1 + 72LL));
  }
  return result;
}
