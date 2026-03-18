/*
 * XREFs of MiReservePageFileSpace @ 0x1400367C0
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x14006D470 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x140108078 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B84AC (MiUpdateReserveClusterInfo.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x14010880C (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x1401088B0 (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int16 v5; // bx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r9
  unsigned int v23; // esi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  unsigned int FreePageFileSpace; // eax
  unsigned __int64 v30; // rsi
  unsigned int v31; // ebx
  unsigned __int64 i; // r15
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  unsigned int v42; // esi
  int v43; // esi
  int v44; // [rsp+20h] [rbp-50h]
  unsigned __int64 v45; // [rsp+28h] [rbp-48h] BYREF
  __int64 v46; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-38h] BYREF
  __int64 v48; // [rsp+40h] [rbp-30h]
  _BYTE v49[16]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-18h]
  unsigned __int64 v51; // [rsp+60h] [rbp-10h]
  __int64 v53; // [rsp+C0h] [rbp+50h]
  int v54; // [rsp+C8h] [rbp+58h] BYREF

  v53 = a3;
  result = *(unsigned int *)(a1 + 792);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 792);
  v48 = a2;
  v6 = v5 & 0x3FF;
  v54 = result;
  if ( v6 >= 0x10 )
  {
    v7 = 0LL;
    v44 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v49, 1LL);
      if ( !(_DWORD)result )
        return result;
      v11 = v50;
      v13 = v51;
      v44 = 1;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(a3 + 216) & 7) != 0 )
    {
      v11 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v13 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
LABEL_11:
      v14 = ((__int64)(v13 - v11) >> 3) + 1;
      if ( v14 > v6 )
      {
        v37 = (__int64)(v13 - v4) >> 3;
        v38 = (__int64)(v4 - v11) >> 3;
        v39 = v14 - v6;
        if ( (unsigned int)v37 < v39 )
        {
          v41 = v39 - v37;
          v40 = 0LL;
          LODWORD(v38) = v38 - v41;
        }
        else
        {
          v40 = (unsigned int)v37 - v39;
        }
        v13 = v4 + 8 * v40;
        v11 = v4 - 8LL * (unsigned int)v38;
      }
      v15 = ((a3 != 0) << 7) | 1;
      if ( v7 && *(int *)(v7 + 52) < 0 )
        v15 = ((unsigned __int8)v15 ^ (unsigned __int8)(*(_DWORD *)(v7 + 48) >> 1)) & 0x7C ^ v15 | 2;
      v16 = 0LL;
      v17 = v4 - 8;
      v18 = 0;
      v46 = 0LL;
      if ( v4 - 8 >= v11 )
      {
        do
        {
          if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v17, v15, &v46) )
            break;
          ++v18;
          v17 -= 8LL;
        }
        while ( v17 >= v11 );
        v16 = v46;
        v4 = v48;
      }
      v19 = 0LL;
      v20 = v4 + 8;
      v21 = 0LL;
      v47 = 0LL;
      if ( v4 + 8 <= v13 )
      {
        do
        {
          if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v20, v15, &v47) )
            break;
          v21 = (unsigned int)(v21 + 1);
          v20 += 8LL;
        }
        while ( v20 <= v13 );
        v19 = v47;
        v4 = v48;
      }
      v22 = 0LL;
      v23 = v21 + v18 + 1;
      v24 = 0xFFFFFFFF00000000uLL;
      v25 = 0x100000000LL;
      if ( v16 )
      {
        v35 = (unsigned int)v16;
        v36 = (v16 & 0xFFFFFFFF00000000uLL) + 0x100000000LL;
      }
      else
      {
        if ( !v19 || (v25 = v23, v23 >= HIDWORD(v19)) )
        {
          v45 = 0LL;
          v22 = 16LL;
          goto LABEL_26;
        }
        v25 = (unsigned __int64)v23 << 32;
        v24 = v19 ^ (v19 - v25);
        v36 = 0LL;
        v35 = v19 - v25;
      }
      v45 = v35 ^ v36;
LABEL_26:
      result = MI_IS_PTE_IN_WS_SWAP_SET(&v45, v24, v25, v22);
      if ( (_DWORD)result )
      {
        v45 = 0LL;
        v28 |= 0x10u;
      }
      if ( v23 == 1 )
      {
        if ( (v28 & 0x10) != 0 )
          goto LABEL_34;
        v28 |= 0x40u;
      }
      FreePageFileSpace = MiFindFreePageFileSpace(a1, &v45, v23, v28 | 1u);
      v27 = FreePageFileSpace;
      if ( FreePageFileSpace == v23 )
        goto LABEL_30;
      result = MiUpdateReserveClusterInfo(a1, &v54, FreePageFileSpace);
      if ( (_DWORD)v27 )
      {
        v42 = v23 - v27;
        if ( (unsigned int)v21 < v42 )
        {
          v43 = v42 - v21;
          v21 = 0LL;
          v18 -= v43;
        }
        else
        {
          v21 = (unsigned int)v21 - v42;
        }
LABEL_30:
        v30 = v4 + 8 * v21;
        result = 8LL * v18;
        v31 = v15 & 0xFFFFFFFE;
        for ( i = v4 - result; i <= v30; v45 = (unsigned int)v34 ^ ((v34 & 0xFFFFFFFF00000000uLL) + 0x100000000LL) )
        {
          v33 = MiReservePageFileSpaceForPage(a1, i, v31, &v45);
          v34 = v45;
          if ( !v33 )
            MiReleasePageFileInfo(a1, v45, v53 != 0);
          i += 8LL;
          result = (unsigned int)v34;
        }
      }
LABEL_34:
      if ( v44 )
        return MiReleasePageFileSectionInfo(v49, v26, v27);
      return result;
    }
    v8 = a2 << 25 >> 16;
    result = MiLocateAddress(v8, a2);
    v7 = result;
    if ( result && (*(_DWORD *)(result + 48) & 0x88007) == 0x8000 )
    {
      v9 = v8 & 0xFFFFFFFFFFE00000uLL;
      v10 = *(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32);
      if ( v9 >= v10 << 12 )
        v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v11 = 8 * (v10 & 0xFFFFFFFFFLL) - 0x98000000000LL;
      v12 = v9 + 2093056;
      if ( v12 <= (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) << 12 )
        v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v13 = 8
            * ((*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
LABEL_10:
      a3 = v53;
      goto LABEL_11;
    }
  }
  return result;
}
