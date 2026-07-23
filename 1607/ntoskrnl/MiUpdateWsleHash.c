/*
 * XREFs of MiUpdateWsleHash @ 0x140048900
 * Callers:
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 * Callees:
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiConvertWsleHash @ 0x140100840 (MiConvertWsleHash.c)
 *     MiMapWsleHash @ 0x140100B00 (MiMapWsleHash.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiUpdateWsleHash(ULONG_PTR a1, unsigned __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  LONG *v4; // r13
  unsigned int v5; // ebp
  unsigned __int64 v7; // rsi
  ULONG_PTR *v9; // rdi
  ULONG_PTR v10; // r14
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  ULONG_PTR v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned __int64 *v28; // r9
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rsi
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 updated; // rax
  __int64 v41; // r10
  __int64 v42; // r11
  __int64 v43; // r9
  __int64 PteTimeStamp; // rax
  __int64 v45; // r8
  __int64 v46; // r11
  unsigned __int64 v49; // [rsp+40h] [rbp-78h]
  unsigned __int64 v50; // [rsp+48h] [rbp-70h]
  unsigned __int64 v51; // [rsp+50h] [rbp-68h]
  __int64 v52; // [rsp+58h] [rbp-60h]

  v4 = &dword_140327CC0;
  v5 = a4;
  v7 = a2;
  if ( (*(_BYTE *)(a3 + 184) & 7) == 2 )
  {
    v9 = &BugCheckParameter2;
  }
  else
  {
    v4 = (LONG *)(a3 + 192);
    v9 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
  }
  v10 = v9[7];
  result = a2 * *((unsigned int *)v9 + 8);
  v12 = *(_QWORD *)(result + v9[10]);
  if ( (v10 & 1) == 0 )
  {
LABEL_9:
    v16 = v9[7];
    if ( !v16 || (v16 & 1) != 0 )
    {
LABEL_34:
      if ( (a1 & 0x800000000000LL) != 0 )
        v22 = a1 | 0xFFFF000000000000uLL;
      else
        v22 = a1 & 0xFFFFFFFFFFFFLL;
      v33 = v9[8] + 8 * ((v22 - v9[6]) >> 12);
      result = (v33 >> 47) + 1;
      if ( v33 >> 47 == -1 || result == 1 )
      {
        v49 = (((unsigned __int64)v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v34 = 4;
        v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          result = MI_READ_PTE_LOCK_FREE(*(&v49 + (unsigned int)(v34 - 1)));
          if ( (result & 1) == 0 )
            break;
          if ( (result & 0x80u) != 0LL )
          {
            if ( (unsigned __int64)v33 < 0xFFFFF68000000000uLL )
              goto LABEL_67;
            result = 0xFFFFF6FFFFFFFFFFuLL;
            if ( (unsigned __int64)v33 > 0xFFFFF6FFFFFFFFFFuLL )
              goto LABEL_67;
            break;
          }
          if ( !v34 )
            goto LABEL_67;
        }
      }
      if ( (*(_BYTE *)(a3 + 187) & 2) != 0 )
        return result;
      result = MiMapNewWorkingSetPage(a3, v33, 0LL);
      if ( !(_DWORD)result )
        return result;
LABEL_67:
      v35 = MI_GET_PFN_FROM_PTE((((unsigned __int64)v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v37 = *(_QWORD *)(v35 + 16);
      if ( (a4 & 1) == 0 )
      {
        *(_QWORD *)v33 = a2;
        *(_QWORD *)(a2 * *((unsigned int *)v9 + 8) + v9[10]) = v12 | 4;
        PteTimeStamp = MiGetPteTimeStamp(v37, v36, v37);
        result = MiUpdatePageFileHighInPte(v45, PteTimeStamp + 1);
        *(_QWORD *)(v46 + 16) = result;
        return result;
      }
      v38 = MiGetPteTimeStamp(*(_QWORD *)(v35 + 16), v36, v37);
      *(_QWORD *)(a2 * *((unsigned int *)v9 + 8) + v9[10]) = v12 & 0xFFFFFFFFFFFFFFFBuLL;
      updated = MiUpdatePageFileHighInPte(v39, v38 - 1);
      *(_QWORD *)(v42 + 16) = updated;
      if ( v43 )
      {
        result = 0LL;
        *(_QWORD *)v33 = 0LL;
        return result;
      }
      v26 = v41 + 8;
      v25 = v41;
    }
    else
    {
      a1 &= 0xFFFFFFFFFFFFF000uLL;
      if ( (v5 & 1) != 0 )
        v17 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
      else
        v17 = 0LL;
      v18 = (unsigned __int8)(a1 >> 12);
      while ( 1 )
      {
        result = 2 * v18;
        if ( v17 )
        {
          v20 = *(_QWORD *)(v16 + 16 * v18);
          if ( (v20 & 1) != 0 )
          {
            if ( (v20 & 0x800000000000LL) != 0 )
            {
              result = 0xFFFF000000000001uLL;
              v21 = v20 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              result = 0xFFFFFFFFF000LL;
              v21 = v20 & 0xFFFFFFFFF000LL | 1;
            }
          }
          else
          {
            v21 = 0LL;
          }
          v19 = v21 == v17;
        }
        else
        {
          v19 = *(_QWORD *)(v16 + 16 * v18) == 0LL;
        }
        if ( v19 )
          break;
        if ( (unsigned __int64)++v18 >= 0x100 )
          v18 = 0LL;
        if ( v18 == (unsigned __int8)(a1 >> 12) )
        {
          if ( (v5 & 1) != 0 )
            KeBugCheckEx(0x1Au, 0x41285uLL, a3, a1, v5);
          if ( (*(_BYTE *)(a3 + 187) & 2) == 0 )
          {
            MiConvertWsleHash(a3);
            goto LABEL_34;
          }
          return result;
        }
      }
      v23 = 2 * v18;
      result = v9[10];
      v24 = v7 * *((unsigned int *)v9 + 8);
      if ( (v5 & 1) == 0 )
      {
        v27 = v12 | 4;
        v28 = (unsigned __int64 *)(v16 + 8 * v23);
        *(_QWORD *)(v24 + result) = v27;
        v28[1] = v7;
        v29 = v27 & 0x800000000000LL;
        if ( (v27 & 0x800000000000LL) != 0 )
          result = v27 | 0xFFFF000000000000uLL;
        else
          result = v27 & 0xFFFFFFFFFFFFLL;
        if ( (result & 1) != 0 )
        {
          if ( v29 )
            v30 = v27 | 0xFFFF000000000000uLL;
          else
            v30 = v27 & 0xFFFFFFFFFFFFLL;
          if ( (v30 & 0x800000000000LL) != 0 )
          {
            if ( v29 )
              v31 = v27 | 0xFFFF000000000000uLL;
            else
              v31 = v27 & 0xFFFFFFFFFFFFLL;
            result = 0xFFFF000000000001uLL;
            *v28 = v31 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            ++v9[5];
          }
          else
          {
            if ( v29 )
              v32 = v27 | 0xFFFF000000000000uLL;
            else
              v32 = v27 & 0xFFFFFFFFFFFFLL;
            result = 0xFFFFFFFFF000LL;
            *v28 = v32 & 0xFFFFFFFFF000LL | 1;
            ++v9[5];
          }
        }
        else
        {
          *v28 = 0LL;
          ++v9[5];
        }
        return result;
      }
      *(_QWORD *)(v24 + result) = v12 & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)(v16 + 8 * v23) = 0LL;
      v19 = v9[5]-- == 1;
      if ( !v19 )
        return result;
      v25 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9[7] = v16 | 1;
      v26 = v25 + 8;
    }
    result = MiDeletePteRange(a3, v25, v26, 0LL);
    *((_QWORD *)v4 + 9) -= result;
    if ( (*(_BYTE *)(a3 + 184) & 7) != 1 )
      return _InterlockedExchangeAdd64(&qword_140327940, -result);
    return result;
  }
  if ( (*(_BYTE *)(a3 + 187) & 2) == 0 )
  {
    v13 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    v14 = 0LL;
    v15 = v13;
    while ( 1 )
    {
      result = MiMapWsleHash(a3, v15);
      if ( !(_DWORD)result )
        break;
      ++v14;
      v15 += 4096LL;
      if ( v14 )
      {
        v7 = a2;
        v5 = a4;
        v9[5] = 0LL;
        v9[7] = v13;
        goto LABEL_9;
      }
    }
  }
  return result;
}
