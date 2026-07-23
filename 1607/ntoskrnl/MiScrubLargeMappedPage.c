/*
 * XREFs of MiScrubLargeMappedPage @ 0x1401FE160
 * Callers:
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  LONG *SharedVm; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  BOOL v17; // esi
  _KPROCESS *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // r9
  LONG *v25; // rsi
  KIRQL v26; // al
  char v27; // r9
  __int64 v28; // rdi
  char v30; // [rsp+20h] [rbp-E0h]
  KIRQL v31; // [rsp+21h] [rbp-DFh]
  __int64 v32; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D0h]
  BOOL v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+70h] [rbp-90h] BYREF
  __int16 v41; // [rsp+74h] [rbp-8Ch]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]

  v4 = 0;
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v36 = a4;
  v6 = v5 << 12;
  v35 = a2;
  v42 = 20LL;
  v40 = 1;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v30 = 0;
  v7 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v8 = ((((unsigned __int64)*(unsigned int *)(a1 + 28) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v39 = v8;
  v33 = a3 + 1280;
  SharedVm = MiGetSharedVm(a3 + 1280);
  v31 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v7 > v8 )
      {
        v4 = 1;
        goto LABEL_33;
      }
      v11 = 512LL;
      v12 = v7;
      v13 = MI_IS_PHYSICAL_ADDRESS(v6);
      if ( !v13 )
      {
        v7 = v7 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_4:
        v7 += 8LL;
        continue;
      }
      break;
    }
    if ( v13 > 1 )
    {
      v14 = v13 - 1;
      do
      {
        v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v11 <<= 9;
        --v14;
      }
      while ( v14 );
    }
    v32 = MI_READ_PTE_LOCK_FREE(v12);
    v15 = v32;
    if ( !v32 )
      goto LABEL_4;
    *(_QWORD *)v12 = 0LL;
    v34 = MiPteInShadowRange(v12);
    v17 = v34;
    if ( v34 )
      MiWritePteShadow(v16, 0LL);
    MiInsertTbFlushEntry((__int64)&v40, v6, 1LL, 1u);
    MiFlushTbList((__int64)&v40, v18, v19, v20);
    v38 = (v11 << 12) + v6;
    v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v32) - 0x58000000000LL;
    v22 = v21 + 48 * v11;
    v37 = v22;
    while ( v21 < v22 )
    {
      if ( *(_WORD *)(v21 + 32) != 2 )
        goto LABEL_24;
      if ( (int)MiScrubPage(v35, *(_QWORD *)(v35 + 24), v21, 0LL) < 0 )
      {
        v23 = (unsigned __int8)MiLockPageInline(v21);
        MiMakePageBad(v21, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v23);
        v15 = v32;
      }
      if ( MiWorkingSetIsContended(v33) )
        goto LABEL_19;
      if ( KeShouldYieldProcessor() )
      {
        v24 = v33;
LABEL_19:
        v15 |= 0x20uLL;
        v32 = v15;
        *(_QWORD *)v12 = v15;
        if ( v17 )
          MiWritePteShadow(v12, v15);
        LOBYTE(v10) = v31;
        MiUnlockWorkingSetExclusive(v24, v10);
        v25 = MiGetSharedVm(v33);
        v26 = ExAcquireSpinLockExclusive(v25);
        v25[1] = 0;
        v17 = v34;
        v31 = v26;
      }
      if ( *(_DWORD *)(v36 + 4) )
      {
        v27 = 1;
        v30 = 1;
        goto LABEL_27;
      }
      v22 = v37;
LABEL_24:
      v21 += 48LL;
    }
    v27 = v30;
LABEL_27:
    v28 = v15 | 0x20;
    v32 = v28;
    *(_QWORD *)v12 = v28;
    if ( v17 )
      MiWritePteShadow(v12, v28);
    v7 += 8 * (v11 >> 9);
    if ( v27 != 1 )
    {
      v6 = v38;
      v8 = v39;
      continue;
    }
    break;
  }
LABEL_33:
  LOBYTE(v10) = v31;
  MiUnlockWorkingSetExclusive(v33, v10);
  return v4;
}
