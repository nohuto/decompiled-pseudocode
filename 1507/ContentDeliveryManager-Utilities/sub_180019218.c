/*
 * XREFs of sub_180019218 @ 0x180019218
 * Callers:
 *     sub_1800184F8 @ 0x1800184F8 (sub_1800184F8.c)
 * Callees:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180019218(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rsi

  *(_QWORD *)a1 = off_18002D068;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v4 )
    sub_180007200(v4);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a2 + 48) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a2 + 64) = 1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  *(_BYTE *)(a2 + 80) = 1;
  v5 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a1;
}
