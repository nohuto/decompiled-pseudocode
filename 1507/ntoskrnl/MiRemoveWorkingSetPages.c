/*
 * XREFs of MiRemoveWorkingSetPages @ 0x1401089A0
 * Callers:
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MiCleanWorkingSet @ 0x1401088D4 (MiCleanWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640 (MiEmptyWorkingSetPrivatePagesByVa.c)
 * Callees:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     MiReplaceWsleHash @ 0x140108E30 (MiReplaceWsleHash.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

unsigned __int64 __fastcall MiRemoveWorkingSetPages(ULONG_PTR a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // r11
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // rdi
  unsigned __int64 PteShadow; // rax
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 result; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r10
  ULONG_PTR v27; // r8
  ULONG_PTR v28; // r9
  _QWORD *v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned int *)(v2 + 64);
  v4 = *(_QWORD *)(v2 + 496);
  v5 = v3;
  v6 = *(_QWORD *)(v2 + 8);
  v30 = v4;
  v7 = v6;
  v34 = v3;
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    v7 = v6 - 1;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 120) - v7;
  v33 = v9;
  v32 = 0;
  if ( !v9 )
  {
    v10 = (unsigned __int64 *)(v4 + v6 * v3);
    goto LABEL_33;
  }
  v11 = *(_QWORD *)(v2 + 8);
  v12 = v6 * v3;
  v6 = *(_QWORD *)(v2 + 16);
  v13 = (unsigned __int64 *)(v4 + v12);
  v10 = (unsigned __int64 *)(v4 + v6 * v3);
  if ( v13 >= v10 )
  {
    v5 = *(unsigned int *)(v2 + 64);
    goto LABEL_33;
  }
  v14 = 0x8000000000000000uLL;
  while ( 1 )
  {
    if ( (*(_BYTE *)v13 & 1) == 0 )
    {
      v15 = *v10;
      if ( (*v10 & 1) == 0 )
      {
        v10 = (unsigned __int64 *)((char *)v10 - v3);
        --v6;
        goto LABEL_28;
      }
      if ( (v15 & 0x800000000000LL) != 0 )
        v16 = v15 | 0xFFFF000000000000uLL;
      else
        v16 = v15 & 0xFFFFFFFFFFFFLL;
      v17 = (unsigned __int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v17;
      if ( (unsigned __int64)(v17 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v17, *v17);
      v19 = (unsigned __int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v20 = v19[1];
      if ( (v20 & v14) == 0 )
      {
        MiDemoteCombinedPte(v17, v14 | v20);
        v15 = *v10;
      }
      v32 = 1;
      MiRemoveEntryWsle(v2, (__int64 *)v10);
      *(_QWORD *)(v11 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496)) = v15;
      MiInsertWsle(v2, v13, 1);
      v21 = *v13;
      if ( (*v13 & 8) != 0 )
      {
        if ( (v19[5] & 0x200000000000000LL) == 0 )
        {
          *v19 = v11;
LABEL_26:
          MiWriteValidPteVolatile(v17, v11 | 0x80000000);
          v14 = 0x8000000000000000uLL;
          *(_QWORD *)(v6 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496)) = 0LL;
          v3 = *(unsigned int *)(v2 + 64);
          v9 = v33;
          v10 = (unsigned __int64 *)((char *)v10 - v3);
          --v6;
          goto LABEL_27;
        }
        v21 &= ~8uLL;
        *(_QWORD *)(v11 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496)) = v21;
      }
      else if ( (v21 & 4) != 0 )
      {
        MiReplaceWsleHash(a1);
        goto LABEL_26;
      }
      if ( (v21 & 0x800000000000LL) != 0 )
        MiUpdateWsleHash(v21 | 0xFFFF000000000000uLL, v11, a1, 0);
      else
        MiUpdateWsleHash(v21 & 0xFFFFFFFFFFFFLL, v11, a1, 0);
      goto LABEL_26;
    }
LABEL_27:
    v13 = (unsigned __int64 *)((char *)v13 + v3);
    ++v11;
    v33 = --v9;
LABEL_28:
    if ( !v9 )
      break;
    if ( v13 >= v10 )
      goto LABEL_30;
  }
  v10 = v13;
  v6 = v11;
LABEL_30:
  v1 = a1;
  v8 = v32;
  v4 = v30;
  v5 = v34;
LABEL_33:
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v10 = (unsigned __int64 *)((char *)v10 + *(unsigned int *)(v2 + 64));
    ++v6;
  }
  *(_QWORD *)(v2 + 16) = v6 - 1;
  if ( v8
    || (result = ((unsigned __int64)v10 + 4095) & 0xFFFFFFFFFFFFF000uLL,
        result != v4 + *(unsigned int *)(v2 + 64) * (*(_QWORD *)(v2 + 32) + 1LL)) )
  {
    v23 = *(unsigned int *)(v2 + 64);
    v24 = (((unsigned __int64)v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v25 = (((unsigned __int64)(v4 + *(_QWORD *)(v2 + 32) * v23) >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( ((unsigned __int16)v10 & 0xFFF) != 0 )
    {
      if ( *(_QWORD *)v2 != 0xFFFFFFFFFLL )
      {
        *(_QWORD *)v2 = 0xFFFFFFFFFLL;
        v26 = ((((unsigned __int64)v10 + 4095) & 0xFFFFFFFFFFFFF000uLL) - v23 - v4) / v5;
        *(_QWORD *)(v2 + 32) = v26;
        do
        {
          v27 = *(_QWORD *)(v1 + 184);
          v28 = *(_QWORD *)v27;
          if ( *(_QWORD *)v27 != 0xFFFFFFFFFLL )
          {
            if ( v28 < *(_QWORD *)(v27 + 8) || v28 > *(_QWORD *)(v27 + 32) )
              KeBugCheckEx(0x1Au, 0x5004uLL, v27, v28, *(_QWORD *)(v27 + 32));
            v29 = (_QWORD *)(*(_QWORD *)(v27 + 496) + v28 * *(unsigned int *)(v27 + 64));
            *v29 ^= (*(_DWORD *)v29 ^ (2 * (_DWORD)v26)) & 0xFFFFFFE;
          }
          *(_QWORD *)(v26 * *(unsigned int *)(v27 + 64) + *(_QWORD *)(v27 + 496)) = (v28 << 28) | 0xFFFFFFE;
          *(_QWORD *)v27 = v26--;
        }
        while ( v26 >= v6 );
      }
    }
    else
    {
      *(_QWORD *)(v2 + 32) = v6 - 1;
      v24 = (((unsigned __int64)v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)v2 = 0xFFFFFFFFFLL;
    }
    result = *(_QWORD *)(v2 + 8);
    *(_QWORD *)(v2 + 24) = result;
    if ( v24 < v25 )
      return MiDeletePteRange(v1, v24, v25, 16LL);
  }
  return result;
}
