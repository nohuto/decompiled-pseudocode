/*
 * XREFs of MiPhysicalPoolCheck @ 0x1401380C8
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1400BD920 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x140137FA4 (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPhysicalPoolCheck(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned __int64 v9; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  v21 = a7 - 1;
  v9 = 0LL;
  v11 = -1LL;
  v20 = ~(a7 - 1);
  v12 = qword_1402FE6C0[26 * a8 + 20].Region + ((a1 + a2) << 12);
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        v13 = a3 - v9;
      else
        v13 = a3 - v11;
      if ( v13 < a4 )
        return -1LL;
      v14 = (unsigned __int64)(4096 - ((unsigned int)(v12 >> 9) & 0xFF8)) >> 3;
      if ( v14 + v9 > a3 )
        v14 = a3 - v9;
      v24 = MI_READ_PTE_LOCK_FREE(((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v15 = 48
          * ((((((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 3) & 0x1FF)
           + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL))
          - 0x58000000000LL;
      if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v15 + 40)) >> 2 != a8 )
      {
        v14 = 1LL;
LABEL_28:
        v11 = -1LL;
        goto LABEL_29;
      }
      if ( v11 != -1 )
        break;
      v16 = (__int64)(v15 + 0x58000000000LL) / 48;
      if ( v16 > a5 )
        goto LABEL_29;
      if ( v16 >= a6 )
      {
        if ( v16 + a4 <= v16 )
          goto LABEL_29;
        v18 = v16 + a4 - 1;
        if ( v18 > a5 )
          goto LABEL_29;
        if ( a7 && ((v16 ^ v18) & v20) != 0 )
        {
          if ( v16 + v14 <= (v20 & (v16 + v21)) )
            goto LABEL_29;
          v17 = v20 & (v16 + v21);
          goto LABEL_15;
        }
        v11 = v9;
        goto LABEL_24;
      }
      if ( v16 + v14 > a6 )
      {
        v17 = a6;
LABEL_15:
        v14 = v17 - v16;
      }
LABEL_29:
      v9 += v14;
      v12 += v14 << 12;
      if ( v9 >= a3 )
        return -1LL;
    }
    if ( v15 != v23 + 48 )
    {
      v14 = 0LL;
      goto LABEL_28;
    }
LABEL_24:
    v23 = v15;
    if ( v11 != -1 && v9 - v11 + 1 >= a4 )
      return v11 + a1;
    v14 = 1LL;
    goto LABEL_29;
  }
  return -1LL;
}
