/*
 * XREFs of sub_180007270 @ 0x180007270
 * Callers:
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_180007DA0 @ 0x180007DA0 (sub_180007DA0.c)
 *     sub_180008158 @ 0x180008158 (sub_180008158.c)
 *     sub_180008200 @ 0x180008200 (sub_180008200.c)
 *     sub_180008300 @ 0x180008300 (sub_180008300.c)
 *     sub_180008330 @ 0x180008330 (sub_180008330.c)
 *     sub_1800084C0 @ 0x1800084C0 (sub_1800084C0.c)
 *     sub_1800085B0 @ 0x1800085B0 (sub_1800085B0.c)
 *     sub_1800086B0 @ 0x1800086B0 (sub_1800086B0.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 *     sub_18000EDF0 @ 0x18000EDF0 (sub_18000EDF0.c)
 *     sub_18000F0B0 @ 0x18000F0B0 (sub_18000F0B0.c)
 *     sub_18000F274 @ 0x18000F274 (sub_18000F274.c)
 *     sub_18000F2A0 @ 0x18000F2A0 (sub_18000F2A0.c)
 *     sub_18000F470 @ 0x18000F470 (sub_18000F470.c)
 *     sub_18000F640 @ 0x18000F640 (sub_18000F640.c)
 *     sub_1800196E0 @ 0x1800196E0 (sub_1800196E0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180007270(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rdx
  unsigned int v4; // edi
  bool v5; // zf
  __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 10);
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
      v6 = _InterlockedCompareExchange64(a1 + 10, v3 - 1, v3);
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
