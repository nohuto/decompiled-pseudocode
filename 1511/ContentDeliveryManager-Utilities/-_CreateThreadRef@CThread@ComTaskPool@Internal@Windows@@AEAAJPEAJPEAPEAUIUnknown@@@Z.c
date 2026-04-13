/*
 * XREFs of ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x180009018
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180009128 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(
        Windows::Internal::ComTaskPool::CThread *this,
        int *a2,
        struct IUnknown **a3)
{
  HRESULT v5; // esi
  bool v6; // al
  __int64 v7; // rdi
  IUnknown *v8; // rdi
  IUnknown *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

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
