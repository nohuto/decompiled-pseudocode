/*
 * XREFs of ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18000CDB0
 * Callers:
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D120 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RoVariant::operator&(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  a2[1] = 0LL;
  result = a2;
  *a2 = a1;
  return result;
}
