/*
 * XREFs of sub_180018070 @ 0x180018070
 * Callers:
 *     sub_180008A00 @ 0x180008A00 (sub_180008A00.c)
 * Callees:
 *     sub_180008944 @ 0x180008944 (sub_180008944.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180017F80 @ 0x180017F80 (sub_180017F80.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180018070(__int64 **a1, IUnknown **a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  signed int v7; // esi
  bool v8; // zf
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  char v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  IUnknown *v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v2 + 16))(v2);
  }
  *a1 = 0LL;
  v5 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v6 = v5;
  if ( v5 )
  {
    v8 = qword_18003AC80 == 0;
    *v5 = (__int64)&off_18002BFD8;
    *v5 = (__int64)off_18002DC80;
    *((_DWORD *)v5 + 3) = 1;
    if ( !v8 )
      _InterlockedIncrement(&dword_18003AC88);
    *v5 = (__int64)off_18002DBE8;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v16 = *a2;
    v9 = (char *)sub_180017F80((__int64)&v15, &v16);
    v10 = 0LL;
    if ( &v14 != v9 )
    {
      v10 = *(_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
    v11 = v6[3];
    v6[3] = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 16LL))(v11 + 16);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 16LL))(v12 + 16);
    }
    v7 = v6[3] == 0 ? 0x8007000E : 0;
    if ( v6[3] && (v7 = sub_180008944(v6 + 2, (__int64)&unk_18002BB40, v6[3] + 16), v7 >= 0) )
    {
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
      *a1 = v6;
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
