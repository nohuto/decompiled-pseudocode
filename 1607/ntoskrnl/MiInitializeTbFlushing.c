/*
 * XREFs of MiInitializeTbFlushing @ 0x1407A6B10
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiInitializeTbFlushing(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  ULONG_PTR v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r11
  unsigned __int64 v7; // r11
  unsigned __int64 *v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  _KPROCESS *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  signed __int32 v27[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int128 v29; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v30; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v31; // [rsp+50h] [rbp-B8h]
  __int128 v32; // [rsp+58h] [rbp-B0h]
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch]
  __int64 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h]

  v29 = 0uLL;
  result = MiReservePtes((__int64)&qword_1403278B0, 0x800uLL, a3);
  v31 = result;
  v4 = result;
  if ( !result )
    return result;
  v33 = 0;
  LOWORD(v34) = 0;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 20LL;
  v5 = qword_1403A9350;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(result) )
    v6 |= 0x100uLL;
  v7 = ~v5 & (v6 | 0x8000000000000000uLL);
  v8 = (unsigned __int64 *)v4;
  v9 = 2048LL;
  v10 = (__int64)(v4 << 25) >> 16;
  do
  {
    *v8 = v7;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
      MiWritePteShadow(v11, v7);
    v8 = (unsigned __int64 *)(v12 + 8);
    --v9;
  }
  while ( v9 );
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = 0LL;
    v28 = 4LL;
    v16 = 0LL;
    do
    {
      v30 = __rdtsc();
      _InterlockedOr(v27, 0);
      if ( (_DWORD)v9 )
      {
        MiInsertTbFlushEntry((__int64)&v33, v10, (unsigned int)v9, 0);
        MiFlushTbList((__int64)&v33, v17, v18, v19);
      }
      else
      {
        KeFlushTb(0, 2u);
      }
      _InterlockedOr(v27, 0);
      v15 += __rdtsc() - v30;
      v20 = __rdtsc();
      _InterlockedOr(v27, 0);
      v21 = (__int64)(v4 << 25) >> 16;
      v22 = v10 + 8384512;
      v23 = 1024LL;
      do
      {
        v21 += 4096LL;
        v22 -= 4096LL;
        --v23;
      }
      while ( v23 );
      _InterlockedOr(v27, 0);
      v24 = __rdtsc();
      v16 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v20;
      --v28;
    }
    while ( v28 );
    v25 = v15 >> 2;
    v26 = v16 >> 2;
    *(_QWORD *)&v32 = v25;
    *((_QWORD *)&v32 + 1) = v26;
    if ( (_DWORD)v9 )
      break;
    v29 = v32;
LABEL_28:
    LODWORD(v9) = v9 + 1;
    if ( (unsigned int)v9 >= 0x800 )
      goto LABEL_23;
  }
  if ( v26 + v25 < *((_QWORD *)&v29 + 1) + (_QWORD)v29 )
  {
    v13 = 0;
    goto LABEL_28;
  }
  if ( !v13 )
    v14 = (unsigned int)(v9 - 1);
  if ( ++v13 != 3 )
    goto LABEL_28;
  qword_140326A58 = v14;
LABEL_23:
  if ( v13 != 3 )
    qword_140326A58 = (unsigned int)v9;
  return MiReleasePtes((__int64)&qword_1403278B0, v31, 0x800u);
}
