/*
 * XREFs of MiReservePageFileSpace @ 0x1400DCF1C
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x1400AE5D0 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x14013A3CC (MiFillNoReservationCluster.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A8D4 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A978 (MiReleasePageFileSectionInfo.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r15
  __int16 v5; // di
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  __int64 updated; // rbx
  unsigned __int64 v20; // r12
  unsigned int v21; // r13d
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r9
  unsigned int v26; // esi
  __int16 v27; // cx
  unsigned int v28; // esi
  int v29; // esi
  unsigned __int64 v30; // rsi
  unsigned int v31; // edi
  unsigned __int64 i; // r15
  int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 PteTimeStamp; // rax
  int v36; // [rsp+30h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-48h] BYREF
  __int64 v38; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39; // [rsp+48h] [rbp-38h] BYREF
  __int64 v40; // [rsp+50h] [rbp-30h]
  _BYTE v41[16]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-18h]
  unsigned __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+D0h] [rbp+50h]
  int v46; // [rsp+D8h] [rbp+58h] BYREF

  v45 = a3;
  result = *(unsigned int *)(a1 + 784);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 784);
  v40 = a2;
  v6 = v5 & 0x3FF;
  v46 = result;
  if ( v6 >= 0x10 )
  {
    v7 = 0LL;
    v36 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v41, 1LL);
      if ( !(_DWORD)result )
        return result;
      v8 = v42;
      v9 = v43;
      v36 = 1;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(a3 + 216) & 7) != 0 )
    {
      v8 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v9 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_18;
    }
    v10 = a2 << 25 >> 16;
    result = (unsigned __int64)MiLocateAddress(v10);
    v7 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 48);
      if ( (result & 0x80000000) == 0 && (result & 0x8000) != 0 && (result & 7) == 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFE00000uLL;
        a2 = 0xFFFFFFFFFLL;
        if ( v11 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 )
          v8 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v8 = 8
             * ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) & 0xFFFFFFFFFLL)
             - 0x98000000000LL;
        v12 = v11 + 2093056;
        if ( v12 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12 )
          v9 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v9 = 8
             * ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) & 0xFFFFFFFFFLL)
             - 0x98000000000LL;
LABEL_17:
        a3 = v45;
LABEL_18:
        result = (unsigned int)((__int64)(v9 - v8) >> 3) + 1;
        if ( (unsigned int)result > v6 )
        {
          v13 = (__int64)(v9 - v4) >> 3;
          v14 = (__int64)(v4 - v8) >> 3;
          v15 = result - v6;
          if ( (unsigned int)v13 < v15 )
          {
            v17 = v15 - v13;
            v16 = 0LL;
            LODWORD(v14) = v14 - v17;
          }
          else
          {
            v16 = (unsigned int)v13 - v15;
          }
          v9 = v4 + 8 * v16;
          result = 8LL * (unsigned int)v14;
          v8 = v4 - result;
        }
        v18 = ((a3 != 0) << 7) | 1;
        if ( v7 && (*(_DWORD *)(v7 + 52) & 0x80000000) != 0 )
        {
          result = ((unsigned __int8)v18 ^ (unsigned __int8)(*(_DWORD *)(v7 + 48) >> 1)) & 0x7C;
          v18 = result ^ v18 | 2;
        }
        updated = 0LL;
        v20 = v4 - 8;
        v21 = 0;
        v38 = 0LL;
        if ( v4 - 8 >= v8 )
        {
          do
          {
            result = MiReservePageFileSpaceForPage(a1, v20, v18, &v38);
            if ( !(_DWORD)result )
              break;
            ++v21;
            v20 -= 8LL;
          }
          while ( v20 >= v8 );
          updated = v38;
          v4 = v40;
        }
        v22 = 0LL;
        v23 = v4 + 8;
        v24 = 0LL;
        v39 = 0LL;
        if ( v4 + 8 <= v9 )
        {
          do
          {
            result = MiReservePageFileSpaceForPage(a1, v23, v18, &v39);
            if ( !(_DWORD)result )
              break;
            v24 = (unsigned int)(v24 + 1);
            v23 += 8LL;
          }
          while ( v23 <= v9 );
          v22 = v39;
          v4 = v40;
        }
        v25 = 0LL;
        v26 = v24 + v21 + 1;
        if ( !updated )
        {
          if ( v22 )
          {
            result = MiGetPteTimeStamp(v22);
            if ( v26 < result )
            {
              updated = MiUpdatePageFileHighInPte(v22, result - v26);
              v37 = updated;
              goto LABEL_41;
            }
          }
          if ( v26 == 1 )
            goto LABEL_54;
          updated = 0LL;
          LOBYTE(v25) = 8;
        }
        v37 = updated;
LABEL_41:
        v27 = *(_WORD *)(qword_1403551E0[(unsigned __int16)updated >> 12] + 164LL);
        if ( (v27 & 0x10) != 0 || (v27 & 0x20) != 0 && (updated & 2) != 0 )
        {
          v37 = 0LL;
          LOBYTE(v25) = v25 | 8;
        }
        result = MiFindFreePageFileSpace(a1, &v37, v26, (__int64)&v46, (unsigned __int8)v25 | 1u);
        if ( (_DWORD)result == v26 )
          goto LABEL_50;
        if ( (_DWORD)result )
        {
          v28 = v26 - result;
          if ( (unsigned int)v24 < v28 )
          {
            v29 = v28 - v24;
            v24 = 0LL;
            v21 -= v29;
          }
          else
          {
            v24 = (unsigned int)v24 - v28;
          }
LABEL_50:
          v30 = v4 + 8 * v24;
          result = 8LL * v21;
          v31 = v18 & 0xFFFFFFFE;
          for ( i = v4 - result; i <= v30; v37 = result )
          {
            v33 = MiReservePageFileSpaceForPage(a1, i, v31, &v37);
            v34 = v37;
            if ( !v33 )
              MiReleasePageFileInfo(a1, v37, v45 != 0);
            PteTimeStamp = MiGetPteTimeStamp(v34);
            result = MiUpdatePageFileHighInPte(v34, PteTimeStamp + 1);
            i += 8LL;
          }
        }
LABEL_54:
        if ( v36 )
          return MiReleasePageFileSectionInfo(v41, a2, v22, v25);
      }
    }
  }
  return result;
}
