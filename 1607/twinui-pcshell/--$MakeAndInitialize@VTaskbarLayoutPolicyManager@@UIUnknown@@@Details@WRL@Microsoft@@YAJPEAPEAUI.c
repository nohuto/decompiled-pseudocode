/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800089F4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180008960 (-CreateInstance@-$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUI.c)
 * Callees:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180005B08 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutPolicyManager,IUnknown>(_QWORD *a1)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  int v5; // esi

  *a1 = 0LL;
  v2 = 0LL;
  v3 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,ITaskbarLayoutPolicyManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = v3;
    }
    *(_QWORD *)v4 = &TaskbarLayoutPolicyManager::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    VariantInit((VARIANTARG *)(v4 + 16));
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 13) = 0LL;
    *((_QWORD *)v4 + 14) = 0LL;
    v2 = v4;
    v5 = TaskbarLayoutPolicyManager::RuntimeClassInitialize((TaskbarLayoutPolicyManager *)v4);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v5;
}
