/*
 * XREFs of ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x180004F7C
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000505C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(
        Windows::Internal::ComTaskPool::CThread *this,
        int *a2,
        struct IUnknown **a3)
{
  HRESULT v5; // ebx
  bool v6; // al
  __int64 v7; // rcx
  IUnknown *v8; // rcx
  IUnknown *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = SHCreateThreadRef(a2, &v10);
  if ( v5 < 0 )
    goto LABEL_8;
  v11 = 0LL;
  v6 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
         v10,
         &GUID_853513c1_37ae_4cec_b347_ec9ead33065a,
         &v11) >= 0;
  *((_BYTE *)this + 120) = v6;
  if ( v6 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *((_QWORD *)this + 14));
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v5 < 0 )
  {
LABEL_8:
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
    *a3 = v10;
  }
  if ( v8 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return (unsigned int)v5;
}
