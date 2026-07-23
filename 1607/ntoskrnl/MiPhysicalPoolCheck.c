/*
 * XREFs of MiPhysicalPoolCheck @ 0x14009C20C
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x14009AAEC (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x14009C0C8 (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r10
  __int64 v13; // r11
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v9 = 0LL;
  v25 = a7 - 1;
  v13 = -1LL;
  v14 = ~(a7 - 1);
  v15 = qword_1403269F0[26 * a8 + 20].Region + ((a1 + a2) << 12);
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v13 == -1 )
        v16 = a3 - v9;
      else
        v16 = a3 - v13;
      if ( v16 < a4 )
        return -1LL;
      v24 = MI_READ_PTE_LOCK_FREE(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v17 = 48
          * ((((((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 3) & 0x1FF)
           + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL))
          - 0x58000000000LL;
      if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v17 + 40)) >> 2 != a8 )
      {
        v18 = 1LL;
LABEL_26:
        v13 = -1LL;
        goto LABEL_27;
      }
      if ( v13 != -1 )
        break;
      v20 = (__int64)(v17 + 0x58000000000LL) / 48;
      if ( v20 > a5 )
        goto LABEL_27;
      if ( v20 >= a6 )
      {
        if ( v20 + a4 <= v20 )
          goto LABEL_27;
        v22 = v20 + a4 - 1;
        if ( v22 > a5 )
          goto LABEL_27;
        if ( a7 && ((v20 ^ v22) & v14) != 0 )
        {
          if ( v20 + v18 <= (v14 & (v20 + v25)) )
            goto LABEL_27;
          v21 = v14 & (v20 + v25);
          goto LABEL_13;
        }
        v13 = v19;
        goto LABEL_22;
      }
      if ( v20 + v18 > a6 )
      {
        v21 = a6;
LABEL_13:
        v18 = v21 - v20;
      }
LABEL_27:
      v9 = v18 + v19;
      v15 += v18 << 12;
      if ( v9 >= a3 )
        return -1LL;
    }
    if ( v17 != v8 + 48 )
    {
      v18 = 0LL;
      goto LABEL_26;
    }
LABEL_22:
    v8 = v17;
    if ( v13 != -1 && v19 - v13 + 1 >= a4 )
      return v13 + a1;
    v18 = 1LL;
    goto LABEL_27;
  }
  return -1LL;
}
