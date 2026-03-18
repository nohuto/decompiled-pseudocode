/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x14049D9A0
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiGetControlAreaPartition @ 0x140055BDC (MiGetControlAreaPartition.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14008A830 (MiGetControlAreaPtes.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8)
{
  bool v8; // zf
  _DWORD *v9; // r15
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 *v21; // r11
  unsigned __int64 v22; // rdi
  unsigned __int64 *v23; // r12
  int v24; // r13d
  unsigned __int64 v25; // rsi
  int v26; // ecx
  unsigned __int64 v27; // r15
  __int64 SharedProtos; // rax
  _QWORD *v29; // rbx
  _DWORD *v30; // rcx
  _DWORD *v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 PteShadow; // rbx
  __int64 v36; // r9
  __int16 v37; // ax
  unsigned __int64 v38; // rax
  _WORD *v39; // rax
  __int16 *v40; // rcx
  __int64 Page; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int Mdls; // ebx
  __int64 v46; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+28h] [rbp-B0h]
  _QWORD *v48; // [rsp+30h] [rbp-A8h]
  unsigned __int64 *v49; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-90h]
  __int64 v52; // [rsp+50h] [rbp-88h]
  __int16 *ControlAreaPartition; // [rsp+58h] [rbp-80h]
  unsigned __int64 v54; // [rsp+60h] [rbp-78h]
  unsigned __int64 v55; // [rsp+68h] [rbp-70h]
  unsigned __int64 v56; // [rsp+70h] [rbp-68h]
  unsigned __int64 v57; // [rsp+78h] [rbp-60h]
  _WORD *v58; // [rsp+80h] [rbp-58h] BYREF
  __int16 v59; // [rsp+88h] [rbp-50h]
  unsigned __int16 v60; // [rsp+8Ah] [rbp-4Eh]
  int v64; // [rsp+F8h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v9 = (_DWORD *)a2;
  *a8 = 0LL;
  if ( !v8 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v12 = a5 >> 12;
    v55 = a5 >> 12;
    if ( a5 >> 12 < 0x100000000LL && (unsigned int)v12 <= ControlAreaPtes )
      goto LABEL_8;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v12) = ControlAreaPtes;
  v55 = (unsigned int)ControlAreaPtes;
LABEL_8:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v12 - 1) + 112, 0x6C526D4Du);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v16 = PoolWithTag + 11;
  v17 = (__int64)(v9 + 30);
  v16[1] = v16;
  *v16 = v16;
  *(_QWORD *)(v15 + 76) = 0LL;
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_QWORD *)(v15 + 32) = v15 + 24;
  *(_QWORD *)(v15 + 24) = v15 + 24;
  v50 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v57 = 0LL;
  if ( a5 )
    v17 = MiOffsetToProtos(v9, a3, &v50);
  v18 = 0LL;
  ControlAreaPartition = (__int16 *)MiGetControlAreaPartition((__int64)v9);
  v20 = 0LL;
  v47 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  if ( a1 )
  {
    v21 = *(unsigned __int64 **)(a1 + 32);
    v51 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
    v22 = v51;
    v49 = v21;
  }
  else
  {
    v49 = 0LL;
    v22 = 0LL;
  }
  *(_DWORD *)(v15 + 48) = a6;
  *(_DWORD *)(v15 + 52) = 5;
  v23 = (unsigned __int64 *)(v15 + 104);
  *(_DWORD *)(v15 + 56) = 7;
  MI_INITIALIZE_COLOR_BASE(v19 + 1272, (v9[14] >> 20) & 0x3F, (__int64)&v58);
  v24 = 0;
  v52 = 0LL;
  v64 = 0;
  if ( (_DWORD)v55 )
  {
    while ( 1 )
    {
      if ( v20 < (unsigned __int64)v18 )
        goto LABEL_46;
      if ( v20 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_70;
        v25 = 0LL;
        v50 = 0LL;
      }
      else
      {
        v25 = v50;
      }
      v26 = v9[14];
      if ( (v26 & 0x20) == 0 )
      {
        v24 = MiAddViewsForSection(v17, *(unsigned int *)(v17 + 44), 0);
        if ( v24 < 0 )
        {
          v44 = v15;
          goto LABEL_74;
        }
        v27 = *(_QWORD *)(v17 + 8);
        v29 = (_QWORD *)(v15 + 24);
        v30 = *(_DWORD **)(v15 + 32);
        if ( (_QWORD *)*v29 == v29 || v30[4] == 5 )
        {
          v31 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
          v30 = v31;
          if ( !v31 )
          {
            MiRemoveViewsFromSectionWithPfn((_QWORD *)v17, *(unsigned int *)(v17 + 44));
            MiReleaseReadListResources(v15);
            ExFreePoolWithTag((PVOID)v15, 0);
            return 3221225626LL;
          }
          v31[4] = 0;
          v32 = *(_QWORD **)(v15 + 32);
          *(_QWORD *)v30 = v29;
          *((_QWORD *)v30 + 1) = v32;
          if ( (_QWORD *)*v32 != v29 )
            __fastfail(3u);
          *v32 = v30;
          *(_QWORD *)(v15 + 32) = v30;
        }
        if ( !*(_QWORD *)(v15 + 16) )
          *(_QWORD *)(v15 + 16) = v17;
        *(_QWORD *)&v30[2 * v30[4]++ + 6] = v17;
        goto LABEL_40;
      }
      v27 = *(_QWORD *)(v17 + 8);
      if ( (*(_BYTE *)(v17 + 34) & 2) == 0 || (v26 & 0x4000000) == 0 )
        goto LABEL_40;
      v9 = (_DWORD *)a2;
      if ( *(_QWORD *)(v17 + 24) )
      {
        SharedProtos = MiGetSharedProtos();
        if ( SharedProtos )
        {
          v27 = *(_QWORD *)(SharedProtos + 32);
LABEL_40:
          v20 = v27 + 8 * v25;
          v47 = v27 + 8LL * *(unsigned int *)(v17 + 44);
          v33 = MiStartingOffset((__int64 *)v17, v27, a7);
          v34 = MiEndingOffsetWithLock((_QWORD *)v17);
          if ( (((_WORD)v34 - (_WORD)v33) & 0xFFF) != 0 )
            v56 = v27 + 8 * (((v34 - v33 + 4095) >> 12) - 1);
          else
            v56 = 0LL;
          if ( v49 )
          {
            v51 = v33;
            v54 = v27;
            LODWORD(v51) = v33 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
            v22 = v51;
          }
          v9 = (_DWORD *)a2;
LABEL_46:
          PteShadow = *(_QWORD *)v20;
          if ( MiPteInShadowRange(v20) )
            PteShadow = MiReadPteShadow(v20, PteShadow);
          if ( (PteShadow & 1) != 0 )
          {
LABEL_49:
            MiUpdatePfnPriorityByPte(v20, a6);
            goto LABEL_68;
          }
          if ( (PteShadow & 0x400) != 0 )
          {
            if ( v49 )
            {
              v22 += (__int64)(v20 - v54) >> 3 << 12;
              v54 = v20;
              *v49++ = v22;
            }
          }
          else
          {
            if ( (PteShadow & 0x800) != 0 )
              goto LABEL_49;
            v37 = MiReverseSwizzleInvalidPte(PteShadow);
            if ( (v37 & 0x400) == 0 && (v37 & 0x800) == 0 && (v37 & 4) == 0 )
            {
LABEL_68:
              v18 = (_QWORD *)v47;
              goto LABEL_69;
            }
          }
          v18 = v48;
          v38 = v20;
          *v23 = v20;
          if ( !v48 )
            v18 = v23;
          v48 = v18;
          if ( v52 == v17 )
          {
            if ( ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL != ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            {
              v38 = v20;
              goto LABEL_62;
            }
          }
          else
          {
LABEL_62:
            v52 = v17;
            *v23 = v38 | 2;
          }
          v57 = v20;
          if ( v20 == v56 )
            *v23 |= 1uLL;
          ++v23;
          if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1, v36) )
          {
            v43 = v46;
            if ( !v46 )
              v24 = -1073741670;
            goto LABEL_81;
          }
          v39 = v58;
          v40 = ControlAreaPartition;
          ++*v58;
          Page = MiGetPage((__int64)v40, v60 | (unsigned int)(unsigned __int16)(v59 & *v39), 0);
          if ( Page == -1 )
          {
            MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
            v43 = v46;
            if ( !v46 )
              v24 = -1073741801;
            goto LABEL_81;
          }
          v42 = (_QWORD *)(48 * Page - 0x58000000000LL);
          ++v46;
          *v42 = *(_QWORD *)(v15 + 40);
          *(_QWORD *)(v15 + 40) = v42;
          goto LABEL_68;
        }
        v20 = (unsigned __int64)(v18 - 1);
      }
      else
      {
        v20 = (unsigned __int64)(v18 - 1);
      }
LABEL_69:
      v20 += 8LL;
      if ( ++v64 >= (unsigned int)v55 )
      {
LABEL_70:
        v18 = v48;
        v43 = v46;
        goto LABEL_81;
      }
    }
  }
  v43 = 0LL;
LABEL_81:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v49;
  v44 = v15;
  if ( v43 )
  {
    *(_QWORD *)(v15 + 64) = v18;
    *(_DWORD *)(v15 + 60) = ((__int64)v23 - v15 - 104) >> 3;
    Mdls = MiPfAllocateMdls(v15, a7, 0LL);
    if ( *(_QWORD *)(v15 + 88) == v15 + 88 )
    {
      MiReleaseReadListResources(v15);
      ExFreePoolWithTag((PVOID)v15, 0);
      *a8 = 0LL;
      return Mdls;
    }
    else
    {
      *a8 = v15;
      return 0LL;
    }
  }
  else
  {
LABEL_74:
    MiReleaseReadListResources(v44);
    ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v24;
  }
}
