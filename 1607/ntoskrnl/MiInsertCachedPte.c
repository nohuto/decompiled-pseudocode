/*
 * XREFs of MiInsertCachedPte @ 0x140052170
 * Callers:
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140017698 (MiEmptyPteBins.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiReplenishBitMap @ 0x140088A20 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x1401264F4 (MiReleaseLargePteMappings.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // r13
  int v8; // r10d
  unsigned __int64 v9; // rcx
  char v10; // bl
  __int64 PageFilePte; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // esi
  volatile signed __int64 *v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r10d
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  signed __int64 v22; // r11
  signed __int64 v23; // r9
  unsigned __int8 CurrentIrql; // bp
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 updated; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  signed __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  int v35; // r10d
  unsigned __int64 v36; // rax
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v38; // [rsp+20h] [rbp-58h]
  signed __int64 v39; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v40; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]
  int v43; // [rsp+98h] [rbp+20h]

  v3 = a3;
  if ( a3 > 0x40 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v43 = 0;
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 1;
    v43 = 1;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( a2 == (_QWORD *)v7 )
    return 0LL;
  if ( a3 == 1 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    PageFilePte = MiMakePageFilePte(a3);
    a2[1] = PageFilePte;
    if ( (unsigned int)MiPteInShadowRange(a2 + 1, PageFilePte) )
      MiWritePteShadow(a2 + 1, v12);
  }
  v13 = *(_QWORD *)(a1 + 88);
  if ( v8 )
    v13 += 72LL * (unsigned __int16)KeNumberNodes;
  v14 = v13 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v37, 0);
  v15 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0, 1u);
      _InterlockedOr(v37, 0);
      v15 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v8 = v43;
  }
  v16 = (volatile signed __int64 *)(v14 + 8LL * (v15 & 7));
  if ( v8 == 1 )
  {
    v17 = v3 + *(int *)(v14 + 64);
    if ( v17 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v17 >= 0x40 )
      MiEmptyPteBins(a1, 0);
  }
  v41 = (unsigned __int64)(v10 & 0xF) << 12;
  v18 = MiMakePageFilePte(0LL);
  v21 = v20 | v18 & 0xFFFFFFFFFFFF0FFFuLL;
  v22 = 0LL;
LABEL_23:
  v23 = *v16;
  v38 = *v16;
  while ( 1 )
  {
    while ( 1 )
    {
      v39 = v23;
      if ( (_DWORD)v23 != v15 )
      {
        if ( HIDWORD(v23) )
          break;
      }
      updated = MiUpdatePageFileHighInPte(v21, HIDWORD(v38));
      *a2 = updated;
      v21 = updated;
      if ( (unsigned int)MiPteInShadowRange(a2, v28) )
        MiWritePteShadow(v29, v21);
      LODWORD(v40) = v15;
      HIDWORD(v40) = (__int64)((__int64)a2 - v7) >> 3;
      v23 = _InterlockedCompareExchange64(v16, v40, v30);
      v38 = v23;
      if ( v23 == v39 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 64), a3);
        return 1LL;
      }
    }
    if ( !(_DWORD)v23 )
      goto LABEL_23;
    _InterlockedOr(v37, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v23) <= 2
      && ((v23 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v23) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = _InterlockedCompareExchange64(v16, v22, v23);
    v38 = v23;
    if ( v23 == v39 )
    {
      if ( v19 )
      {
        v25 = MiReleaseLargePteMappings(a1, &v39, 0LL);
      }
      else
      {
        v26 = MiReplenishBitMap(a1, HIDWORD(v39), 0LL);
        v25 = v26;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v26);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 64), -v25);
      v23 = 0LL;
      v38 = 0LL;
      v22 = 0LL;
    }
    __writecr8(CurrentIrql);
    v19 = v43;
  }
  HIDWORD(v40) = (__int64)((__int64)a2 - v7) >> 3;
  v31 = v41 | MiMakePageFilePte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  *a2 = v31;
  if ( (unsigned int)MiPteInShadowRange(a2, v31) )
    MiWritePteShadow(v33, v32);
  if ( v35 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 64), -(int)MiReleaseLargePteMappings(a1, &v40, 0LL));
  }
  else
  {
    v36 = MiReplenishBitMap(a1, v34, 0LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v36);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 64), -(int)v36);
  }
  return 1LL;
}
