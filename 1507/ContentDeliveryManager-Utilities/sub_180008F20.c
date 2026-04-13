/*
 * XREFs of sub_180008F20 @ 0x180008F20
 * Callers:
 *     sub_180009C28 @ 0x180009C28 (sub_180009C28.c)
 * Callees:
 *     sub_180008E88 @ 0x180008E88 (sub_180008E88.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180008F20(__int64 pv)
{
  signed int v2; // esi
  _DWORD *v3; // rax
  _DWORD *v4; // rsi
  __int64 v5; // r14
  int v6; // r9d
  int v7; // r8d
  signed int LastError; // eax
  _QWORD *v9; // rbp
  __int64 v10; // r14

  v2 = sub_180008E88(pv);
  if ( v2 >= 0 )
  {
    v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180031BC0);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(pv + 144);
      v6 = *(_DWORD *)(pv + 136);
      v7 = *(_DWORD *)(pv + 132);
      *v3 = *(_DWORD *)(pv + 128);
      v3[1] = v7;
      v3[2] = v6;
      *((_QWORD *)v3 + 2) = v5;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)v4 + 3) = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    *(_QWORD *)(pv + 64) = v4;
    v2 = v4 == 0LL ? 0x8007000E : 0;
    if ( v2 < 0 )
      goto LABEL_20;
    _InterlockedIncrement(&dword_18003AC38);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)pv + 8LL))(pv);
    if ( !TrySubmitThreadpoolCallback(pfns, (PVOID)pv, 0LL) )
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
      if ( v2 >= 0 )
        v2 = -2147467259;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)pv + 16LL))(pv);
    }
    if ( v2 < 0 )
    {
      v9 = *(_QWORD **)(pv + 64);
      if ( v9 )
      {
        v10 = v9[2];
        if ( v10 )
        {
          v9[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        operator delete(v9);
      }
      *(_QWORD *)(pv + 64) = 0LL;
      _InterlockedDecrement(&dword_18003AC38);
LABEL_20:
      FreeLibrary(*(HMODULE *)(pv + 72));
      *(_QWORD *)(pv + 72) = 0LL;
    }
  }
  return (unsigned int)v2;
}
