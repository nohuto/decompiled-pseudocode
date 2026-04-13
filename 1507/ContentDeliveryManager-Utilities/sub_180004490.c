/*
 * XREFs of sub_180004490 @ 0x180004490
 * Callers:
 *     sub_180003400 @ 0x180003400 (sub_180003400.c)
 *     sub_1800061A0 @ 0x1800061A0 (sub_1800061A0.c)
 *     sub_1800061D0 @ 0x1800061D0 (sub_1800061D0.c)
 *     sub_1800062A0 @ 0x1800062A0 (sub_1800062A0.c)
 *     sub_1800079F0 @ 0x1800079F0 (sub_1800079F0.c)
 *     sub_180007E10 @ 0x180007E10 (sub_180007E10.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004490(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rdx
  unsigned int v4; // edi
  bool v5; // zf
  __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 7);
  if ( v3 < 0 )
  {
    do
LABEL_8:
      a3 = *(unsigned int *)(2 * v3 + 0x10);
    while ( (_DWORD)a3 != 0x7FFFFFFF
         && (_DWORD)a3 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v3 + 16), a3 - 1, a3) );
    v4 = a3 - 1;
LABEL_10:
    if ( !v4 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64, __int64, __int64))(*a1 + 48))(
          a1,
          1LL,
          a3,
          0x7FFFFFFFLL);
      if ( qword_18003AC80 )
        _InterlockedDecrement(&dword_18003AC88);
    }
  }
  else
  {
    while ( (_DWORD)v3 != 0x7FFFFFFF )
    {
      v4 = v3 - 1;
      v6 = _InterlockedCompareExchange64(a1 + 7, v3 - 1, v3);
      v5 = v3 == v6;
      v3 = v6;
      if ( v5 )
        goto LABEL_10;
      if ( v6 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v4;
}
