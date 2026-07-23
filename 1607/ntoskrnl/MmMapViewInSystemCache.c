/*
 * XREFs of MmMapViewInSystemCache @ 0x1400185A0
 * Callers:
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400A3824 (MiCompareTbFlushTimeStamp.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6C20 (MiRemoveSystemCacheReferences.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v3; // eax
  __int64 result; // rax
  ULONG_PTR v7; // rax
  _DWORD *v8; // r9
  ULONG_PTR v9; // r15
  BOOL v10; // ecx
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 PteLink; // rax
  __int64 v25; // r9
  char v26; // al
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  _KPROCESS *Process; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // r9
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rbx
  _QWORD *SystemCacheReverseMap; // rax
  unsigned __int64 v42; // r10
  _QWORD *v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r10
  int v50; // r8d
  signed __int32 v51[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 *v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v55; // [rsp+44h] [rbp-BCh]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v57; // [rsp+50h] [rbp-B0h]
  _QWORD v58[21]; // [rsp+58h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v52 = a2;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v7 = MiSectionControlArea();
  v9 = v7;
  v10 = (*v8 & 0xFFF) != 0;
  v11 = *v8 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v7, 0LL, 0LL);
  v13 = MiOffsetToProtos(v7, *a3, &v53);
  v14 = v12 + v53;
  v15 = v13;
  result = MiAddViewsForSection(v13, v12 + v53, 1LL);
  if ( (int)result < 0 )
  {
    ++dword_140327DC0;
    return result;
  }
  v19 = *a2;
  if ( v19 )
  {
    v23 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v23 + 24)) != 2 )
      goto LABEL_34;
    PteLink = MiGetPteLink(*(_QWORD *)(v23 + 16));
    if ( !(unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      goto LABEL_34;
    v56 = 20LL;
    v54 = 0;
    v55 = 0;
    v57 = 0LL;
    v58[0] = 0LL;
    MiInsertTbFlushEntry(&v54, (__int64)(v23 << 25) >> 16, 64LL);
    if ( !HIDWORD(v56) )
      goto LABEL_34;
    v26 = v55;
    v27 = qword_140326A58;
    if ( (v55 & 2) != 0 )
    {
      v28 = v54;
LABEL_26:
      if ( (_DWORD)v28 == 1 )
      {
        v30 = 0LL;
LABEL_19:
        if ( HIBYTE(v55) || v57 > v27 )
        {
          if ( (v26 & 1) != 0 )
            KeFlushCurrentTbOnly(v28, v30, v27, v25);
          else
            KeFlushTb(v28, v30, v27, v25);
          HIBYTE(v55) = 0;
        }
        else if ( (v26 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(HIDWORD(v56), v58, (unsigned int)v28);
        }
        else
        {
          KeFlushMultipleRangeTb(HIDWORD(v56), v58, (unsigned int)v28, (unsigned int)v30);
        }
        LOBYTE(v55) = v55 & 0xFB;
        HIDWORD(v56) = 0;
        v57 = 0LL;
        goto LABEL_34;
      }
LABEL_18:
      v30 = (unsigned int)((v26 & 4) != 0) + 1;
      goto LABEL_19;
    }
    v28 = v54;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[14] )
    {
      if ( !Process->SecurePid )
      {
LABEL_24:
        v26 = v55;
        goto LABEL_26;
      }
      if ( v54 != 1 )
      {
        v26 = v55;
        goto LABEL_18;
      }
    }
    v27 = -1LL;
    goto LABEL_24;
  }
  v20 = MiPartitionIdToPointer(*(_WORD *)(v9 + 60) & 0x3FF, v16, v17, v18);
  v21 = MiObtainSystemCacheView(v20);
  v23 = v21;
  if ( !v21 )
  {
    ++dword_140327DC0;
    MiRemoveSystemCacheReferences(v15, v14);
    return 3221225495LL;
  }
  *v52 = v21 << 25 >> 16;
LABEL_34:
  *(_QWORD *)v23 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v23, v22) )
    MiWritePteShadow(v32, 0LL);
  *(_QWORD *)(v23 + 8) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v23 + 8, v31) )
    MiWritePteShadow(v34, 0LL);
  *(_QWORD *)(v23 + 16) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v23 + 16, v33) )
    MiWritePteShadow(v36, 0LL);
  *(_QWORD *)(v23 + 24) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v23 + 24, v35) )
    MiWritePteShadow(v37, 0LL);
  v39 = v23 + 8 * v12;
  v40 = *(_QWORD *)(v15 + 8) + 8LL * *(unsigned int *)(v15 + 44);
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v38);
  v43 = SystemCacheReverseMap;
  v44 = v12 | *a3;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  SystemCacheReverseMap[4] = v44;
  SystemCacheReverseMap[3] = v15;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v15 | 1;
  for ( ; v23 < v39; v42 = v49 + 8 )
  {
    if ( v42 >= v40 )
    {
      v15 = *(_QWORD *)(v15 + 16);
      v42 = *(_QWORD *)(v15 + 8);
      v45 = *(unsigned int *)(v15 + 44);
      v43[3] |= 1uLL;
      v40 = v42 + 8 * v45;
    }
    PrototypePteDirect = MiMakePrototypePteDirect(v42);
    *(_QWORD *)v23 = PrototypePteDirect;
    if ( (unsigned int)MiPteInShadowRange(v23, PrototypePteDirect) )
      MiWritePteShadow(v48, v47);
    v23 += 8LL;
  }
  _InterlockedOr(v51, 0);
  v50 = (2 * (v43[3] & 1)) | 1;
  v43[2] = *v52;
  MiManageSubsectionView((__int64 *)v15, v43, v50);
  return 0LL;
}
