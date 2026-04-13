/*
 * XREFs of ??$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004001C
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18003F8E0 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentContainerStatics>(
        const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rdi
  __int64 v3; // rcx
  int ActivationFactory; // eax
  const WCHAR *v6[4]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v7; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6[2] = (const WCHAR *)-2LL;
  v6[3] = a1;
  v6[0] = L"Windows.Services.TargetedContent.TargetedContentContainer";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6);
  v3 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  return a1;
}
