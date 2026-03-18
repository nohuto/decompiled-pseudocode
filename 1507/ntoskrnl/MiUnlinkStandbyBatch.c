/*
 * XREFs of MiUnlinkStandbyBatch @ 0x140053B30
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiReadyStandbyPageForActive @ 0x140053F00 (MiReadyStandbyPageForActive.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiUnlinkStandbyBatch(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5, ULONG_PTR *a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  char v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r10
  ULONG_PTR v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rax
  __int16 *v28; // r10
  __int64 v29; // rcx
  unsigned __int16 v30; // ax
  __int16 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // dl
  char v36; // r9
  unsigned __int64 v37; // r8
  int v38; // eax

  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v11 = a5;
  v12 = v9;
  v13 = a5;
  if ( !a5 )
    return v13 - v11;
  while ( 2 )
  {
    v14 = (unsigned __int64)(a2 + 0x12090482600LL);
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v15 = *a2;
          if ( v14 <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, v10)
            && (v15 & 1) != 0
            && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v10 )
            {
              v16 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
              if ( (v16 & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (v16 & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
          a5 = v15;
          if ( (v15 & 1) != 0 )
            break;
          if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
            return v13 - v11;
          if ( (unsigned int)MiInvalidPteConforms(v15, v10) )
          {
            v17 = MiReverseSwizzleInvalidPte(v22, v10, v21, v22);
            goto LABEL_27;
          }
        }
        v17 = v15;
        if ( (unsigned __int64)&STACK[0x90482413070] <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v10)
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
LABEL_27:
        ;
      }
      while ( !(unsigned int)MI_IS_PFN((v17 >> 12) & 0xFFFFFFFFFLL) );
      v25 = 48 * v24 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        return v13 - v11;
      v10 = *a2;
      if ( v14 <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v10)
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v26 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
          if ( (v27 & 0x20) != 0 )
            v10 |= 0x20uLL;
          if ( (v27 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
      }
      if ( v10 == v23 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v25 )
    {
      v28 = MiSystemPartition;
      v29 = 1023LL;
      v30 = ((unsigned int)HIDWORD(*(_QWORD *)(v25 + 40)) >> 8) & 0x3FF;
      if ( v30 == 1023 )
      {
        v31 = MiSystemPartition;
      }
      else
      {
        v29 = v30;
        v31 = *(__int16 **)(qword_14034F0E8 + 8LL * v30);
      }
      if ( v31 != (__int16 *)v12 )
        goto LABEL_73;
      v32 = *a2;
      if ( v14 > 0x7F8 || !(unsigned int)MiPteHasShadow(v29, v32) )
        goto LABEL_56;
      if ( (v32 & 1) != 0 )
      {
        if ( (v32 & 0x20) == 0 || (v32 & 0x42) == 0 )
        {
          v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
            if ( (v34 & 0x20) != 0 )
              LOBYTE(v32) = v32 | 0x20;
            if ( (v34 & 0x42) != 0 )
              LOBYTE(v32) = v32 | 0x42;
          }
        }
LABEL_56:
        if ( (v32 & 1) != 0 )
          goto LABEL_73;
      }
      if ( (v35 = *(_BYTE *)(v25 + 34), (v35 & 0x20) != 0)
        || (v36 = *(_BYTE *)(v25 + 35), (v36 & 0x40) != 0)
        || (v37 = *(_QWORD *)(v12 + 5504), v37 < 0x80)
        && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v37 < 2)
        && ((__int16 *)v12 == v28 || v37 < 2)
        || (v35 & 7) != 2
        || ((v36 & 8) == 0 ? (v38 = v36 & 7) : (v38 = 5), v38 != a3) )
      {
LABEL_73:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v25) )
      {
        a4 += 8LL;
        ++a2;
        MiReadyStandbyPageForActive(v25, a4);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( --v11 )
          continue;
      }
      else
      {
        *a6 = v25;
      }
    }
    return v13 - v11;
  }
}
