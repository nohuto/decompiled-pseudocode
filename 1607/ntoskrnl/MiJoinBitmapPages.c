/*
 * XREFs of MiJoinBitmapPages @ 0x1401EB150
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiReturnPfnList @ 0x14013F0CC (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x14014BF00 (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // r10
  __int64 v14; // r11
  _KPROCESS *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-F8h] BYREF
  int v20; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v21; // [rsp+34h] [rbp-E4h]
  __int64 v22; // [rsp+38h] [rbp-E0h]
  __int64 v23; // [rsp+40h] [rbp-D8h]
  __int64 v24; // [rsp+48h] [rbp-D0h]

  v5 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v5);
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    do
    {
      v19 = MI_READ_PTE_LOCK_FREE(v5);
      v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
      *(_QWORD *)(48 * v8 - 0x58000000000LL) = v7;
      v7 = 48 * v8 - 0x58000000000LL;
      *v5 = v9;
      v12 = MiPteInShadowRange(v5, v10);
      if ( v12 )
        MiWritePteShadow(v11, v6);
      *v5 = v14;
      if ( v12 )
        MiWritePteShadow(v5, v14);
      ++v5;
    }
    while ( v13 != 1 );
  }
  v22 = 20LL;
  v20 = v6;
  v21 = v6;
  v23 = v6;
  v24 = v6;
  MiInsertTbFlushEntry((__int64)&v20, a2, a3, v6);
  MiFlushTbList((__int64)&v20, v15, v16, v17);
  MiReturnPfnList(v7);
  return MiReturnSplitPageCharges(a3);
}
