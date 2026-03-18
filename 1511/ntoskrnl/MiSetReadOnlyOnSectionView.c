/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x1400BB050
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400EEBBC (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiUpdatePfnProtection @ 0x1401DF97C (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int v9; // ebx
  unsigned int updated; // esi
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  unsigned int v14; // r12d
  KIRQL v15; // bp
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  KIRQL v27; // [rsp+30h] [rbp-138h]
  int v28; // [rsp+34h] [rbp-134h]
  unsigned __int64 v29; // [rsp+38h] [rbp-130h] BYREF
  __int64 v30; // [rsp+40h] [rbp-128h]
  unsigned __int64 v31; // [rsp+48h] [rbp-120h]
  __int64 v32; // [rsp+50h] [rbp-118h] BYREF
  int v33; // [rsp+60h] [rbp-108h] BYREF
  __int16 v34; // [rsp+64h] [rbp-104h]
  __int64 v35; // [rsp+68h] [rbp-100h]
  __int64 v36; // [rsp+70h] [rbp-F8h]
  __int64 v37; // [rsp+78h] [rbp-F0h]

  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v9 = 0;
  v28 = 0;
  v34 = 0;
  v36 = 0LL;
  v37 = 0LL;
  updated = 1;
  v31 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v31;
  v12 = v7 + 1280;
  v35 = 20LL;
  v33 = 1;
  v30 = v7 + 1280;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 4;
  v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1280));
  v15 = v27;
  MiMakeSystemAddressValid(v31, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v27, 1);
  if ( v31 > v13 )
    goto LABEL_30;
  do
  {
    if ( (v11 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)&v33, v16);
      MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v15, 1);
    }
    v17 = MI_READ_PTE_LOCK_FREE(v11);
    v29 = v17;
    if ( v17 )
    {
      if ( (v17 & 1) != 0 )
      {
        v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL;
        v19 = 48 * v18 - 0x58000000000LL;
        if ( *(_WORD *)(v19 + 32) <= 1u || (updated & 7) == 4 )
        {
          if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) != 0 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1u, &v32);
            v16 = (_KPROCESS *)(*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL);
            if ( v16 == (_KPROCESS *)ProtoPteAddress )
            {
              v16 = (_KPROCESS *)(MiLocateWsle((__int64)(v11 << 25) >> 16, v30, *(_QWORD *)v19)
                                * MEMORY[0xFFFFF58010804040]
                                - 0xA7FEF7FBCB0LL);
              v21 = (*(_QWORD *)&v16->Header.Lock >> 4) & 0x1FLL;
              if ( v21 == v14 || !v21 && ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == v14 )
              {
                v15 = v27;
                *(_QWORD *)&v16->Header.Lock ^= ((unsigned __int16)*(_QWORD *)&v16->Header.Lock ^ (unsigned __int16)(16 * updated)) & 0x1F0;
LABEL_18:
                MiRevertValidPte(a2, v11, updated, v18, (__int64)&v33);
                v11 += 8LL;
                goto LABEL_27;
              }
            }
            v15 = v27;
          }
          else if ( ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == (unsigned __int64)v14 )
          {
            updated = MiUpdatePfnProtection(a2, 48 * v18 - 0x58000000000LL, updated);
            goto LABEL_18;
          }
        }
      }
      else if ( (v17 & 0x400) != 0 )
      {
        if ( (updated & 7) == 4 )
        {
          v22 = v11;
          if ( HIDWORD(v17) == 0xFFFFFFFF )
            goto LABEL_33;
          v23 = 32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL);
          v29 = v23;
          *(_QWORD *)v11 = v23;
          if ( (unsigned int)MiPteInShadowRange(v11) )
            MiWritePteShadow(v11, v23);
        }
      }
      else if ( (v17 & 0x800) != 0 )
      {
        v24 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
        if ( !v24 )
          goto LABEL_35;
        if ( v24 == 2 )
          goto LABEL_27;
      }
      else if ( ((v17 >> 5) & 0x1F) == v14 )
      {
        v22 = v11;
LABEL_33:
        v26 = ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0 ^ v17;
        v29 = v26;
        *(_QWORD *)v11 = v26;
        if ( (unsigned int)MiPteInShadowRange(v22) )
          MiWritePteShadow(v11, v26);
LABEL_35:
        v11 += 8LL;
LABEL_27:
        v9 = v28;
        continue;
      }
    }
    updated = 4;
    v13 = v11 - 8;
    v11 = v31;
    v9 = -1073741755;
    v28 = -1073741755;
    v14 = 1;
  }
  while ( v11 <= v13 );
  v12 = v30;
LABEL_30:
  MiFlushTbList((__int64)&v33, v16);
  MiUnlockWorkingSetExclusive(v12, v15, v25);
  return v9;
}
