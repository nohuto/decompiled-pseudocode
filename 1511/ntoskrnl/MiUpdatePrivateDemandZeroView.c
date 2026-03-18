/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1401CEB88
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v10; // r13
  __int64 *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // rcx
  unsigned __int64 v15; // rdi
  bool v16; // zf
  unsigned int v17; // ebx
  __int16 v18; // bp
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // r12
  int v27; // ebp
  KIRQL v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-78h]
  unsigned __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v7 = 12;
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v33 = 0LL;
  if ( a3 )
    v7 = 13;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v6, v7, &v36);
  v10 = v36;
  v11 = (__int64 *)ProtoPteAddress;
  v12 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v6);
  v34 = v12;
  v13 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    v35 = v10;
    if ( !v10 )
      return v4;
    v14 = *(__int64 **)(v10 + 8);
    v15 = (unsigned __int64)&v14[*(unsigned int *)(v10 + 44) - 1];
    if ( v15 > v12 )
      v15 = v12;
    v16 = (*(_BYTE *)(v10 + 34) & 2) == 0;
    v37 = v15;
    if ( v16 )
    {
      v17 = *(unsigned __int16 *)(v10 + 32);
      v18 = (unsigned __int16)v17 >> 1;
      if ( (((unsigned __int16)v17 >> 1) & 4) == 0 || (v18 & 5) == 5 )
      {
        v19 = *(_DWORD *)(v10 + 40);
        if ( v19 )
          v14 += ((unsigned __int64)(unsigned int)((v19 << 9) - 1) >> 12) + 1;
        if ( (unsigned __int64)v14 <= v15 )
        {
          if ( v11 < v14 )
          {
            v20 = (char *)v14 - (char *)v11;
            v11 = v14;
            v13 += 8 * (v20 >> 3);
          }
          if ( (unsigned __int64)v11 > v12 )
            return v4;
          v21 = 0LL;
          if ( (unsigned __int64)v11 <= v15 )
          {
            do
            {
              v22 = MI_READ_PTE_LOCK_FREE(v11);
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
              ++v11;
            }
            while ( (unsigned __int64)v11 <= v15 );
            v12 = v34;
          }
          if ( (v18 & 5) != 5 )
          {
            v4 += (unsigned int)v21;
            v33 = v4;
          }
          if ( a3 && (_DWORD)v21 )
          {
            v24 = (v17 >> 1) & 0x1F;
            if ( (v24 & 4) != 0 )
              LOBYTE(v24) = v24 & 2 | 4;
            v25 = 32LL * (v24 & 0x1F);
            v26 = 0LL;
            v27 = 1;
            v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
            do
            {
              if ( v27 || (v13 & 0xFFF) == 0 )
              {
                MiMakeSystemAddressValid(v13, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v28, 1);
                v26 = MI_GET_USED_PTES_HANDLE(v13 << 25 >> 16);
                v27 = 0;
              }
              *(_QWORD *)v13 = v25;
              if ( (unsigned int)MiPteInShadowRange(v13) )
                MiWritePteShadow(v13, v25);
              MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v26, 1u);
              v13 += 8LL;
              LODWORD(v21) = v21 - 1;
            }
            while ( (_DWORD)v21 );
            LOBYTE(v29) = v28;
            v15 = v37;
            v10 = v35;
            MiUnlockWorkingSetExclusive(a1 + 1280, v29, v30);
            v12 = v34;
            v4 = v33;
          }
          else
          {
            v13 += 8 * v21;
          }
        }
      }
    }
    v31 = 8LL * (unsigned int)((__int64)(v15 - (_QWORD)v11 + 8) >> 3);
    v13 += v31;
    v11 = (__int64 *)((char *)v11 + v31);
    if ( (unsigned __int64)v11 > v12 )
      return v4;
    v10 = *(_QWORD *)(v10 + 16);
    v36 = v10;
  }
}
