/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x14020DEFC
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r13d
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r15
  unsigned int *v12; // rdi
  __int64 v13; // r11
  _KPROCESS *Process; // rcx
  _KPROCESS *v15; // rbp
  unsigned int v16; // r8d
  __int16 v17; // r10
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 DemandZeroPte; // rax
  __int64 v27; // rbx
  int v28; // r13d
  volatile signed __int32 *v29; // rsi
  unsigned __int64 v30; // r9
  unsigned int v31; // edi
  signed __int32 v32; // edx
  __int64 v33; // rsi
  unsigned __int8 v34; // bp
  __int64 v35; // rcx
  unsigned int *v37; // [rsp+30h] [rbp-88h] BYREF
  __int64 ProtoPteAddress; // [rsp+38h] [rbp-80h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+48h] [rbp-70h]
  unsigned __int64 v41; // [rsp+50h] [rbp-68h]
  __int64 v42; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+60h] [rbp-58h]
  _KPROCESS *v44; // [rsp+68h] [rbp-50h]
  unsigned int *v48; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = a3;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v7 = 12;
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v40 = 0LL;
  if ( v4 )
    v7 = 13;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v6, v7, &v37);
  v9 = ProtoPteAddress;
  v10 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v6);
  v41 = v10;
  v11 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = v37;
  v48 = v37;
  if ( !v37 )
    return v3;
  v13 = 0x90482413000LL;
  while ( 1 )
  {
    Process = (_KPROCESS *)*((_QWORD *)v12 + 1);
    v15 = (_KPROCESS *)((char *)Process + 8 * v12[11] - 8);
    if ( (unsigned __int64)v15 > v10 )
      v15 = (_KPROCESS *)v10;
    v44 = v15;
    if ( (*((_BYTE *)v12 + 34) & 2) != 0 )
      goto LABEL_61;
    v16 = *((unsigned __int16 *)v12 + 16);
    v17 = (unsigned __int16)v16 >> 1;
    if ( (((unsigned __int16)v16 >> 1) & 4) != 0 && (v17 & 5) != 5 )
      goto LABEL_61;
    v18 = v12[10];
    if ( v18 )
      Process = (_KPROCESS *)((char *)Process + 8 * ((unsigned __int64)((v18 << 9) - 1) >> 12) + 8);
    if ( Process > v15 )
      goto LABEL_61;
    if ( v9 < (unsigned __int64)Process )
    {
      ProtoPteAddress = (__int64)Process;
      v19 = (__int64)Process - v9;
      v9 = (unsigned __int64)Process;
      v11 += 8 * (v19 >> 3);
    }
    if ( v9 > v10 )
      return v3;
    v20 = 0LL;
    if ( v9 > (unsigned __int64)v15 )
      goto LABEL_34;
    do
    {
      v21 = *(_QWORD *)v9;
      if ( v9 + v13 <= 0x7F8 && (unsigned int)MiPteHasShadow(Process, v21) )
      {
        if ( (v21 & 1) == 0 )
          goto LABEL_29;
        if ( (v21 & 0x20) == 0 || (v21 & 0x42) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v22 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v23 & 0x20) != 0 )
              v21 |= 0x20uLL;
            if ( (v23 & 0x42) != 0 )
              v21 |= 0x42uLL;
          }
        }
      }
      if ( (v21 & 1) != 0 )
      {
        LODWORD(v24) = v16 >> 1;
        goto LABEL_31;
      }
LABEL_29:
      if ( !v21 )
        break;
      v24 = v21 >> 5;
LABEL_31:
      if ( (v24 & 0x1F) == 0x18 )
        break;
      v20 = (unsigned int)(v20 + 1);
      v9 += 8LL;
    }
    while ( v9 <= (unsigned __int64)v15 );
    v12 = v37;
    v10 = v41;
    v48 = v37;
    ProtoPteAddress = v9;
LABEL_34:
    if ( (v17 & 5) != 5 )
    {
      v3 += (unsigned int)v20;
      v40 = v3;
    }
    if ( v4 && (_DWORD)v20 )
    {
      v25 = (v16 >> 1) & 0x1F;
      if ( (v25 & 4) != 0 )
        v25 = v25 & 2 | 4;
      DemandZeroPte = MiMakeDemandZeroPte(v25);
      v42 = 0LL;
      v27 = DemandZeroPte;
      v28 = 1;
      v29 = (volatile signed __int32 *)(a1 + 1272);
      v43 = a1 + 1272;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v30);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
      }
      else
      {
        v31 = 0;
        if ( _interlockedbittestandset(v29, 0x1Fu) )
          v31 = ExpWaitForSpinLockExclusiveAndAcquire(v29);
        while ( 1 )
        {
          v32 = *v29;
          if ( (*v29 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v32 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v29, v32 | 0x40000000, v32);
          if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v31);
        }
        v48 = v37;
      }
      v33 = v42;
      v34 = CurrentIrql;
      do
      {
        if ( v28 || (v11 & 0xFFF) == 0 )
        {
          MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v34, 1);
          v33 = MI_GET_USED_PTES_HANDLE((__int64)(v11 << 25) >> 16);
          v28 = 0;
        }
        *(_QWORD *)v11 = v27;
        if ( v11 + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(v11, v27);
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v33, 1u);
        v11 += 8LL;
        LODWORD(v20) = v20 - 1;
      }
      while ( (_DWORD)v20 );
      v12 = v48;
      v9 = ProtoPteAddress;
      v15 = v44;
      MiUnlockWorkingSetExclusive(v43, CurrentIrql);
      v10 = v41;
      v13 = 0x90482413000LL;
      v3 = v40;
      v4 = a3;
    }
    else
    {
      v11 += 8 * v20;
    }
LABEL_61:
    v35 = 8LL * (unsigned int)((__int64)((__int64)&v15->Header.WaitListHead - v9) >> 3);
    v9 += v35;
    v11 += v35;
    ProtoPteAddress = v9;
    if ( v9 <= v10 )
    {
      v12 = (unsigned int *)*((_QWORD *)v12 + 2);
      v48 = v12;
      v37 = v12;
      if ( v12 )
        continue;
    }
    return v3;
  }
}
