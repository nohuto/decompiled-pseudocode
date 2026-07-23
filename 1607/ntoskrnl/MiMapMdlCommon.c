/*
 * XREFs of MiMapMdlCommon @ 0x1401E3694
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E3E60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x140657500 (MmMapLockedRestartPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x1401472A8 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 *v8; // r12
  __int64 v9; // r11
  unsigned __int64 v10; // r11
  unsigned __int64 *v11; // r15
  int v12; // r14d
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // r13
  int ProtectionPfnCompatible; // edx
  ULONG_PTR v18; // r8
  __int64 v19; // r9
  char v20; // r10
  int v21; // r11d
  __int64 v22; // rbx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rbx
  _QWORD *v27; // r11
  __int64 v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // r14
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdi
  _QWORD *v33; // r13
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r12d
  _QWORD *v38; // rax
  _KPROCESS *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  KIRQL v43; // al
  __int64 result; // rax
  __int16 v45; // cx
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r10
  __int64 v49; // rcx
  __int64 v50; // [rsp+20h] [rbp-E0h] BYREF
  int v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 *v53; // [rsp+30h] [rbp-D0h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+70h] [rbp-90h] BYREF
  __int16 v62; // [rsp+74h] [rbp-8Ch]
  __int64 v63; // [rsp+78h] [rbp-88h]
  _QWORD *v64; // [rsp+80h] [rbp-80h]
  _QWORD *v65; // [rsp+88h] [rbp-78h]

  v4 = *(unsigned int *)(a1 + 44);
  v56 = a1;
  v6 = a2;
  v7 = v4 + *(_QWORD *)(a1 + 32);
  v52 = a3;
  v8 = (unsigned __int64 *)(a1 + 48);
  v9 = *(unsigned int *)(a1 + 40) + 4095LL;
  v53 = (unsigned __int64 *)(a1 + 48);
  v58 = v7 & 0xFFF;
  v10 = (unsigned __int64)(v58 + v9) >> 12;
  v11 = (unsigned __int64 *)(a1 + 48);
  v55 = v10;
  v59 = 0LL;
  v12 = 0;
  v60 = v4 + ((__int64)(a2 << 25) >> 16);
  v13 = MiPlatformCacheAttributes[a4 + 6];
  v51 = MiPlatformCacheAttributes[a4];
  if ( (v6 & 0xFFF) == 0 && (v10 & 0x1FF) == 0 )
    v12 = (*(_DWORD *)v8 & 0x1FFLL) == 0;
  v54 = v13;
  v14 = 0LL;
  v50 = 0LL;
  v15 = -48 - a1;
  v16 = v52;
  v57 = v15;
  do
  {
    if ( MiIsPfnInline(*v11) )
    {
      v22 = 48 * v18 - 0x58000000000LL;
      if ( *(_WORD *)(v22 + 32) == (_WORD)v21 && dword_1403270A0 == v21 )
      {
        MiShowBadMapper(v18, 1);
        v20 = v51;
      }
      if ( (*(_BYTE *)(v22 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v22, v20);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v16, v22);
    }
    else if ( v19 )
    {
      if ( v19 == 2 )
        ProtectionPfnCompatible |= 0x38u;
    }
    else
    {
      ProtectionPfnCompatible |= 0x28u;
    }
    ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, v6);
    v24 = ValidKernelPte;
    if ( (ValidKernelPte & 0x800) != 0 )
      v24 = ValidKernelPte | 0x42;
    v25 = 1LL;
    v26 = (v24 ^ (*v11 << 12)) & 0xFFFFFFFFF000LL ^ v24;
    if ( v12 == 1 )
    {
      if ( v11 == v8 )
      {
        v14 = v26;
        v50 = v26;
LABEL_21:
        v27 = 0LL;
        goto LABEL_22;
      }
      v14 ^= (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      v50 = v14;
      if ( (v14 & 0xFFFFFFFFF000LL) != 0 && v14 == v26 )
        goto LABEL_21;
      if ( ((v14 | v26) & 0x1FF000) == 0 )
      {
        v14 ^= (v14 ^ v26) & 0xFFFFFFFFF000LL;
        v50 = v14;
        goto LABEL_21;
      }
      v12 = 0;
      v46 = ((__int64)v11 + v57) >> 3;
      if ( v46 )
      {
        do
        {
          v6 -= 8LL;
          v14 ^= (v14 ^ (((v14 >> 12) - v25) << 12)) & 0xFFFFFFFFF000LL;
          v50 = v14;
          *(_QWORD *)v6 = v14;
          if ( (unsigned int)MiPteInShadowRange(v6, v25) )
          {
            MiWritePteShadow(v47, v14);
            v25 = 1LL;
          }
        }
        while ( v48 != v25 );
        v8 = v53;
      }
      v6 += 8 * v46;
    }
    *(_QWORD *)v6 = v26;
    if ( (unsigned int)MiPteInShadowRange(v6, v25) )
    {
      MiWritePteShadow(v49, v26);
      v25 = 1LL;
    }
LABEL_22:
    ++v11;
    v6 += 8LL;
    v55 -= v25;
  }
  while ( v55 );
  v28 = v56;
  if ( v12 == (_DWORD)v25 )
  {
    v29 = *(unsigned int *)(v56 + 40);
    v30 = v27;
    v62 = 0;
    v63 = 20LL;
    v31 = (unsigned __int64)(v29 + v58 + 4095) >> 12;
    v61 = (int)v27;
    v64 = v27;
    v65 = v27;
    v32 = (((v6 - 8 * v31) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = v27;
    v34 = v26 | 0x80;
    do
    {
      v34 ^= (v34 ^ (*v8 << 12)) & 0xFFFFFFFFF000LL;
      v50 = MI_READ_PTE_LOCK_FREE(v32);
      *(_QWORD *)v32 = v34;
      v37 = MiPteInShadowRange(v32, v35);
      if ( v37 )
        MiWritePteShadow(v36, v34);
      MiInsertTbFlushEntry((__int64)&v61, (__int64)((v32 << 25) - v59) >> 16, 1LL, 0);
      v38 = (_QWORD *)MI_GET_PFN_FROM_PTE(&v50);
      v42 = (__int64)v38;
      if ( !v30 )
        v30 = v38;
      *v38 = v33;
      v33 = v38;
      *(_QWORD *)v32 = v34;
      if ( v37 )
        MiWritePteShadow(v32, v34);
      v32 += 8LL;
      v8 = v53 + 512;
      v53 += 512;
      v31 -= 512LL;
    }
    while ( v31 );
    MiFlushTbList((__int64)&v61, v39, v40, v41);
    v43 = ExAcquireSpinLockExclusive(&dword_1403275A8);
    *v30 = qword_1403275B8;
    qword_1403275B8 = v42;
    ExReleaseSpinLockExclusive(&dword_1403275A8, v43);
    v28 = v56;
    LOWORD(v25) = 1;
  }
  result = v60;
  v45 = v25 | *(_WORD *)(v28 + 10);
  *(_QWORD *)(v28 + 24) = v60;
  *(_WORD *)(v28 + 10) = v45;
  if ( (v45 & 0x10) != 0 )
    *(_WORD *)(v28 + 10) = v45 | 0x20;
  return result;
}
