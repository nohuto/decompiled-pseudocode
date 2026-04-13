/*
 * XREFs of sub_180018228 @ 0x180018228
 * Callers:
 *     sub_180009C28 @ 0x180009C28 (sub_180009C28.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_180018228(_QWORD *a1, int *a2, int *a3)
{
  _DWORD *v6; // rbx
  bool v7; // zf
  int v8; // eax
  int v9; // ecx

  *a1 = 0LL;
  v6 = operator new(0xA8uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v6 )
  {
    v7 = qword_18003AC80 == 0;
    v8 = *a3;
    v9 = *a2;
    v6[3] = 1;
    *(_QWORD *)v6 = off_18002D1D0;
    if ( !v7 )
      _InterlockedAdd(&dword_18003AC88, 1u);
    *((_QWORD *)v6 + 2) = 0LL;
    *(_QWORD *)v6 = off_18002D890;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    v6[12] = -2147467259;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    v6[20] = v9;
    v6[21] = v8 & 9;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_BYTE *)v6 + 96) = 1;
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    *((_BYTE *)v6 + 120) = 0;
    *((_QWORD *)v6 + 16) = 1LL;
    v6[34] = 0;
    *((_QWORD *)v6 + 18) = 0LL;
    *((_QWORD *)v6 + 19) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
