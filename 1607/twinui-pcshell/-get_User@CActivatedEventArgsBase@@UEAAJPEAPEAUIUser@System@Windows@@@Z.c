/*
 * XREFs of ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x18002CED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_User(RTL_SRWLOCK *this, struct Windows::System::IUser **a2)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // r14
  HRESULT v7; // eax
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = this + 11;
  AcquireSRWLockShared(this + 11);
  Ptr = this[10].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  *a2 = 0LL;
  if ( !Ptr )
    return 0LL;
  v14 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x18002D078LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v14);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v15 = 0LL;
    v10 = (**v14)(v14, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v15);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, PVOID, struct Windows::System::IUser **))(*(_QWORD *)v15 + 160LL))(
              v15,
              Ptr,
              a2);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = 0;
LABEL_14:
        v12 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        goto LABEL_16;
      }
      v11 = 246LL;
    }
    else
    {
      v11 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF1,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_16:
  string = 0LL;
  v13 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  }
  return v9;
}
