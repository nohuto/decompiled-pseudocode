/*
 * XREFs of MiInsertCachedPte @ 0x140068430
 * Callers:
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x140013B2C (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x140013C80 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x1401171C8 (MiReleaseLargePteMappings.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v7; // rcx
  int v8; // r14d
  char v9; // si
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  int i; // r14d
  int v14; // ecx
  volatile signed __int64 *v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  signed __int64 v20; // rbx
  int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v26; // [rsp+20h] [rbp-68h]
  unsigned __int64 v27; // [rsp+28h] [rbp-60h]
  signed __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  signed __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  if ( a3 > 0x40 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v32 = 0;
  v27 = v7;
  v8 = 0;
  if ( (unsigned __int64)(((__int64)((_QWORD)a2 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL )
  {
    v8 = 1;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = 1;
    v27 = v7;
  }
  if ( a2 == (_QWORD *)v7 )
    return 0LL;
  if ( a3 == 1 )
  {
    v9 = 1;
  }
  else
  {
    v10 = (unsigned __int64)a3 << 32;
    a2[1] = v10;
    v9 = 0;
    if ( (unsigned int)MiPteInShadowRange(a2 + 1) )
      MiWritePteShadow(a2 + 1, v10);
    v3 = a3;
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( v8 )
    v11 += 72LL * (unsigned __int16)KeNumberNodes;
  v12 = v11 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v25, 0);
  for ( i = KiTbFlushTimeStamp; !KiTbFlushTimeStamp; i = KiTbFlushTimeStamp )
  {
    KeFlushTb(0, 1u);
    _InterlockedOr(v25, 0);
  }
  v14 = v32;
  v15 = (volatile signed __int64 *)(v12 + 8LL * (i & 7));
  if ( v32 == 1 )
  {
    v16 = v3 + (__int64)*(int *)(v12 + 64);
    if ( v16 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v16 >= 0x40 )
      MiEmptyPteBins(a1, 0);
    v14 = 1;
  }
  v17 = v27;
  v18 = 2LL * (v9 & 0xF);
  LODWORD(v19) = v18;
LABEL_23:
  v20 = *v15;
  v26 = *v15;
  while ( 1 )
  {
    while ( 1 )
    {
      v28 = v20;
      if ( (_DWORD)v20 != i )
      {
        if ( HIDWORD(v20) )
          break;
      }
      v19 = (unsigned int)v19 | ((unsigned __int64)HIDWORD(v26) << 32);
      *a2 = v19;
      if ( (unsigned int)MiPteInShadowRange(a2) )
        MiWritePteShadow(a2, v19);
      v17 = v27;
      LODWORD(v29) = i;
      HIDWORD(v29) = (__int64)((__int64)a2 - v27) >> 3;
      v20 = _InterlockedCompareExchange64(v15, v29, v20);
      v26 = v20;
      if ( v20 == v28 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), a3);
        return 1LL;
      }
      v14 = v32;
    }
    if ( !(_DWORD)v20 )
      goto LABEL_23;
    _InterlockedOr(v25, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v20) <= 2
      && ((v20 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v20) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v20 = _InterlockedCompareExchange64(v15, 0LL, v20);
    v26 = v20;
    if ( v20 == v28 )
    {
      if ( v14 )
      {
        v21 = MiReleaseLargePteMappings(a1, &v28, 0LL);
      }
      else
      {
        v22 = MiReplenishBitMap(a1, HIDWORD(v28), 0);
        v21 = v22;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v22);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -v21);
      v20 = 0LL;
      v26 = 0LL;
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v17 = v27;
    v14 = v32;
  }
  v23 = (__int64)((__int64)a2 - v17) >> 3;
  HIDWORD(v29) = v23;
  *a2 = v18;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v18);
  if ( v32 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -(int)MiReleaseLargePteMappings(a1, &v29, 0LL));
  }
  else
  {
    v24 = MiReplenishBitMap(a1, (unsigned int)v23, 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v24);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -(int)v24);
  }
  return 1LL;
}
