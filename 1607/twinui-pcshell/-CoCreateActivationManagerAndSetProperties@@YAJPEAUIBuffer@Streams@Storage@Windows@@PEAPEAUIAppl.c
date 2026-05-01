/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180029230
 * Callers:
 *     ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20 (--$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x180029180 (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IApplicationActivationManagerPriv *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v10; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManagerShim,
               0LL,
               0x404u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&v10);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 48LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance);
    v7 = (struct IApplicationActivationManagerPriv *)v10;
    goto LABEL_10;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(v10, a1);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 52LL;
      goto LABEL_6;
    }
  }
  v7 = (struct IApplicationActivationManagerPriv *)v10;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->AddRef)(v10);
    v7 = (struct IApplicationActivationManagerPriv *)v10;
  }
  *a2 = v7;
  v5 = 0;
LABEL_10:
  if ( v7 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
