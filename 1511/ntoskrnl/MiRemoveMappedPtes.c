/*
 * XREFs of MiRemoveMappedPtes @ 0x1400B6D00
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

unsigned __int64 __fastcall MiRemoveMappedPtes(_QWORD *a1, volatile LONG *a2)
{
  __int64 v2; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  KIRQL v12; // bl
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 Wsle; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  __int64 i; // rbx
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // rdi
  int v38; // eax
  _KPROCESS *v39; // rdx
  KIRQL v40; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v42; // rdx
  KIRQL v43; // [rsp+20h] [rbp-158h]
  unsigned __int8 v44[7]; // [rsp+21h] [rbp-157h] BYREF
  __int64 v45; // [rsp+28h] [rbp-150h]
  unsigned __int64 v46; // [rsp+30h] [rbp-148h]
  __int64 v47; // [rsp+38h] [rbp-140h]
  __int64 v48; // [rsp+40h] [rbp-138h]
  int *v49; // [rsp+48h] [rbp-130h]
  unsigned __int64 v50; // [rsp+50h] [rbp-128h]
  _QWORD *v51; // [rsp+58h] [rbp-120h]
  __int64 v52; // [rsp+60h] [rbp-118h] BYREF
  int v53; // [rsp+70h] [rbp-108h] BYREF
  __int16 v54; // [rsp+74h] [rbp-104h]
  __int64 v55; // [rsp+78h] [rbp-100h]
  __int64 v56; // [rsp+80h] [rbp-F8h]
  __int64 v57; // [rsp+88h] [rbp-F0h]

  v2 = 0LL;
  v4 = a1[10];
  v5 = a1[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = a1[4] >> 12;
  v7 = 0LL;
  v51 = a1;
  v8 = 0LL;
  v47 = v6;
  v50 = v5;
  v45 = 0LL;
  v55 = 20LL;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v53 = MiTbFlushType((__int64)a2);
  v54 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v46 = v9;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !*(_QWORD *)(v5 + 64) || (*(_DWORD *)(v5 + 56) & 0x420) != 0 )
    v8 = -1LL;
  if ( dword_1402FED88 )
    v48 = *(_QWORD *)(v10 + 184);
  else
    v48 = 0LL;
  if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    v49 = MiSystemPartition;
  else
    v49 = MiPartitionIdToPointer(*(_WORD *)(v5 + 60) & 0x3FF);
  v12 = ExAcquireSpinLockExclusive(a2);
  v43 = v12;
  if ( v47 )
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v11);
      v52 = v14;
      v15 = v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( (v14 & 0x400) != 0 )
      {
        *(_QWORD *)v11 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v11) )
          MiWritePteShadow(v11, 0LL);
        v31 = v15 >> 16;
        if ( v8 == -1 )
          goto LABEL_40;
        if ( v8 )
        {
          v32 = *(_QWORD *)(v8 + 8);
          if ( v31 >= v32 && v31 < v32 + 8LL * *(unsigned int *)(v8 + 44) )
            goto LABEL_40;
        }
        MiUnlockWorkingSetExclusive((__int64)a2, v12, v13);
        for ( i = MiLockProtoPoolPage(v31, v44); !i; i = MiLockProtoPoolPage(v31, v44) )
          MmAccessFault(2uLL, v31, 0, 0LL);
        v34 = MiLockLeafPage(v31, 0);
        v35 = v34;
        if ( v34 )
        {
          v36 = MI_READ_PTE_LOCK_FREE(v34 + 16);
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v36 = MI_READ_PTE_LOCK_FREE(v31);
        }
        MiUnlockProtoPoolPage(i, v44[0]);
        if ( (v36 & 0x400) != 0 )
        {
          v37 = v36 >> 16;
          if ( v8 != v37 )
          {
            if ( v8 )
              MiRemoveViewsFromSectionWithPfn(v8, *(unsigned int *)(v8 + 44));
            v8 = v37;
          }
        }
        v12 = ExAcquireSpinLockExclusive(a2);
        v43 = v12;
        goto LABEL_39;
      }
      if ( (v14 & 0x800) != 0 )
      {
        v38 = MiDeleteTransitionPte(v11, 1);
        if ( v38 == 1 )
        {
          v30 = v47;
          goto LABEL_68;
        }
        if ( v38 == 3 )
          v45 = ++v7;
        goto LABEL_63;
      }
      if ( v14 )
      {
        MiReleasePageFileSpace(MiSystemPartition, v14, 1LL);
LABEL_63:
        *(_QWORD *)v11 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v11) )
          MiWritePteShadow(v11, 0LL);
      }
LABEL_40:
      v9 += 4096LL;
      v11 += 8LL;
      v46 = v9;
      v30 = --v47;
LABEL_68:
      if ( !v30 )
      {
        v5 = v50;
        goto LABEL_70;
      }
    }
    v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v52) - 0x58000000000LL;
    Wsle = *(_QWORD *)v16;
    if ( v48 )
    {
      Wsle = MiLocateWsle(v9, (__int64)a2, *(_QWORD *)v16);
      if ( (*(_BYTE *)v11 & 0x20) != 0
        && (*(_DWORD *)(Wsle * *(unsigned int *)(v48 + 64) + *(_QWORD *)(v48 + 496)) & 0xE00) != 0xE00LL )
      {
        MiLogPageAccess((__int64)a2, v11);
      }
    }
    MiTerminateWsle(v9, a2, Wsle);
    if ( v8 != -1 && (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
    {
      v18 = *(_QWORD *)(v16 + 16);
      if ( (v18 & 0x400) != 0 )
      {
        if ( !v8
          || (v19 = *(_QWORD *)(v8 + 8), v20 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL, v20 < v19)
          || v20 >= v19 + 8LL * *(unsigned int *)(v8 + 44) )
        {
          v21 = v18 >> 16;
          if ( v8 != v21 )
          {
            if ( v8 )
              MiRemoveViewsFromSectionWithPfn(v8, *(unsigned int *)(v8 + 44));
            v8 = v21;
          }
        }
      }
    }
    MiInsertTbFlushEntry((__int64)&v53, v9, 1LL, 0);
    v22 = MI_GET_PAGE_FRAME_FROM_PTE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)v11 = 0LL;
    v23 = 48 * v22 - 0x58000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      MiWritePteShadow(v11, 0LL);
    v26 = 0LL;
    MiLockPageAtDpcInline(v16, v24, v25);
    if ( (v15 & 0x42) != 0 )
      v26 = MiCaptureDirtyBitToPfn(v16);
    if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
    {
      v27 = 1;
    }
    else
    {
      v27 = 0;
      *(_QWORD *)(v16 + 24) |= 0x4000000000000000uLL;
    }
    if ( (unsigned int)MiDecrementShareCount(v16) == 3 && !v27 )
      ++v45;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v23, v28, v29);
    MiDecrementShareCount(v23);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v26 )
      MiReleasePageFileInfo((__int64)v49, v26, 1);
    v7 = v45;
    v12 = v43;
LABEL_39:
    v9 = v46;
    goto LABEL_40;
  }
LABEL_70:
  MiUnlockWorkingSetExclusive((__int64)a2, v12, v13);
  MiFlushTbList((__int64)&v53, v39);
  v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v2 = MiRemoveViewsFromSection(v8, *(unsigned int *)(v8 + 44), 0);
  --*(_QWORD *)(v5 + 48);
  --*(_QWORD *)(v5 + 40);
  result = MiCheckControlArea(v5, v40);
  if ( v2 )
    result = MiReturnSubsectionCharges(v2);
  v42 = v51[5] - v7;
  if ( v42 )
    return MiReturnCommit((__int64)MiSystemPartition, v42);
  return result;
}
