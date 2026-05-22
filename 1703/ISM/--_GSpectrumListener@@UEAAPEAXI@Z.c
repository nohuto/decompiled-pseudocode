/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x180055210
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x180056428 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180056634 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
struct EventRegistrationToken *__fastcall SpectrumListener::`scalar deleting destructor'(
        struct EventRegistrationToken *this,
        char a2)
{
  __int64 value; // rcx
  __int64 v5; // rcx
  MPCHeadUpdateListener *Instance; // rax
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  this->value = (__int64)&SpectrumListener::`vftable';
  value = this[4].value;
  if ( value )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)value + 56LL))(value, this[5].value);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this[4].value + 72LL))(this[4].value, this[7].value);
  }
  this[2].value = 0LL;
  v5 = this[4].value;
  if ( v5 )
  {
    this[4].value = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Instance = MPCHeadUpdateListener::GetInstance();
  v7 = MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, this[6]);
  if ( v7 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
  v8 = this[4].value;
  if ( v8 )
  {
    this[4].value = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  HIDWORD(this[1].value) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
