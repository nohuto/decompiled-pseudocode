/*
 * XREFs of MiPurgeImageSection @ 0x14021C698
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiInvalidateCollidedIos @ 0x14012CBCC (MiInvalidateCollidedIos.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  __int64 i; // rbx
  __int64 DemandZeroPte; // rbp
  __int64 SubsectionPte; // rsi
  unsigned int v6; // r8d
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 *v16; // r14
  unsigned __int64 PteShadow; // rdi
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // al
  unsigned int v24; // r14d
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int16 *v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  unsigned __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int8 v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+18h]
  unsigned int v37; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v29 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v2 = 0LL;
  v28 = 0LL;
  v35 = 17;
  for ( i = v1 + 120; ; i = *(_QWORD *)(i + 16) )
  {
    v30 = i;
    if ( !i )
      break;
    if ( (*(_WORD *)(i + 34) & 2) != 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(unsigned __int16 *)(i + 32) >> 1) & 0x1F);
      v31 = DemandZeroPte;
      SubsectionPte = DemandZeroPte;
      v37 = v6;
      v36 = v6;
      if ( *(_DWORD *)(i + 36) != v6 )
      {
        SubsectionPte = MiMakeSubsectionPte(i);
        v37 = (*(_DWORD *)(i + 40) << 9) | (v7 >> 4);
      }
      v8 = *(_QWORD *)(i + 8);
      v33 = v8 + 8LL * *(unsigned int *)(i + 44);
      if ( v8 < v33 )
      {
        do
        {
          if ( (v8 & 0xFFF) == 0 || v35 == 17 )
          {
            if ( v35 != 17 )
              MiUnlockProtoPoolPage(v2, v35);
            v28 = MiLockProtoPoolPage(v8, &v35);
            if ( !v28 )
            {
              do
              {
                MmAccessFault(2uLL, v8, 0, 0LL);
                v28 = MiLockProtoPoolPage(v8, &v35);
              }
              while ( !v28 );
              DemandZeroPte = v31;
            }
          }
          v9 = MiLockLeafPage((unsigned __int64 *)v8, 0LL);
          v12 = *(_QWORD *)v8;
          v13 = v9;
          if ( v8 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(v11, v10)
            && (v12 & 1) != 0
            && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v14 )
            {
              v15 = *(_QWORD *)(v14 + 8 * ((v8 >> 3) & 0x1FF));
              if ( (v15 & 0x20) != 0 )
                v12 |= 0x20uLL;
              if ( (v15 & 0x42) != 0 )
                v12 |= 0x42uLL;
            }
          }
          if ( !v12 )
            break;
          if ( v13 )
          {
            if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 || (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
            {
              v16 = (unsigned __int64 *)(v13 + 16);
              if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
                MiDereferenceControlAreaPfn(v1, 0LL, 2);
              PteShadow = 0LL;
              v18 = 0LL;
              v32 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL;
              if ( *(_WORD *)(v13 + 32) )
              {
                *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
                v23 = *(_BYTE *)(v13 + 34);
                if ( (v23 & 0x20) != 0 && (v23 & 8) == 0 )
                {
                  v18 = *(_QWORD *)v13 - 32LL;
                  if ( *(_QWORD *)(v18 + 16) == v18 + 16 )
                    v18 = 0LL;
                }
                if ( (*(_DWORD *)v16 & 0x400LL) == 0 )
                  MiChargeCommit((__int64)v29, 1uLL, 4);
              }
              else
              {
                MiUnlinkPageFromList(v13, 0LL);
                if ( (*(_DWORD *)v16 & 0x400LL) == 0 )
                {
                  PteShadow = *v16;
                  if ( (*v16 & 4) != 0 || (PteShadow & 2) != 0 )
                  {
                    if ( v13 + 0x90482413010LL <= 0x7F8 )
                      PteShadow = MiReadPteShadow(v13 + 16, *v16);
                  }
                  else
                  {
                    PteShadow = 0LL;
                  }
                }
                v22 = MiReverseSwizzleInvalidPte(v12, v19, v20, v21);
                MiInsertPageInFreeOrZeroedList((v22 >> 12) & 0xFFFFFFFFFLL, 2);
              }
              *(_QWORD *)v8 = SubsectionPte;
              if ( v8 + 0x90482413000LL <= 0x7F8 )
                MiWritePteShadow(v8, SubsectionPte);
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v18 )
                MiInvalidateCollidedIos(v18);
              v24 = 0;
              v25 = 48 * v32 - 0x58000000000LL;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v24);
                }
                while ( *(__int64 *)(v25 + 24) < 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
              }
              if ( (*(_BYTE *)(v25 + 34) & 7) != 6 )
                KeBugCheckEx(
                  0x4Eu,
                  0x99uLL,
                  48 * v32 / 48,
                  *(_BYTE *)(48 * v32 - 0x58000000000LL + 34) & 7,
                  *(_QWORD *)(48 * v32 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
              v26 = *(_QWORD *)(v25 + 24);
              v27 = (v26 & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v25 + 24) = v26 ^ (v27 ^ v26) & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v26 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                MiPfnShareCountIsZero(v25, v27);
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( PteShadow )
                MiReleasePageFileInfo((struct _KEVENT *)v29, PteShadow, 1);
              v1 = a1;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          else if ( (v12 & 0x400) == 0 && v12 != MiMakeDemandZeroPte(24LL) )
          {
            MiReleasePageFileSpace((struct _KEVENT *)v29, v12, 1);
            *(_QWORD *)v8 = SubsectionPte;
            if ( v8 + 0x90482413000LL <= 0x7F8 )
              MiWritePteShadow(v8, SubsectionPte);
          }
          v8 += 8LL;
          v2 = v28;
          v36 += 4096;
          if ( v36 >= v37 )
            SubsectionPte = DemandZeroPte;
        }
        while ( v8 < v33 );
        i = v30;
      }
      v2 = v28;
      if ( v35 != 17 )
      {
        MiUnlockProtoPoolPage(v28, v35);
        v35 = 17;
      }
    }
  }
}
