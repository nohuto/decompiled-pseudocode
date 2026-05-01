/*
 * XREFs of ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180021604
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Initialize@CActivatedEventArgsBase@@UEAAJPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@PEAUISplashScreen@456@@Z @ 0x18002CB60 (-Initialize@CActivatedEventArgsBase@@UEAAJPEAUHSTRING__@@W4ApplicationExecutionState@Activation@.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180016448 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMarshaledInterface::Marshal(__int64 *a1, const struct _GUID *a2, struct IUnknown *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // edi
  bool v11; // zf
  DWORD CurrentThreadId; // eax
  __int64 v13; // rax

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a1 = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v8[3] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v11 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v8 = &CMarshaledInterface::CMarshalStream::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    v8[6] = 2;
    *((_QWORD *)v8 + 4) = 0LL;
    v8[10] = 0;
    CurrentThreadId = GetCurrentThreadId();
    v9[6] = 2;
    v9[10] = CurrentThreadId;
    v10 = AgileGitPtr::Initialize((AgileGitPtr *)(v9 + 8), a2, a3);
    v13 = *(_QWORD *)v9;
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v13 + 8))(v9);
      *a1 = (__int64)v9;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v13 + 16))(v9);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
