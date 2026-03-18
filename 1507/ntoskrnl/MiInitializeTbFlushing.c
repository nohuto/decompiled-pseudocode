/*
 * XREFs of MiInitializeTbFlushing @ 0x1407C7E90
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 *__fastcall MiInitializeTbFlushing(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 *result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 *v10; // rsi
  __int64 v11; // r14
  int v12; // esi
  unsigned int v13; // ebx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  signed __int32 v25[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int128 v29; // [rsp+58h] [rbp-B0h]
  __int64 *v30; // [rsp+68h] [rbp-A0h]
  __int128 v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+88h] [rbp-80h] BYREF
  __int16 v33; // [rsp+8Ch] [rbp-7Ch]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]

  v3 = 2048LL;
  v27 = 0LL;
  v26 = 0LL;
  result = MiReservePtes((__int64)&qword_14034FC70, 0x800u, a3);
  v30 = result;
  v5 = result;
  if ( !result )
    return result;
  v34 = 20LL;
  v6 = qword_1403D0218 ^ (qword_1403D0218 ^ (qword_14034F6F8 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v32 = 0;
  v33 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( (unsigned __int64)(result + 0x12098000000LL) <= 0x3FFFFFFF )
    v6 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)result >= 0xFFFFF68000000000uLL
    || (unsigned __int64)result >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)result >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)result <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)result >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)result <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v6 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)result) )
    v6 |= 0x100uLL;
  v8 = ~v7 & (v6 | 0x8000000000000000uLL);
  v9 = (__int64)((_QWORD)v5 << 25) >> 16;
  v10 = (unsigned __int64 *)v5;
  v11 = v9;
  do
  {
    *v10 = v8;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v10, v8);
    ++v10;
    v11 += 4096LL;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v28 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 4LL;
    do
    {
      *(_QWORD *)&v29 = __rdtsc();
      _InterlockedOr(v25, 0);
      if ( v13 )
      {
        MiInsertTbFlushEntry((__int64)&v32, v9, v13, 0);
        MiFlushTbList((__int64)&v32);
      }
      else
      {
        KeFlushTb(0, 2);
      }
      _InterlockedOr(v25, 0);
      v14 += __rdtsc() - v29;
      v17 = __rdtsc();
      _InterlockedOr(v25, 0);
      v18 = (__int64)((_QWORD)v5 << 25) >> 16;
      v19 = v9 + 8384512;
      v20 = 1024LL;
      do
      {
        v18 += 4096LL;
        v19 -= 4096LL;
        --v20;
      }
      while ( v20 );
      _InterlockedOr(v25, 0);
      v21 = __rdtsc();
      v15 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v17;
      --v16;
    }
    while ( v16 );
    v22 = v14 >> 2;
    v23 = v15 >> 2;
    *(_QWORD *)&v31 = v22;
    *((_QWORD *)&v31 + 1) = v23;
    if ( v13 )
      break;
    v29 = v31;
    v26 = *((_QWORD *)&v31 + 1);
    v27 = v31;
LABEL_40:
    if ( ++v13 >= 0x800 )
      goto LABEL_35;
  }
  if ( v23 + v22 < v26 + v27 )
  {
    v12 = 0;
    goto LABEL_40;
  }
  if ( v12 )
  {
    v24 = v28;
  }
  else
  {
    v24 = v13 - 1;
    v28 = v24;
  }
  if ( ++v12 != 3 )
    goto LABEL_40;
  qword_14034EBD8 = v24;
LABEL_35:
  if ( v12 != 3 )
    qword_14034EBD8 = v13;
  return (__int64 *)MiReleasePtes((__int64)&qword_14034FC70, v30, 0x800u);
}
