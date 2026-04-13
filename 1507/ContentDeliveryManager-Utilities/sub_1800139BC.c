/*
 * XREFs of sub_1800139BC @ 0x1800139BC
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 * Callees:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800139BC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdi
  signed __int64 v15; // rdi
  void *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+88h] [rbp+20h]

  *(_QWORD *)a1 = &unk_18002F5D8;
  *(_QWORD *)(a1 + 144) = off_18002D7C8;
  v22 = 1;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = off_18002DBB0;
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 24;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 513;
  *(_QWORD *)(v4 + 32) = 6LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  sub_18000B37C(v4, 0, 0);
  v6 = (_QWORD *)sub_180021148(8uLL);
  if ( v6 )
  {
    LOBYTE(v5) = 1;
    *v6 = sub_180021550(v5);
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(v4 + 64) = v6;
  v7 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(v4 + 72) = a1 + 16;
  *(_QWORD *)(v4 + 80) = 0LL;
  v8 = sub_18000B438(v4, &v21);
  v10 = sub_180018340(v8);
  if ( v21 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  LOBYTE(v9) = 32;
  *(_WORD *)(v4 + 88) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, v9);
  if ( !*(_QWORD *)(v4 + 72) )
    sub_18000B37C(v4, *(_BYTE *)(v4 + 16) | 4, 0);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = off_18002CEC8;
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  *v7 = off_18002E358;
  v13 = (_QWORD *)sub_180021148(8uLL);
  if ( v13 )
  {
    LOBYTE(v12) = 1;
    *v13 = sub_180021550(v12);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v13;
  *(_QWORD *)(a1 + 40) = a1 + 24;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = a1 + 64;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 104) = a1 + 92;
  *(_QWORD *)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 80) = 0LL;
  **(_DWORD **)(a1 + 104) = 0;
  **(_QWORD **)(a1 + 40) = 0LL;
  **(_QWORD **)(a1 + 72) = 0LL;
  **(_DWORD **)(a1 + 96) = 0;
  *v7 = off_18002D078;
  v14 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 2;
  if ( v14 )
  {
    if ( v14 > 0x7FFFFFFFFFFFFFFFLL || (v15 = 2 * v14, v16 = (void *)sub_180021148(v15), (v17 = (__int64)v16) == 0) )
      Concurrency::cancel_current_task();
    memcpy(v16, a2, v15);
    *(_QWORD *)(a1 + 120) = v15 + v17;
    if ( (*(_BYTE *)(a1 + 128) & 4) == 0 )
    {
      **(_QWORD **)(a1 + 40) = v17;
      **(_QWORD **)(a1 + 72) = v17;
      **(_DWORD **)(a1 + 96) = v15 >> 1;
    }
    v18 = *(_DWORD *)(a1 + 128);
    if ( (v18 & 2) == 0 )
    {
      v19 = v17;
      if ( (v18 & 0x10) != 0 )
        v19 = v15 + v17;
      **(_QWORD **)(a1 + 48) = v17;
      **(_QWORD **)(a1 + 80) = v19;
      **(_DWORD **)(a1 + 104) = (v17 + v15 - v19) >> 1;
      if ( !**(_QWORD **)(a1 + 72) )
      {
        **(_QWORD **)(a1 + 40) = v17;
        **(_QWORD **)(a1 + 72) = 0LL;
        **(_DWORD **)(a1 + 96) = v17 >> 1;
      }
    }
    *(_DWORD *)(a1 + 128) |= 1u;
  }
  return a1;
}
