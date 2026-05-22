/*
 * XREFs of ?OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z @ 0x18004ED00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004DA6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputProviderBase::OnTargetWithFocusChanged(
        MPCInputProviderBase *this,
        void (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *),
        void (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 v6; // r9
  __int64 v7; // r10
  void (__fastcall **v8)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  void (__fastcall **v10)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v8 = *a2;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(&v13);
    (*v8)((struct IInputTarget *)a2, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v9);
    v6 = v13;
    v7 = v14;
  }
  if ( a3 )
  {
    v10 = *a3;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(&v14);
    (*v10)((struct IInputTarget *)a3, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v11);
    v6 = v13;
    v7 = v14;
  }
  if ( v6 || v7 )
  {
    (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 1) + 56LL))((char *)this - 8, v6, v7);
    v6 = v13;
    v7 = v14;
  }
  if ( v7 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *), void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *), __int64, __int64))(*(_QWORD *)v7 + 16LL))(
      v7,
      a2,
      a3,
      v6,
      -2LL);
    v6 = v13;
  }
  if ( v6 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
