/*
 * XREFs of ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180082920
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0InputRedirectionComponent@@IEAA@XZ @ 0x18008247C (--0InputRedirectionComponent@@IEAA@XZ.c)
 *     ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180082770 (-Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::Create(
        struct IInputDeviceInfoStore *a1,
        struct IInputTargetingComponent **a2)
{
  int v4; // ebx
  int v5; // r9d
  InputRedirectionComponent *v6; // rax
  InputRedirectionComponent *v7; // rbx
  InputRedirectionComponent *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v6 = (InputRedirectionComponent *)malloc(0x80uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x80uLL);
    if ( v7 )
      v8 = InputRedirectionComponent::InputRedirectionComponent(v7);
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v4;
      v5 = 97;
      goto LABEL_4;
    }
    v9 = InputRedirectionComponent::Initialize(v8, a1);
    v4 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 100, v9);
    }
    if ( v4 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 3) + 24LL))((__int64)v8 + 24, 1LL);
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 90;
LABEL_4:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return (unsigned int)v4;
}
