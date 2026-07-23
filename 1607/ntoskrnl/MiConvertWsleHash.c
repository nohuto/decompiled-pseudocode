/*
 * XREFs of MiConvertWsleHash @ 0x140100840
 * Callers:
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiMapWsleHash @ 0x140100B00 (MiMapWsleHash.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiConvertWsleHash(__int64 a1)
{
  LONG *SharedVm; // r13
  __int64 v3; // rcx
  ULONG_PTR *SharedWorkingSetList; // rax
  unsigned __int64 v5; // r10
  ULONG_PTR *v6; // rbp
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // r9d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 PteTimeStamp; // rax
  __int64 v20; // r9
  __int64 updated; // rax
  __int64 v22; // r9
  unsigned __int64 result; // rax
  int v24; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  SharedVm = MiGetSharedVm(a1);
  SharedWorkingSetList = MiGetSharedWorkingSetList(v3);
  v5 = 0xFFFFF68000000000uLL;
  v6 = SharedWorkingSetList;
  v7 = SharedWorkingSetList[7];
  v8 = (_QWORD *)(v7 + 4096);
  v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SharedWorkingSetList[7] = 0LL;
  SharedWorkingSetList[5] = 0LL;
  if ( v7 < v7 + 4096 )
  {
    do
    {
      v10 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 1) != 0 )
      {
        v11 = (_QWORD *)(v6[10] + *(_QWORD *)(v7 + 8) * *((unsigned int *)v6 + 8));
        v12 = v10 & 0xFFFFFFFFFFFFLL;
        if ( (v10 & 0x800000000000LL) != 0 )
          v12 = v10 | 0xFFFF000000000000uLL;
        v13 = v6[8] + 8 * ((v12 - v6[6]) >> 12);
        if ( v13 >> 47 == -1 || v13 >> 47 == 0 )
        {
          v25 = v5 + (((unsigned __int64)v13 >> 9) & 0x7FFFFFFFF8LL);
          v26 = v5 + ((v25 >> 9) & 0x7FFFFFFFF8LL);
          v27 = v5 + ((v26 >> 9) & 0x7FFFFFFFF8LL);
          v14 = 4;
          v28 = v5 + ((v27 >> 9) & 0x7FFFFFFFF8LL);
          while ( 1 )
          {
            v15 = MI_READ_PTE_LOCK_FREE(*(&v25 + (unsigned int)(v14 - 1)));
            if ( (v15 & 1) == 0 )
              break;
            if ( v15 < 0 )
            {
              if ( v13 < v5 || (unsigned __int64)v13 > 0xFFFFF6FFFFFFFFFFuLL )
                goto LABEL_10;
              break;
            }
            if ( !v14 )
              goto LABEL_10;
          }
        }
        v24 = MiMapWsleHash(a1, v13);
        v5 = 0xFFFFF68000000000uLL;
        if ( v24 )
        {
LABEL_10:
          *(_QWORD *)v13 = *(_QWORD *)(v7 + 8);
          v16 = MI_GET_PFN_FROM_PTE(v5 + (((unsigned __int64)v13 >> 9) & 0x7FFFFFFFF8LL));
          PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v16 + 16), v17, v18);
          updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), PteTimeStamp + 1);
          *(_QWORD *)(v22 + 16) = updated;
        }
        else
        {
          *v11 &= ~4uLL;
        }
      }
      v7 += 16LL;
    }
    while ( v7 < (unsigned __int64)v8 );
  }
  result = MiDeletePteRange(a1, v9, v9 + 8, 0);
  *((_QWORD *)SharedVm + 9) -= result;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 1 )
    return _InterlockedExchangeAdd64(&qword_140327940, -(__int64)result);
  return result;
}
