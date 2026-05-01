/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180027B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002248C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025290 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18002796C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>::Run(
        __int64 a1)
{
  const char *v2; // r9
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  _BYTE v8[16]; // [rsp+48h] [rbp-9h] BYREF
  void *Block; // [rsp+58h] [rbp+7h]
  char v10; // [rsp+60h] [rbp+Fh]
  _BYTE v11[24]; // [rsp+68h] [rbp+17h] BYREF
  int v12; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  void *v14; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 56),
    (wil::ActivityThreadWatcher *)v8);
  v2 = (const char *)*(unsigned int *)(a1 + 32);
  if ( (int)v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      v2);
    goto LABEL_16;
  }
  v14 = 0LL;
  if ( !*(_QWORD *)(a1 + 48)
    || (v3 = CMarshaledInterface::_Unmarshal(
               (CMarshaledInterface *)(a1 + 48),
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v14,
               1),
        v3 >= 0) )
  {
    v15 = 0LL;
    v4 = CoreQueryWindowService(
           *(_QWORD *)(a1 + 16),
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v15);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v15 + 48LL))(
             v15,
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 40),
             v14);
      if ( v4 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 56);
LABEL_12:
        v6 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        goto LABEL_14;
      }
      v5 = 199LL;
    }
    else
    {
      v5 = 198LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_16:
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  if ( v10 )
    free(Block);
}
