/*
 * XREFs of MiInitializeTbFlushing @ 0x14074C190
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

_QWORD *__fastcall MiInitializeTbFlushing(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  _QWORD *result; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 *v10; // rsi
  __int64 v11; // r14
  int v12; // esi
  unsigned int v13; // ebx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  _KPROCESS *v17; // rdx
  unsigned __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int128 v30; // [rsp+58h] [rbp-B0h]
  _QWORD *v31; // [rsp+68h] [rbp-A0h]
  __int128 v32; // [rsp+78h] [rbp-90h]
  int v33; // [rsp+88h] [rbp-80h] BYREF
  __int16 v34; // [rsp+8Ch] [rbp-7Ch]
  __int64 v35; // [rsp+90h] [rbp-78h]
  __int64 v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]

  v3 = 2048LL;
  v28 = 0LL;
  v27 = 0LL;
  result = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 0x800u, a3);
  v31 = result;
  v5 = result;
  if ( !result )
    return result;
  v6 = qword_140381310;
  v35 = 20LL;
  v7 = qword_140381308 ^ (qword_140381308 ^ (qword_1402FF238 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v33 = 0;
  v34 = 0;
  v36 = 0LL;
  v37 = 0LL;
  if ( (unsigned __int64)(result + 0x12098000000LL) <= 0x3FFFFFFF )
    v7 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)result >= 0xFFFFF68000000000uLL
    || (unsigned __int64)result >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)result >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)result >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)result <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)result) )
    v7 |= 0x100uLL;
  v8 = ~v6 & (v7 | 0x8000000000000000uLL);
  v9 = (__int64)((_QWORD)v5 << 25) >> 16;
  v10 = v5;
  v11 = v9;
  do
  {
    *v10 = v8;
    if ( MiPteInShadowRange((__int64)v10) )
      MiWritePteShadow((__int64)v10, v8);
    ++v10;
    v11 += 4096LL;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v29 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 4LL;
    do
    {
      *(_QWORD *)&v30 = __rdtsc();
      _InterlockedOr(v26, 0);
      if ( v13 )
      {
        MiInsertTbFlushEntry((__int64)&v33, v9, v13, 0);
        MiFlushTbList((__int64)&v33, v17);
      }
      else
      {
        KeFlushTb(0, 2u);
      }
      _InterlockedOr(v26, 0);
      v14 += __rdtsc() - v30;
      v18 = __rdtsc();
      _InterlockedOr(v26, 0);
      v19 = (__int64)((_QWORD)v5 << 25) >> 16;
      v20 = v9 + 8384512;
      v21 = 1024LL;
      do
      {
        v19 += 4096LL;
        v20 -= 4096LL;
        --v21;
      }
      while ( v21 );
      _InterlockedOr(v26, 0);
      v22 = __rdtsc();
      v15 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v18;
      --v16;
    }
    while ( v16 );
    v23 = v14 >> 2;
    v24 = v15 >> 2;
    *(_QWORD *)&v32 = v23;
    *((_QWORD *)&v32 + 1) = v24;
    if ( v13 )
      break;
    v30 = v32;
    v27 = *((_QWORD *)&v32 + 1);
    v28 = v32;
LABEL_40:
    if ( ++v13 >= 0x800 )
      goto LABEL_35;
  }
  if ( v24 + v23 < v27 + v28 )
  {
    v12 = 0;
    goto LABEL_40;
  }
  if ( v12 )
  {
    v25 = v29;
  }
  else
  {
    v25 = v13 - 1;
    v29 = v25;
  }
  if ( ++v12 != 3 )
    goto LABEL_40;
  qword_1402FE720 = v25;
LABEL_35:
  if ( v12 != 3 )
    qword_1402FE720 = v13;
  return (_QWORD *)MiReleasePtes((__int64)&qword_1402FF7B0, v31, 0x800u);
}
