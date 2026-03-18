/*
 * XREFs of MmMapViewInSystemCache @ 0x14003D650
 * Callers:
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_GET_SYSTEM_CACHE_REVERSE_MAP @ 0x140116EB8 (MI_GET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v3; // eax
  __int64 result; // rax
  ULONG_PTR v6; // rax
  _QWORD *v7; // r10
  unsigned int *v8; // r9
  unsigned int v9; // edx
  bool v10; // zf
  BOOL v11; // ecx
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // r14d
  int PteLink; // eax
  int v20; // r15d
  char v21; // dl
  unsigned int v22; // ecx
  int v23; // r14d
  unsigned int v24; // edi
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _KPROCESS *Process; // rdx
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // rcx
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v42; // r8
  signed __int32 v43[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h]
  __int64 *v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v48; // [rsp+58h] [rbp-A8h]
  __int64 *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  unsigned int v51; // [rsp+70h] [rbp-90h] BYREF
  __int16 v52; // [rsp+74h] [rbp-8Ch]
  __int64 v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h]
  _QWORD v55[21]; // [rsp+88h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v49 = a3;
  v45 = a2;
  v44 = a1;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = MiSectionControlArea(a1, a2);
  v9 = *v8;
  v10 = (*v8 & 0xFFF) == 0;
  v48 = v6;
  v11 = !v10;
  v9 >>= 12;
  v12 = v11 + v9;
  v46 = v12;
  if ( !(v11 + v9) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v6, 0LL, 0LL);
  v13 = MiOffsetToProtos(v6, *v7, &v47);
  v14 = *a2;
  v15 = v13;
  v50 = v12 + v47;
  if ( v14 )
  {
    v18 = 0;
    v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v17 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v17 + 16));
      v20 = PteLink;
      _InterlockedOr(v43, 0);
      v21 = KiTbFlushTimeStamp;
      v22 = (KiTbFlushTimeStamp - PteLink) & 0xFFFFF;
      if ( v22 <= 2 )
      {
        v23 = PteLink & 1;
        while ( v23 || v22 < 2 )
        {
          if ( (v21 & 1) == 0 )
          {
            v53 = 20LL;
            v51 = 0;
            v52 = 0;
            v54 = 0LL;
            v55[0] = 0LL;
            MiInsertTbFlushEntry(&v51, (__int64)(v17 << 25) >> 16, 64LL, 0LL);
            if ( !HIDWORD(v53) )
              break;
            v25 = qword_14034EBD8;
            if ( (v52 & 2) != 0 )
            {
              v26 = v51;
            }
            else
            {
              v26 = v51;
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process[2].ActiveProcessors.Bitmap[11] )
                goto LABEL_28;
              if ( Process->SecurePid )
              {
                if ( v51 == 1 )
                {
LABEL_28:
                  v25 = -1LL;
                  goto LABEL_30;
                }
LABEL_31:
                v28 = 1LL;
LABEL_32:
                if ( HIBYTE(v52) || v54 > v25 )
                {
                  if ( (v52 & 1) != 0 )
                    KeFlushCurrentTbOnly(v26, v28, v25);
                  else
                    KeFlushTb(v26, v28, v25);
                  HIBYTE(v52) = 0;
                }
                else if ( (v52 & 1) != 0 )
                {
                  KeFlushMultipleRangeCurrentTb(HIDWORD(v53), v55, (unsigned int)v26);
                }
                else
                {
                  KeFlushMultipleRangeTb(HIDWORD(v53), v55, (unsigned int)v26, (unsigned int)v28);
                }
                HIDWORD(v53) = 0;
                v54 = 0LL;
                break;
              }
            }
LABEL_30:
            v28 = 0LL;
            if ( (_DWORD)v26 != 1 )
              goto LABEL_31;
            goto LABEL_32;
          }
          v24 = 0;
          _InterlockedOr(v43, 0);
          while ( _bittest(&KiTbFlushTimeStamp, 0) )
          {
            if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v24);
          }
          if ( v23 )
          {
            _InterlockedOr(v43, 0);
            v21 = KiTbFlushTimeStamp;
            v22 = (KiTbFlushTimeStamp - v20) & 0xFFFFF;
            if ( v22 <= 2 )
              continue;
          }
          break;
        }
        v18 = 0;
      }
    }
  }
  else
  {
    v16 = MiObtainSystemCacheView();
    v17 = v16;
    if ( !v16 )
    {
      ++dword_140350040;
      return 3221225495LL;
    }
    v18 = 1;
    *a2 = v16 << 25 >> 16;
  }
  result = MiAddViewsForSection(v15, v50, 1LL);
  v29 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)v17 = 0LL;
    if ( v17 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v17, 0LL);
    *(_QWORD *)(v17 + 8) = 0LL;
    if ( v17 + 0x90482413008LL <= 0x7F8 )
      MiWritePteShadow(v17 + 8, 0LL);
    *(_QWORD *)(v17 + 16) = 0LL;
    if ( v17 + 0x90482413010LL <= 0x7F8 )
      MiWritePteShadow(v17 + 16, 0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
    if ( v17 + 0x90482413018LL <= 0x7F8 )
      MiWritePteShadow(v17 + 24, 0LL);
    v30 = *(_QWORD *)(v15 + 8);
    v31 = v17 + 8 * v12;
    v32 = v30 + 8 * v47;
    v33 = v30 + 8LL * *(unsigned int *)(v15 + 44);
    v34 = (_QWORD *)MI_GET_SYSTEM_CACHE_REVERSE_MAP(*v45);
    MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8]);
    v35 = MiPartitionIdToPointer(*(_WORD *)(v48 + 60) & 0x3FF);
    v37 = v46;
    if ( v38 != v35 )
      v37 = v46 | 0x20000;
    v39 = *v49;
    v34[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    v34[4] = v37 | v39;
    v34[3] = v15;
    if ( !*(_QWORD *)(v36 + 64) )
      v34[3] = v15 | 1;
    for ( ; v17 < v31; v32 += 8LL )
    {
      if ( v32 >= v33 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        v32 = *(_QWORD *)(v15 + 8);
        v40 = *(unsigned int *)(v15 + 44);
        v34[3] |= 1uLL;
        v33 = v32 + 8 * v40;
      }
      PrototypePteDirect = MiMakePrototypePteDirect(v32);
      *(_QWORD *)v17 = PrototypePteDirect;
      if ( v17 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v17, PrototypePteDirect);
      v17 += 8LL;
    }
    _InterlockedOr(v43, 0);
    v42 = (2 * (v34[3] & 1)) | 1;
    v34[2] = *v45;
    MiManageSubsectionView(v15, v34, v42);
    return 0LL;
  }
  else
  {
    ++dword_140350040;
    if ( v18 )
    {
      *(_QWORD *)(MI_GET_SYSTEM_CACHE_REVERSE_MAP(*v45) + 24) = 0LL;
      *(_QWORD *)v17 = 0LL;
      if ( v17 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v17, 0LL);
      *(_QWORD *)(v17 + 8) = 0LL;
      if ( v17 + 0x90482413008LL <= 0x7F8 )
        MiWritePteShadow(v17 + 8, 0LL);
      *(_QWORD *)(v17 + 16) = 0LL;
      if ( v17 + 0x90482413010LL <= 0x7F8 )
        MiWritePteShadow(v17 + 16, 0LL);
      *(_QWORD *)(v17 + 24) = 0LL;
      if ( v17 + 0x90482413018LL <= 0x7F8 )
        MiWritePteShadow(v17 + 24, 0LL);
      MmUnmapViewInSystemCache((__int64)(v17 << 25) >> 16);
      return v29;
    }
  }
  return result;
}
