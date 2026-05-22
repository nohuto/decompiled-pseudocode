/*
 * XREFs of ??0MPCHFXInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K@Z @ 0x1800859C4
 * Callers:
 *     ?Create@MPCHFXInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085BF4 (-Create@MPCHFXInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_KPEAPEAUIMPCInputTarget@.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MPCHFXInputTarget *__fastcall MPCHFXInputTarget::MPCHFXInputTarget(
        MPCHFXInputTarget *this,
        struct IInputTarget *a2,
        const struct tagMsgRoutingInfo *a3,
        __int64 a4)
{
  char v8; // si
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v12[10]; // [rsp+38h] [rbp-50h] BYREF

  v11[1] = -2LL;
  v11[2] = this;
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  v8 = 1;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &MPCHFXInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCHFXInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCHFXInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCHFXInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a3 + 1);
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 4);
  *((_QWORD *)this + 13) = a4;
  *((_BYTE *)this + 96) = 0;
  if ( a2 )
  {
    v11[0] = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a2)(
           a2,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v11) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)v11[0] + 96LL))(v11[0], v12);
      if ( *((_DWORD *)this + 14) != v12[0] || *((_DWORD *)this + 15) != v12[1] )
        v8 = 0;
      *((_BYTE *)this + 96) = v8;
    }
    v9 = v11[0];
    if ( v11[0] )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return this;
}
