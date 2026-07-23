/*
 * XREFs of MiReservePageFileSpace @ 0x14001E150
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x1400E2AF0 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x140123C70 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B32A8 (MiUpdateReserveClusterInfo.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x140115FF8 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x14011609C (MiReleasePageFileSectionInfo.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int16 v5; // bx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r9
  unsigned int v28; // esi
  __int64 PteTimeStamp; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  int v34; // r9d
  unsigned int FreePageFileSpace; // eax
  int v36; // r8d
  unsigned int v37; // esi
  int v38; // esi
  unsigned __int64 v39; // rsi
  unsigned int v40; // ebx
  unsigned __int64 i; // r15
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // [rsp+20h] [rbp-50h]
  unsigned __int64 updated; // [rsp+28h] [rbp-48h] BYREF
  __int64 v49; // [rsp+30h] [rbp-40h] BYREF
  __int64 v50; // [rsp+38h] [rbp-38h] BYREF
  __int64 v51; // [rsp+40h] [rbp-30h]
  _BYTE v52[16]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-18h]
  unsigned __int64 v54; // [rsp+60h] [rbp-10h]
  __int64 v56; // [rsp+C0h] [rbp+50h]
  int v57; // [rsp+C8h] [rbp+58h] BYREF

  v56 = a3;
  result = *(unsigned int *)(a1 + 784);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 784);
  v51 = a2;
  v6 = v5 & 0x3FF;
  v57 = result;
  if ( v6 >= 0x10 )
  {
    v7 = 0LL;
    v47 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v52, 1LL);
      if ( !(_DWORD)result )
        return result;
      v8 = v53;
      v9 = v54;
      v47 = 1;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v8 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v9 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_18;
    }
    v10 = a2 << 25 >> 16;
    result = MiLocateAddress(v10, a2);
    v7 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 48);
      if ( (result & 0x80000) == 0 && (result & 0x8000) != 0 && (result & 7) == 0 )
      {
        v12 = v10 & 0xFFFFFFFFFFE00000uLL;
        a2 = 0xFFFFFFFFFLL;
        if ( v12 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 )
          v8 = v11 + ((v12 >> 9) & 0x7FFFFFFFF8LL);
        else
          v8 = v11
             + 8
             * ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) & 0xFFFFFFFFFLL);
        v13 = v12 + 2093056;
        if ( v13 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12 )
          v9 = v11 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
        else
          v9 = v11
             + 8
             * ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) & 0xFFFFFFFFFLL);
LABEL_17:
        a3 = v56;
LABEL_18:
        v14 = ((__int64)(v9 - v8) >> 3) + 1;
        if ( v14 > v6 )
        {
          v15 = (__int64)(v9 - v4) >> 3;
          v16 = (__int64)(v4 - v8) >> 3;
          v17 = v14 - v6;
          if ( (unsigned int)v15 < v17 )
          {
            v19 = v17 - v15;
            v18 = 0LL;
            LODWORD(v16) = v16 - v19;
          }
          else
          {
            v18 = (unsigned int)v15 - v17;
          }
          v9 = v4 + 8 * v18;
          v8 = v4 - 8LL * (unsigned int)v16;
        }
        v20 = ((a3 != 0) << 7) | 1;
        if ( v7 && *(int *)(v7 + 52) < 0 )
          v20 = ((unsigned __int8)v20 ^ (unsigned __int8)(*(_DWORD *)(v7 + 48) >> 1)) & 0x7C ^ v20 | 2;
        v21 = 0LL;
        v22 = v4 - 8;
        v23 = 0;
        v49 = 0LL;
        if ( v4 - 8 >= v8 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v22, v20, &v49) )
              break;
            ++v23;
            v22 -= 8LL;
          }
          while ( v22 >= v8 );
          v21 = v49;
          v4 = v51;
        }
        v24 = 0LL;
        v25 = v4 + 8;
        v26 = 0LL;
        v50 = 0LL;
        if ( v4 + 8 <= v9 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v25, v20, &v50) )
              break;
            v26 = (unsigned int)(v26 + 1);
            v25 += 8LL;
          }
          while ( v25 <= v9 );
          v24 = v50;
          v4 = v51;
        }
        v27 = 0LL;
        v28 = v26 + v23 + 1;
        if ( v21 )
        {
          PteTimeStamp = MiGetPteTimeStamp(v21, a2, v24);
          v30 = v21;
          v31 = PteTimeStamp + 1;
        }
        else
        {
          if ( !v24 || (v32 = MiGetPteTimeStamp(v24, a2, v24), v28 >= v32) )
          {
            updated &= v27;
            v33 = 16LL;
LABEL_41:
            result = MI_IS_PTE_IN_WS_SWAP_SET(&updated, a2, v24, v33);
            if ( (_DWORD)result )
            {
              updated = 0LL;
              v34 |= 0x10u;
            }
            if ( v28 == 1 )
            {
              if ( (v34 & 0x10) != 0 )
                goto LABEL_55;
              v34 |= 0x40u;
            }
            FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v28, v34 | 1u);
            if ( FreePageFileSpace == v28 )
              goto LABEL_51;
            result = MiUpdateReserveClusterInfo(a1, &v57, FreePageFileSpace);
            if ( v36 )
            {
              v37 = v28 - v36;
              if ( (unsigned int)v26 < v37 )
              {
                v38 = v37 - v26;
                v26 = 0LL;
                v23 -= v38;
              }
              else
              {
                v26 = (unsigned int)v26 - v37;
              }
LABEL_51:
              v39 = v4 + 8 * v26;
              result = 8LL * v23;
              v40 = v20 & 0xFFFFFFFE;
              for ( i = v4 - result; i <= v39; updated = result )
              {
                v42 = MiReservePageFileSpaceForPage(a1, i, v40, &updated);
                v45 = updated;
                if ( !v42 )
                  MiReleasePageFileInfo((struct _KEVENT *)a1, updated, v56 != 0);
                v46 = MiGetPteTimeStamp(v45, v43, v44);
                result = MiUpdatePageFileHighInPte(v45, v46 + 1);
                i += 8LL;
              }
            }
LABEL_55:
            if ( v47 )
              return MiReleasePageFileSectionInfo(v52);
            return result;
          }
          v30 = v24;
          v31 = v32 - v28;
        }
        updated = MiUpdatePageFileHighInPte(v30, v31);
        goto LABEL_41;
      }
    }
  }
  return result;
}
