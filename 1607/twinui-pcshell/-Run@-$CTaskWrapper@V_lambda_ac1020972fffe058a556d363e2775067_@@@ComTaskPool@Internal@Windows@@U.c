/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180015810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac1020972fffe058a556d363e2775067_>::Run()
{
  HRESULT v0; // eax
  __int64 v1; // rdx
  LPVOID v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v0 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x404u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v4);
  if ( v0 >= 0 )
  {
    v0 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, 0LL);
    if ( v0 >= 0 )
      goto LABEL_6;
    v1 = 1201LL;
  }
  else
  {
    v1 = 1199LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v1,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v0);
LABEL_6:
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
