/*
 * XREFs of MiPurgeImageSection @ 0x1401EA6D4
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x1400B0704 (MiInvalidateCollidedIos.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  int *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // di
  __int64 v6; // rbp
  bool v7; // zf
  __int64 v8; // r13
  struct _KEVENT *v9; // r12
  __int64 v10; // rdx
  __int64 DemandZeroPte; // rsi
  __int64 SubsectionPte; // rbx
  unsigned __int16 v13; // dx
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  ULONG_PTR v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  _DWORD *v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // rbp
  ULONG_PTR v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbp
  char v26; // al
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-88h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+48h] [rbp-60h]
  unsigned __int64 v38; // [rsp+50h] [rbp-58h]
  unsigned __int8 v40; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp+18h]
  unsigned int v42; // [rsp+C8h] [rbp+20h]

  v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v4 = 0LL;
  v33 = (__int64)v2;
  v5 = 17;
  v32 = 0LL;
  v6 = 0LL;
  v40 = 17;
  v8 = a1 + 128;
  v7 = v8 == 0;
  v9 = (struct _KEVENT *)v2;
  while ( 1 )
  {
    v34 = v8;
    if ( v7 )
      break;
    v10 = *(unsigned __int16 *)(v8 + 34);
    if ( (v10 & 2) != 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(unsigned __int16 *)(v8 + 32) >> 1) & 0x1F, v10, v3, v4);
      v35 = DemandZeroPte;
      SubsectionPte = DemandZeroPte;
      v42 = v4;
      v41 = v4;
      if ( *(_DWORD *)(v8 + 36) != (_DWORD)v4 )
      {
        SubsectionPte = MiMakeSubsectionPte(v8);
        v42 = (*(_DWORD *)(v8 + 40) << 9) | (v13 >> 4);
      }
      v14 = *(_QWORD *)(v8 + 8);
      v38 = v14 + 8LL * *(unsigned int *)(v8 + 44);
      if ( v14 < v38 )
      {
        v15 = v32;
        while ( 1 )
        {
          if ( (v14 & 0xFFF) == 0 || v5 == 17 )
          {
            if ( v5 != 17 )
              MiUnlockProtoPoolPage(v15, v5);
            v32 = MiLockProtoPoolPage(v14, &v40);
            v15 = v32;
            if ( !v32 )
            {
              do
              {
                MmAccessFault(2uLL, v14, 0, 0LL);
                v16 = MiLockProtoPoolPage(v14, &v40);
                v32 = v16;
              }
              while ( !v16 );
              DemandZeroPte = v35;
              v15 = v16;
            }
            v5 = v40;
          }
          v17 = MiLockLeafPage(v14, 0);
          v18 = MI_READ_PTE_LOCK_FREE(v14);
          v4 = 0LL;
          v36 = v18;
          v19 = v18;
          if ( !v18 )
          {
LABEL_47:
            v8 = v34;
            v6 = v32;
            goto LABEL_48;
          }
          if ( !v17 )
          {
            if ( (v18 & 0x400) == 0 )
            {
              v27 = MiMakeDemandZeroPte(24LL, v18, v3, 0LL);
              if ( v28 != v27 )
              {
                MiReleasePageFileSpace(v9, v28, 1LL);
                *(_QWORD *)v14 = SubsectionPte;
                v30 = MiPteInShadowRange(v14, v29);
                v4 = 0LL;
                if ( v30 )
                  MiWritePteShadow(v31, SubsectionPte);
              }
            }
            goto LABEL_44;
          }
          if ( (*(_BYTE *)(v17 + 34) & 0x10) == 0 && (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_20;
          }
          v20 = (_DWORD *)(v17 + 16);
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
            MiDereferenceControlAreaPfnList(a1, 0LL, 1LL, 2);
          v21 = 0LL;
          v22 = 0LL;
          v37 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL;
          if ( !*(_WORD *)(v17 + 32) )
            break;
          *(_QWORD *)(v17 + 24) |= 0x4000000000000000uLL;
          v26 = *(_BYTE *)(v17 + 34);
          if ( (v26 & 0x20) != 0 && (v26 & 8) == 0 )
          {
            v22 = *(_QWORD *)v17 - 32LL;
            if ( *(_QWORD *)(v22 + 16) == v22 + 16 )
              v22 = 0LL;
          }
          if ( (*v20 & 0x400LL) != 0 )
            goto LABEL_27;
          v9 = (struct _KEVENT *)v33;
          MiChargeCommit(v33, 1uLL, 4);
LABEL_28:
          *(_QWORD *)v14 = SubsectionPte;
          if ( (unsigned int)MiPteInShadowRange(v14, v19) )
            MiWritePteShadow(v24, SubsectionPte);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v22 )
            MiInvalidateCollidedIos(v22);
          v25 = 48 * v37 - 0x58000000000LL;
          MiLockPageAtDpcInline(v25);
          MiDecrementShareCount(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v4 = 0LL;
          if ( v21 )
          {
            MiReleasePageFileInfo(v9, v21, 1);
            v5 = v40;
            v4 = 0LL;
            goto LABEL_44;
          }
LABEL_20:
          v5 = v40;
LABEL_44:
          v14 += 8LL;
          v41 += 4096;
          if ( v41 >= v42 )
            SubsectionPte = DemandZeroPte;
          if ( v14 >= v38 )
            goto LABEL_47;
        }
        MiUnlinkPageFromList(v17, 0);
        if ( (*v20 & 0x400LL) == 0 )
          v21 = MiCapturePageFileInfoInline((_QWORD *)(v17 + 16), 0, 1);
        v23 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v36);
        MiInsertPageInFreeOrZeroedList(v23, 2);
LABEL_27:
        v9 = (struct _KEVENT *)v33;
        goto LABEL_28;
      }
LABEL_48:
      if ( v5 != 17 )
      {
        MiUnlockProtoPoolPage(v6, v5);
        v5 = 17;
        v4 = 0LL;
        v40 = 17;
      }
    }
    v8 = *(_QWORD *)(v8 + 16);
    v7 = v8 == 0;
  }
}
