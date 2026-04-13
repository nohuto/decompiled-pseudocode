/*
 * XREFs of sub_1800093F8 @ 0x1800093F8
 * Callers:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800093F8(__int64 a1, LONG *a2, _QWORD *a3)
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
  v6 = ((__int64 (__fastcall *)(IUnknown *, void *, __int64 *))v10->lpVtbl->QueryInterface)(v10, &unk_18002F900, &v11) >= 0;
  *(_BYTE *)(a1 + 120) = v6;
  if ( v6 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *(_QWORD *)(a1 + 112));
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
