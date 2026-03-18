/*
 * XREFs of ExQueryPoolBlockSize @ 0x140102E30
 * Callers:
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1402203D0 (MmQuerySpecialPoolBlockSize.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ecx
  __int16 v7; // ax
  unsigned __int64 v8; // r8
  _BYTE *v9; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (unsigned __int64)PoolBlock + 0x98000000000LL > 0x7FFFFFFFFFLL
    && ((__int64)((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 47 == -1
     || (__int64)((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 47 == 0) )
  {
    LODWORD(v3) = 4;
    v10 = ((((((unsigned __int64)PoolBlock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = *(_QWORD *)*(&v10 + v3);
      if ( (v4 & 1) == 0 )
        break;
      if ( (unsigned int)v3 <= 1 && (v4 & 0x80u) != 0LL )
      {
        if ( !(_DWORD)v3 )
          break;
LABEL_10:
        if ( qword_14034EDB0
          && (unsigned __int64)PoolBlock >= qword_14034EDB0
          && (unsigned __int64)PoolBlock < qword_14034EDB0 + (qword_14034ED90 << 21)
          || qword_14034EAB0
          && (unsigned __int64)PoolBlock >= qword_14034EAB0
          && (unsigned __int64)PoolBlock < qword_14034EAB0 + 0x2000000000LL
          && ((v5 = *(unsigned __int8 *)(48
                                       * ((*(_QWORD *)((((unsigned __int64)PoolBlock >> 18) & 0x3FFFFFF8)
                                                     - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                                       - 0x57FFFFFFFDALL) >> 4,
               v5 == 7)
           || v5 == 13) )
        {
          *QuotaCharged = 0;
          return MmQuerySpecialPoolBlockSize(PoolBlock);
        }
        break;
      }
      if ( !(_DWORD)v3 )
        goto LABEL_10;
    }
  }
  if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v7 = *((_WORD *)PoolBlock - 7);
    v8 = (unsigned __int64)PoolBlock - 16;
    if ( (*(_BYTE *)(v8 + 3) & 8) != 0 && (v9 = (_BYTE *)(v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8))) != 0LL )
    {
      if ( v9 < MmSystemRangeStart || (*v9 & 0x7F) != 3 )
        KeBugCheckEx(0xC2u, 0xDuLL, v8 + 16, *(unsigned int *)(v8 + 4), v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
      *QuotaCharged = 1;
      return 16 * (unsigned int)(unsigned __int8)v7 - 16;
    }
    else
    {
      *QuotaCharged = 0;
      return 16 * (unsigned int)(unsigned __int8)v7 - 16;
    }
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
}
