/*
 * XREFs of MiConvertWsleHash @ 0x1400CED80
 * Callers:
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 * Callees:
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiMapWsleHash @ 0x1400AA33C (MiMapWsleHash.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiConvertWsleHash(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 result; // rax
  char v14; // cl
  unsigned __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (_QWORD *)(v3 + 4096);
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  if ( v3 < v3 + 4096 )
  {
    do
    {
      v6 = *(_QWORD *)v3;
      if ( (*(_QWORD *)v3 & 1) != 0 )
      {
        v7 = (_QWORD *)(*(_QWORD *)(v2 + 496) + *(_QWORD *)(v3 + 8) * *(unsigned int *)(v2 + 64));
        v8 = v6 & 0xFFFFFFFFFFFFLL;
        if ( (v6 & 0x800000000000LL) != 0 )
          v8 = v6 | 0xFFFF000000000000uLL;
        v9 = *(_QWORD *)(v2 + 96) + 8 * ((v8 - *(_QWORD *)(v2 + 80)) >> 12);
        if ( v9 >> 47 == -1 || v9 >> 47 == 0 )
        {
          v15 = (((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LODWORD(v10) = 4;
          while ( 1 )
          {
            v10 = (unsigned int)(v10 - 1);
            v11 = *(_QWORD *)*(&v15 + v10);
            if ( (v11 & 1) == 0 )
              break;
            if ( (unsigned int)v10 <= 1 && (v11 & 0x80u) != 0LL )
            {
              if ( (_DWORD)v10 )
                goto LABEL_11;
              break;
            }
            if ( !(_DWORD)v10 )
              goto LABEL_11;
          }
        }
        if ( (unsigned int)MiMapWsleHash(a1, v9) )
        {
LABEL_11:
          *(_QWORD *)v9 = *(_QWORD *)(v3 + 8);
          v12 = MI_GET_PFN_FROM_PTE((((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          *(_QWORD *)(v12 + 16) = (unsigned int)*(_QWORD *)(v12 + 16) ^ ((*(_QWORD *)(v12 + 16) & 0xFFFFFFFF00000000uLL)
                                                                       + 0x100000000LL);
        }
        else
        {
          *v7 &= ~4uLL;
        }
      }
      v3 += 16LL;
    }
    while ( v3 < (unsigned __int64)v5 );
  }
  result = MiDeletePteRange(a1, v4, v4 + 8, 0);
  v14 = *(_BYTE *)(a1 + 216);
  *(_QWORD *)(a1 + 160) -= result;
  if ( (v14 & 7) != 1 )
    return _InterlockedExchangeAdd64(&qword_1402FF838, -(__int64)result);
  return result;
}
