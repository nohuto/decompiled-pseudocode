/*
 * XREFs of sub_180017F80 @ 0x180017F80
 * Callers:
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180017F80(__int64 a1, IUnknown **a2)
{
  IUnknown **v4; // rbx
  IUnknown *v5; // rsi
  bool v6; // zf

  *(_QWORD *)a1 = 0LL;
  v4 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = (IUnknown *)off_18002D398;
    SHGetThreadRef(v4 + 1);
    v6 = qword_18003AC80 == 0;
    v4[2] = (IUnknown *)off_18002D1D0;
    *((_DWORD *)v4 + 7) = 1;
    if ( !v6 )
      _InterlockedIncrement(&dword_18003AC88);
    *v4 = (IUnknown *)&off_18002E0F8;
    v4[2] = (IUnknown *)off_18002D238;
    v4[4] = v5;
    if ( v5 )
      ((void (__fastcall *)(IUnknown *))v5->lpVtbl->AddRef)(v5);
    *((_BYTE *)v4 + 40) = 0;
    if ( *(_QWORD *)a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL))(*(_QWORD *)a1 + 16LL);
    *(_QWORD *)a1 = v4;
  }
  return a1;
}
