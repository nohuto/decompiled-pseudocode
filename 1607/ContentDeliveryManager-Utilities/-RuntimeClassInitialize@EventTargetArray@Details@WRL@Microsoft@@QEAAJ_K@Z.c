/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800487F4
 * Callers:
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180043D78 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180058BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058D74 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180058DE8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // rax
  char *v11; // rcx
  __int64 result; // rax
  char *v13; // rbx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = v7 + 1;
    *v7 = a2;
    `eh vector constructor iterator'(
      v7 + 1,
      8uLL,
      a2,
      (void (*)(void *))Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 2) = v8;
  v9 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (char *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 4) = v10;
  if ( v11 )
  {
    if ( v10 )
    {
      *((_QWORD *)this + 3) = v11;
      return 0LL;
    }
    v13 = v11 - 8;
    `eh vector destructor iterator'(
      v11,
      8uLL,
      *((_QWORD *)v11 - 1),
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>);
    operator delete[](v13);
  }
  operator delete[](*((void **)this + 4));
  *((_QWORD *)this + 2) = 0LL;
  result = 2147942414LL;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
