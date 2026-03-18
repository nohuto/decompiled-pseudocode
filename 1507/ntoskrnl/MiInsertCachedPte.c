/*
 * XREFs of MiInsertCachedPte @ 0x1400B1C20
 * Callers:
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140012CD4 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x140012E20 (MiReplenishBitMap.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiReleaseLargePteMappings @ 0x14014C0D4 (MiReleaseLargePteMappings.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v6; // r12
  int v7; // edi
  char v8; // bl
  __int64 PageFilePte; // rax
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r15
  int i; // ebp
  volatile signed __int64 *v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r8
  unsigned __int64 updated; // rdi
  signed __int64 v21; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v23; // ecx
  _KPROCESS *v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  _KPROCESS *v27; // rax
  signed __int32 v28[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v29; // [rsp+20h] [rbp-68h]
  signed __int64 v30; // [rsp+28h] [rbp-60h] BYREF
  signed __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+A8h] [rbp+20h]

  if ( a3 > 0x40 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v35 = 0;
  v32 = v6;
  if ( (unsigned __int64)(((__int64)((_QWORD)a2 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL )
  {
    v7 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = 1;
    v32 = v6;
  }
  if ( a2 == (unsigned __int64 *)v6 )
    return 0LL;
  if ( a3 == 1 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    PageFilePte = MiMakePageFilePte(a3);
    *v10 = PageFilePte;
    if ( (unsigned __int64)v10 + v11 <= 0x7F8 )
      MiWritePteShadow(v10, PageFilePte);
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( v7 )
    v12 += 72LL * (unsigned __int16)KeNumberNodes;
  v13 = v12 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v28, 0);
  for ( i = KiTbFlushTimeStamp; !KiTbFlushTimeStamp; i = KiTbFlushTimeStamp )
  {
    KeFlushTb(0, 1);
    _InterlockedOr(v28, 0);
  }
  v15 = (volatile signed __int64 *)(v13 + 8LL * (i & 7));
  if ( v35 == 1 )
  {
    v16 = a3 + (__int64)*(int *)(v13 + 64);
    if ( v16 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v16 >= 0x40 )
      MiEmptyPteBins(a1, 0);
  }
  v33 = (unsigned __int64)(v8 & 0xF) << 12;
  v17 = MiMakePageFilePte(0LL);
  updated = v19 | v17 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_21:
  v21 = *v15;
  v29 = *v15;
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = v21;
      if ( (_DWORD)v21 != i )
      {
        if ( HIDWORD(v21) )
          break;
      }
      updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v29));
      *a2 = updated;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(a2, updated);
      LODWORD(v31) = i;
      HIDWORD(v31) = (__int64)((__int64)a2 - v6) >> 3;
      v21 = _InterlockedCompareExchange64(v15, v31, v21);
      v29 = v21;
      if ( v21 == v30 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 64), a3);
        return 1LL;
      }
      v18 = v35;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_21;
    _InterlockedOr(v28, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v21) <= 2
      && ((v21 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v21) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v21 = _InterlockedCompareExchange64(v15, 0LL, v21);
    v29 = v21;
    if ( v21 == v30 )
    {
      if ( v18 )
      {
        v23 = MiReleaseLargePteMappings(a1, &v30, 0LL);
      }
      else
      {
        v24 = MiReplenishBitMap((_KPROCESS *)a1, HIDWORD(v30), 0);
        v23 = (int)v24;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), (unsigned __int64)v24);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 64), -v23);
      v21 = 0LL;
      v29 = 0LL;
    }
    __writecr8(CurrentIrql);
    v6 = v32;
    v18 = v35;
  }
  v25 = (__int64)((__int64)a2 - v6) >> 3;
  HIDWORD(v31) = v25;
  v26 = v33 | MiMakePageFilePte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  *a2 = v26;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(a2, v26);
  if ( v35 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 64), -(int)MiReleaseLargePteMappings(a1, &v31, 0LL));
  }
  else
  {
    v27 = MiReplenishBitMap((_KPROCESS *)a1, (unsigned int)v25, 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), (unsigned __int64)v27);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 64), -(int)v27);
  }
  return 1LL;
}
