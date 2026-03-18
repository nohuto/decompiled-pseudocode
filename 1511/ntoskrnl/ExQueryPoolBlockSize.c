/*
 * XREFs of ExQueryPoolBlockSize @ 0x1400C8470
 * Callers:
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1401DB874 (MmQuerySpecialPoolBlockSize.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  _QWORD *v2; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int16 v11; // ax
  unsigned __int64 v12; // r8
  _BYTE *v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+0h] BYREF

  v2 = (_QWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (unsigned __int64)PoolBlock + 0x98000000000LL > 0x7FFFFFFFFFLL
    && ((__int64)((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 47 == -1
     || (__int64)((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 47 == 0) )
  {
    LODWORD(v4) = 4;
    v5 = ((((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL)
       - 0x98000000000LL;
    *v2 = v5;
    v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v6;
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v7;
    *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = ((v7 >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    while ( 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      v8 = *(_QWORD *)v2[v4];
      if ( (v8 & 1) == 0 )
        break;
      if ( (unsigned int)v4 <= 1 && (v8 & 0x80u) != 0LL )
      {
        if ( !(_DWORD)v4 )
          break;
LABEL_10:
        if ( qword_1402FE8F0
          && (unsigned __int64)PoolBlock >= qword_1402FE8F0
          && (unsigned __int64)PoolBlock < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
          || qword_1402FE600
          && (unsigned __int64)PoolBlock >= qword_1402FE600
          && (unsigned __int64)PoolBlock < qword_1402FE600 + 0x2000000000LL
          && ((v9 = *(unsigned __int8 *)(48
                                       * ((*(_QWORD *)((((unsigned __int64)PoolBlock >> 18) & 0x3FFFFFF8)
                                                     - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                                       - 0x57FFFFFFFDALL) >> 4,
               v9 == 7)
           || v9 == 13) )
        {
          *QuotaCharged = 0;
          return MmQuerySpecialPoolBlockSize(PoolBlock);
        }
        break;
      }
      if ( !(_DWORD)v4 )
        goto LABEL_10;
    }
  }
  if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v11 = *((_WORD *)PoolBlock - 7);
    v12 = (unsigned __int64)PoolBlock - 16;
    if ( (*(_BYTE *)(v12 + 3) & 8) != 0 && (v13 = (_BYTE *)(v12 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v12 + 8))) != 0LL )
    {
      if ( v13 < MmSystemRangeStart || (*v13 & 0x7F) != 3 )
        KeBugCheckEx(
          0xC2u,
          0xDuLL,
          v12 + 16,
          *(unsigned int *)(v12 + 4),
          v12 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v12 + 8));
      *QuotaCharged = 1;
    }
    else
    {
      *QuotaCharged = 0;
    }
    return 16 * (unsigned int)(unsigned __int8)v11 - 16;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
}
