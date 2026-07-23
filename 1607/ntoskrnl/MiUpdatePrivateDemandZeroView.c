/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1401E1414
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rdi
  char v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 ProtoPteAddress; // rbp
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 *v12; // r13
  ULONG_PTR v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  bool v16; // zf
  unsigned int v17; // r9d
  __int16 v18; // r10
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  __int64 DemandZeroPte; // rbx
  int v26; // r12d
  __int64 UsedPtesHandle; // r13
  LONG *SharedVm; // rdi
  KIRQL v29; // al
  __int64 v30; // rdx
  KIRQL v31; // si
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  unsigned __int64 v37; // [rsp+40h] [rbp-68h]
  __int64 *v38; // [rsp+48h] [rbp-60h]
  __int64 *v39; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-50h]
  KIRQL v41; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+20h]

  v35 = a1 + 1280;
  v4 = 0LL;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v7 = 12;
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v36 = 0LL;
  if ( a3 )
    v7 = 13;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v6, v7, &v39);
  v44 = ProtoPteAddress;
  v11 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v6);
  v37 = v11;
  v12 = v39;
  v13 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v38 = v39;
  if ( v39 )
  {
    while ( 1 )
    {
      v14 = v12[1];
      v15 = v14 + 8 * (*((unsigned int *)v12 + 11) - 1LL);
      if ( v15 > v11 )
        v15 = v11;
      v16 = (*((_BYTE *)v12 + 34) & 2) == 0;
      v40 = v15;
      if ( v16 )
      {
        v17 = *((unsigned __int16 *)v12 + 16);
        v18 = (unsigned __int16)v17 >> 1;
        if ( (((unsigned __int16)v17 >> 1) & 4) == 0 || (v18 & 5) == 5 )
        {
          v19 = *((_DWORD *)v12 + 10);
          if ( v19 )
            v14 += 8 * ((unsigned __int64)(unsigned int)((v19 << 9) - 1) >> 12) + 8;
          if ( v14 <= v15 )
          {
            if ( ProtoPteAddress < v14 )
            {
              v44 = v14;
              v20 = v14 - ProtoPteAddress;
              ProtoPteAddress = v14;
              v13 += 8 * (v20 >> 3);
            }
            if ( ProtoPteAddress > v11 )
              return v4;
            v21 = 0LL;
            if ( ProtoPteAddress <= v15 )
            {
              do
              {
                v22 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
                if ( (v22 & 1) != 0 )
                {
                  LODWORD(v23) = v17 >> 1;
                }
                else
                {
                  if ( !v22 )
                    break;
                  v23 = v22 >> 5;
                }
                if ( (v23 & 0x1F) == 0x18 )
                  break;
                v21 = (unsigned int)(v21 + 1);
                ProtoPteAddress += 8LL;
              }
              while ( ProtoPteAddress <= v15 );
              v11 = v37;
              v44 = ProtoPteAddress;
            }
            if ( (v18 & 5) != 5 )
            {
              v4 += (unsigned int)v21;
              v36 = v4;
            }
            if ( a3 && (_DWORD)v21 )
            {
              v24 = (v17 >> 1) & 0x1F;
              if ( (v24 & 4) != 0 )
                v24 = v24 & 2 | 4;
              DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v24, v11, v10, v24);
              v26 = 1;
              UsedPtesHandle = 0LL;
              SharedVm = MiGetSharedVm(v35);
              v29 = ExAcquireSpinLockExclusive(SharedVm);
              SharedVm[1] = 0;
              v31 = v29;
              v41 = v29;
              do
              {
                if ( v26 || (v13 & 0xFFF) == 0 )
                {
                  MiMakeSystemAddressValid(v13, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v31, 1);
                  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v13 << 25) >> 16);
                  v26 = 0;
                }
                *(_QWORD *)v13 = DemandZeroPte;
                if ( (unsigned int)MiPteInShadowRange(v13, v30) )
                  MiWritePteShadow(v32, DemandZeroPte);
                MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
                v13 += 8LL;
                LODWORD(v21) = v21 - 1;
              }
              while ( (_DWORD)v21 );
              LOBYTE(v30) = v41;
              v15 = v40;
              ProtoPteAddress = v44;
              v12 = v38;
              MiUnlockWorkingSetExclusive(v35, v30);
              v11 = v37;
              v4 = v36;
            }
            else
            {
              v13 += 8 * v21;
            }
          }
        }
      }
      v33 = 8LL * (unsigned int)((__int64)(v15 - ProtoPteAddress + 8) >> 3);
      ProtoPteAddress += v33;
      v13 += v33;
      v44 = ProtoPteAddress;
      if ( ProtoPteAddress <= v11 )
      {
        v12 = (__int64 *)v12[2];
        v38 = v12;
        v39 = v12;
        if ( v12 )
          continue;
      }
      return v4;
    }
  }
  return v4;
}
