/*
 * XREFs of sub_180003610 @ 0x180003610
 * Callers:
 *     sub_1800036C0 @ 0x1800036C0 (sub_1800036C0.c)
 *     sub_180003700 @ 0x180003700 (sub_180003700.c)
 *     sub_180007970 @ 0x180007970 (sub_180007970.c)
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 */

__int64 (__fastcall **__fastcall sub_180003610(__int64 a1))()
{
  bool v1; // zf
  __int64 (__fastcall **result)(); // rax
  _DWORD *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rsi

  v1 = *(_BYTE *)(a1 + 16) == 0;
  result = off_180008D68;
  *(_QWORD *)a1 = off_180008D68;
  if ( !v1 )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( v4 )
      sub_180001310(v4);
    result = *(__int64 (__fastcall ***)())(a1 + 8);
    if ( result )
    {
      *((_DWORD *)result + 2) = 0;
      *((_DWORD *)result + 3) = 0;
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 5) = 0;
    }
    *(_BYTE *)(a1 + 16) = 0;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    result = (__int64 (__fastcall **)())sub_180003E20(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v6 )
    {
      result = (__int64 (__fastcall **)())(**v6)(*(_QWORD *)(a1 + 8), 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
