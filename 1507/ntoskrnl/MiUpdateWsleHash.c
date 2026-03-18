/*
 * XREFs of MiUpdateWsleHash @ 0x140097290
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 *     MiUpdateWsle @ 0x1400BE660 (MiUpdateWsle.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiMapWsleHash @ 0x14003C764 (MiMapWsleHash.c)
 *     MiConvertWsleHash @ 0x1401063E0 (MiConvertWsleHash.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiUpdateWsleHash(ULONG_PTR a1, unsigned __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rbx
  unsigned __int64 *v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  signed __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 *v34; // r10
  unsigned __int64 PteShadow; // rax
  __int64 v36; // r11
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r9
  char v43; // cl
  __int64 PteTimeStamp; // rax
  __int64 v45; // r8
  __int64 v46; // r11
  unsigned __int64 v48; // [rsp+38h] [rbp-70h]
  unsigned __int64 v49; // [rsp+40h] [rbp-68h]
  unsigned __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+50h] [rbp-58h]

  v4 = *(_QWORD *)(a3 + 184);
  v5 = a4;
  v9 = *(_QWORD *)(v4 + 88);
  result = a2 * *(unsigned int *)(v4 + 64);
  v11 = *(_QWORD *)(result + *(_QWORD *)(v4 + 496));
  if ( (v9 & 1) == 0 )
  {
LABEL_7:
    v15 = *(_QWORD *)(v4 + 88);
    if ( !v15 || (v15 & 1) != 0 )
    {
LABEL_31:
      if ( (a1 & 0x800000000000LL) != 0 )
        v21 = a1 | 0xFFFF000000000000uLL;
      else
        v21 = a1 & 0xFFFFFFFFFFFFLL;
      v32 = *(_QWORD *)(v4 + 96) + 8 * ((v21 - *(_QWORD *)(v4 + 80)) >> 12);
      result = (v32 >> 47) + 1;
      if ( v32 >> 47 == -1 || result == 1 )
      {
        LODWORD(v33) = 4;
        v48 = (((unsigned __int64)v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v33 = (unsigned int)(v33 - 1);
          result = *(_QWORD *)*(&v48 + v33);
          if ( (result & 1) == 0 )
            break;
          if ( (unsigned int)v33 <= 1 && (result & 0x80u) != 0LL )
          {
            if ( (_DWORD)v33 )
              goto LABEL_64;
            break;
          }
          if ( !(_DWORD)v33 )
            goto LABEL_64;
        }
      }
      if ( (*(_BYTE *)(a3 + 219) & 2) != 0 )
        return result;
      result = MiMapWsleHash(a3, v32);
      if ( !(_DWORD)result )
        return result;
LABEL_64:
      v34 = (unsigned __int64 *)((((unsigned __int64)v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v34;
      if ( (unsigned __int64)(v34 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow((((unsigned __int64)v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v34);
      v36 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v37 = *(_QWORD *)(v36 + 16);
      if ( (a4 & 1) == 0 )
      {
        *(_QWORD *)v32 = a2;
        *(_QWORD *)(a2 * *(unsigned int *)(v4 + 64) + *(_QWORD *)(v4 + 496)) = v11 | 4;
        PteTimeStamp = MiGetPteTimeStamp(v37);
        result = MiUpdatePageFileHighInPte(v45, PteTimeStamp + 1);
        *(_QWORD *)(v46 + 16) = result;
        return result;
      }
      v38 = MiGetPteTimeStamp(*(_QWORD *)(v36 + 16));
      *(_QWORD *)(a2 * *(unsigned int *)(v4 + 64) + *(_QWORD *)(v4 + 496)) = v11 & 0xFFFFFFFFFFFFFFFBuLL;
      result = MiUpdatePageFileHighInPte(v39, v38 - 1);
      *(_QWORD *)(v41 + 16) = result;
      if ( v42 )
      {
        *(_QWORD *)v32 = 0LL;
        return result;
      }
      v25 = v40 + 8;
      v24 = v40;
    }
    else
    {
      a1 &= 0xFFFFFFFFFFFFF000uLL;
      if ( (v5 & 1) != 0 )
        v16 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
      else
        v16 = 0LL;
      v17 = (unsigned __int8)(a1 >> 12);
      while ( 1 )
      {
        result = 2 * v17;
        if ( v16 )
        {
          v19 = *(_QWORD *)(v15 + 16 * v17);
          if ( (v19 & 1) != 0 )
          {
            if ( (v19 & 0x800000000000LL) != 0 )
            {
              result = 0xFFFF000000000001uLL;
              v20 = v19 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              result = 0xFFFFFFFFF000LL;
              v20 = v19 & 0xFFFFFFFFF000LL | 1;
            }
          }
          else
          {
            v20 = 0LL;
          }
          v18 = v20 == v16;
        }
        else
        {
          v18 = *(_QWORD *)(v15 + 16 * v17) == 0LL;
        }
        if ( v18 )
          break;
        if ( (unsigned __int64)++v17 >= 0x100 )
          v17 = 0LL;
        if ( v17 == (unsigned __int8)(a1 >> 12) )
        {
          if ( (v5 & 1) != 0 )
            KeBugCheckEx(0x1Au, 0x41285uLL, a3, a1, v5);
          if ( (*(_BYTE *)(a3 + 219) & 2) == 0 )
          {
            MiConvertWsleHash(a3);
            goto LABEL_31;
          }
          return result;
        }
      }
      v22 = 2 * v17;
      result = *(_QWORD *)(v4 + 496);
      v23 = a2 * *(unsigned int *)(v4 + 64);
      if ( (v5 & 1) == 0 )
      {
        v26 = v11 | 4;
        v27 = (unsigned __int64 *)(v15 + 8 * v22);
        *(_QWORD *)(v23 + result) = v26;
        v27[1] = a2;
        v28 = v26 & 0x800000000000LL;
        if ( (v26 & 0x800000000000LL) != 0 )
          result = v26 | 0xFFFF000000000000uLL;
        else
          result = v26 & 0xFFFFFFFFFFFFLL;
        if ( (result & 1) != 0 )
        {
          if ( v28 )
            v29 = v26 | 0xFFFF000000000000uLL;
          else
            v29 = v26 & 0xFFFFFFFFFFFFLL;
          if ( (v29 & 0x800000000000LL) != 0 )
          {
            if ( v28 )
              v30 = v26 | 0xFFFF000000000000uLL;
            else
              v30 = v26 & 0xFFFFFFFFFFFFLL;
            result = 0xFFFF000000000001uLL;
            *v27 = v30 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            ++*(_QWORD *)(v4 + 72);
          }
          else
          {
            if ( v28 )
              v31 = v26 | 0xFFFF000000000000uLL;
            else
              v31 = v26 & 0xFFFFFFFFFFFFLL;
            result = 0xFFFFFFFFF000LL;
            *v27 = v31 & 0xFFFFFFFFF000LL | 1;
            ++*(_QWORD *)(v4 + 72);
          }
        }
        else
        {
          *v27 = 0LL;
          ++*(_QWORD *)(v4 + 72);
        }
        return result;
      }
      *(_QWORD *)(v23 + result) = v11 & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)(v15 + 8 * v22) = 0LL;
      v18 = (*(_QWORD *)(v4 + 72))-- == 1LL;
      if ( !v18 )
        return result;
      v24 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)(v4 + 88) = v15 | 1;
      v25 = v24 + 8;
    }
    result = MiDeletePteRange(a3, v24, v25, 0LL);
    v43 = *(_BYTE *)(a3 + 216);
    *(_QWORD *)(a3 + 160) -= result;
    if ( (v43 & 7) != 1 )
      return _InterlockedExchangeAdd64(&qword_14034FCF8, -result);
    return result;
  }
  if ( (*(_BYTE *)(a3 + 219) & 2) == 0 )
  {
    v12 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = 0LL;
    v14 = v12;
    while ( 1 )
    {
      result = MiMapWsleHash(a3, v14);
      if ( !(_DWORD)result )
        break;
      ++v13;
      v14 += 4096LL;
      if ( v13 )
      {
        v5 = a4;
        *(_QWORD *)(v4 + 72) = 0LL;
        *(_QWORD *)(v4 + 88) = v12;
        goto LABEL_7;
      }
    }
  }
  return result;
}
