/*
 * XREFs of sub_18000E630 @ 0x18000E630
 * Callers:
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 * Callees:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18000E630(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10)
{
  __int64 v11; // rcx
  __int64 v13; // rsi
  __int64 v14; // rsi

  *(_QWORD *)a1 = a2;
  v11 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v11 )
    sub_180007200(v11);
  *(_DWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a5 + 8) = 1;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a6 + 8) = 1;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a7;
  *(_QWORD *)a7 = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_BYTE *)(a7 + 8) = 1;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a8;
  *(_QWORD *)a8 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a8 + 8) = 1;
  v13 = *a9;
  *(_QWORD *)(a1 + 88) = *a9;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = *a10;
  *(_QWORD *)(a1 + 96) = *a10;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  return a1;
}
