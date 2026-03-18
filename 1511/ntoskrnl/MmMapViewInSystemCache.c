/*
 * XREFs of MmMapViewInSystemCache @ 0x1400B0E10
 * Callers:
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400073F4 (MiCompareTbFlushTimeStamp.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MmMapViewInSystemCache(ULONG_PTR a1, __int64 *a2, _QWORD *a3)
{
  int v3; // eax
  __int64 result; // rax
  _DWORD *v7; // rax
  unsigned __int64 *v8; // r10
  unsigned int *v9; // r9
  unsigned int v10; // edx
  bool v11; // zf
  BOOL v12; // ecx
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  int v20; // esi
  _KPROCESS *v21; // rdx
  unsigned int v22; // r14d
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  _QWORD *v29; // r14
  int *v30; // rax
  __int64 v31; // r9
  int *v32; // r8
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r8
  signed __int32 v36[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 *v37; // [rsp+30h] [rbp-148h]
  unsigned __int64 v38; // [rsp+38h] [rbp-140h]
  __int64 v39; // [rsp+40h] [rbp-138h] BYREF
  _DWORD *v40; // [rsp+48h] [rbp-130h]
  unsigned __int64 v41; // [rsp+50h] [rbp-128h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-120h]
  __int64 v43; // [rsp+60h] [rbp-118h] BYREF
  int v44; // [rsp+70h] [rbp-108h] BYREF
  __int16 v45; // [rsp+74h] [rbp-104h]
  __int64 v46; // [rsp+78h] [rbp-100h]
  __int64 v47; // [rsp+80h] [rbp-F8h]
  __int64 v48; // [rsp+88h] [rbp-F0h]

  v3 = *(_DWORD *)(a1 + 56);
  v42 = a3;
  v37 = a2;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v7 = (_DWORD *)MiSectionControlArea(a1);
  v10 = *v9;
  v11 = (*v9 & 0xFFF) == 0;
  v40 = v7;
  v12 = !v11;
  v10 >>= 12;
  v13 = v12 + v10;
  if ( !(v12 + v10) )
    KeBugCheckEx(0x1Au, 0x103087uLL, (ULONG_PTR)v7, 0LL, 0LL);
  v14 = MiOffsetToProtos(v7, *v8, &v41);
  v15 = *a2;
  v16 = v14;
  v38 = v41;
  v17 = v41 + v13;
  if ( v15 )
  {
    v20 = 0;
    v19 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (*(_QWORD *)(v19 + 24) & 0xFFFFFFFFF0000000uLL) == 0x20000000
      && MiCompareTbFlushTimeStamp(*(_QWORD *)(v19 + 16) >> 28, 0xFFFFF) )
    {
      v46 = 20LL;
      v44 = 0;
      v45 = 0;
      v47 = 0LL;
      v48 = 0LL;
      MiInsertTbFlushEntry((__int64)&v44, (__int64)(v19 << 25) >> 16, 64LL, 0);
      MiFlushTbList((__int64)&v44, v21);
    }
  }
  else
  {
    v18 = MiObtainSystemCacheView();
    v19 = v18;
    if ( !v18 )
    {
      ++dword_1402FFB80;
      return 3221225495LL;
    }
    v20 = 1;
    *a2 = v18 << 25 >> 16;
  }
  result = MiAddViewsForSection((__int64 *)v16, v17, 1LL);
  v22 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)v19 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v19) )
      MiWritePteShadow(v19, 0LL);
    *(_QWORD *)(v19 + 8) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v19 + 8) )
      MiWritePteShadow(v19 + 8, 0LL);
    *(_QWORD *)(v19 + 16) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v19 + 16) )
      MiWritePteShadow(v19 + 16, 0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v19 + 24) )
      MiWritePteShadow(v19 + 24, 0LL);
    v24 = *(_QWORD *)(v16 + 8);
    v25 = v19 + 8 * v13;
    v26 = v24 + 8 * v38;
    v27 = *v37;
    v28 = v24 + 8LL * *(unsigned int *)(v16 + 44);
    v39 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)*v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v29 = (_QWORD *)(*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v39) + 16) + 40 * ((v27 >> 18) & 7));
    MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12]);
    v30 = MiPartitionIdToPointer(v40[15] & 0x3FF);
    if ( v32 != v30 )
      v13 |= 0x20000uLL;
    v33 = *v42 | v13;
    v29[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    v29[4] = v33;
    v29[3] = v16;
    if ( !*(_QWORD *)(v31 + 64) )
      v29[3] = v16 | 1;
    for ( ; v19 < v25; v26 += 8LL )
    {
      if ( v26 >= v28 )
      {
        v16 = *(_QWORD *)(v16 + 16);
        v26 = *(_QWORD *)(v16 + 8);
        v34 = *(unsigned int *)(v16 + 44);
        v29[3] |= 1uLL;
        v28 = v26 + 8 * v34;
      }
      *(_QWORD *)v19 = (v26 << 16) | 0x400;
      if ( (unsigned int)MiPteInShadowRange(v19) )
        MiWritePteShadow(v19, (v26 << 16) | 0x400);
      v19 += 8LL;
    }
    _InterlockedOr(v36, 0);
    v35 = (2 * (v29[3] & 1)) | 1;
    v29[2] = *v37;
    MiManageSubsectionView(v16, v29, v35);
    return 0LL;
  }
  else
  {
    ++dword_1402FFB80;
    if ( v20 )
    {
      v23 = *a2;
      v43 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)*a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      *(_QWORD *)(*(_QWORD *)(48 * (MI_GET_PAGE_FRAME_FROM_PTE(&v43) - 0x1D55555555LL)) + 40 * ((v23 >> 18) & 7) + 24) = 0LL;
      *(_QWORD *)v19 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v19) )
        MiWritePteShadow(v19, 0LL);
      *(_QWORD *)(v19 + 8) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v19 + 8) )
        MiWritePteShadow(v19 + 8, 0LL);
      *(_QWORD *)(v19 + 16) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v19 + 16) )
        MiWritePteShadow(v19 + 16, 0LL);
      *(_QWORD *)(v19 + 24) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v19 + 24) )
        MiWritePteShadow(v19 + 24, 0LL);
      MmUnmapViewInSystemCache((__int64)(v19 << 25) >> 16, a1, 4);
      return v22;
    }
  }
  return result;
}
