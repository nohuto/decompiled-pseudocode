/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002248C
 * Callers:
 *     _lambda_013c46c4876e793d779fba5076862f22_::operator() @ 0x18001E058 (_lambda_013c46c4876e793d779fba5076862f22_--operator().c)
 *     ?Run@?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180027B70 (-Run@-$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@U.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x18002CAD0 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int InterfaceAndReleaseStream; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  IStream *v10; // rcx

  *a3 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v7 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v8 = 0LL;
    if ( a4 || v7[6] != 2 )
    {
      v8 = *(_DWORD **)this;
      *(_QWORD *)this = 0LL;
    }
    else if ( v7 )
    {
      v8 = *(_DWORD **)this;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    *a3 = 0LL;
    if ( v8[6] == 2 )
    {
      v9 = *((_QWORD *)v8 + 4);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v9 + 24LL))(
                                      v9,
                                      a2,
                                      a3);
      }
      else
      {
        *a3 = 0LL;
        InterfaceAndReleaseStream = -2147024809;
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      v10 = (IStream *)*((_QWORD *)v8 + 2);
      *((_QWORD *)v8 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v10, a2, a3);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return InterfaceAndReleaseStream;
}
