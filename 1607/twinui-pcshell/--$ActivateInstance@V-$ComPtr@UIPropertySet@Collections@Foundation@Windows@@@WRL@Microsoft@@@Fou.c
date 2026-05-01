/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E14
 * Callers:
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20 (--$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a2 = 0LL;
  v5 = RoActivateInstance(a1, &v7);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *a2 = v7;
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v5;
}
