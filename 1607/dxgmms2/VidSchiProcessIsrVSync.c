/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000C0E0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B8C0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0021C88 (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        int a3,
        __int64 a4)
{
  UINT SubmissionFenceId; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned int v11; // r8d
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rcx
  PSLIST_ENTRY v15; // rax
  __int64 v16; // rdx
  PSLIST_ENTRY v17; // rbx
  LARGE_INTEGER PhysicalAddress; // rax
  signed __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 EngineOrdinal; // rcx
  ULONGLONG v24; // rax
  unsigned int v25; // r9d
  char v26; // r10
  char v27; // r11
  _QWORD *v28; // rax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  UINT64 v37; // rdx
  char *v38; // r8
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // eax
  UINT64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  UINT64 v52; // rdx
  int v53; // ecx
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  ULONGLONG Alignment; // rax
  ULONGLONG Region; // rcx
  int v64; // eax
  __int64 v65; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-70h] BYREF
  LARGE_INTEGER v68; // [rsp+40h] [rbp-68h]
  LARGE_INTEGER v69; // [rsp+48h] [rbp-60h]
  __int64 v70; // [rsp+50h] [rbp-58h] BYREF
  __int64 v71; // [rsp+58h] [rbp-50h]
  __int64 v72; // [rsp+60h] [rbp-48h]

  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v7 = 0;
  v8 = *(_QWORD *)(a1[1].Alignment + 2128);
  v9 = 0;
  v11 = *(_DWORD *)(v8 + 80);
  v68.QuadPart = 0LL;
  if ( !v11 )
  {
LABEL_49:
    v9 = -1;
    goto LABEL_14;
  }
  while ( *(_DWORD *)(1016LL * v9 + *(_QWORD *)(v8 + 112) + 964) != SubmissionFenceId )
  {
    if ( ++v9 >= v11 )
      goto LABEL_49;
  }
  if ( v9 == -1 || v9 >= *((_DWORD *)&a1[2].HeaderX64 + 2) )
    goto LABEL_14;
  _mm_lfence();
  LODWORD(v12) = 1;
  v13 = *(&a1[185].Region + v9);
  if ( !_InterlockedExchange((volatile __int32 *)(v13 + 18820), 0) )
  {
    v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(v13 + 18800) )
      *(union _LARGE_INTEGER *)(v13 + 18800) = PerformanceFrequency;
LABEL_8:
    *(_DWORD *)(v13 + 18752) += v12;
    *(LARGE_INTEGER *)(v13 + 18744) = v14;
    if ( *(_BYTE *)(v13 + 8) )
    {
      Alignment = a1[1].Alignment;
      if ( !*(_QWORD *)(Alignment + 904) || !*(_BYTE *)(Alignment + 2090) )
      {
        Region = a1->Region;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        v64 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int64 *))DxgCoreInterface[47])(
                Region,
                0LL,
                0LL,
                &v70);
        v65 = 0LL;
        if ( v64 >= 0 )
          v65 = v71;
        *(_QWORD *)(v13 + 18760) = v65;
      }
    }
    goto LABEL_9;
  }
  v69 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( !*(_QWORD *)(v13 + 18800) )
    *(union _LARGE_INTEGER *)(v13 + 18800) = PerformanceFrequency;
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 18832), 0LL, 0LL);
  v14 = v69;
  v21 = v20;
  v22 = v69.QuadPart - *(_QWORD *)(v13 + 18744);
  if ( !v21 )
    goto LABEL_8;
  if ( v22 <= v21 )
    goto LABEL_8;
  v12 = v22 / v21;
  if ( (unsigned int)(v22 / v21) )
    goto LABEL_8;
LABEL_9:
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 19232));
  if ( v15 )
  {
    v17 = v15 - 1;
    LODWORD(v15->Next) = a2->InterruptType;
    *((_DWORD *)&v15[4].Next + 3) = a3;
    v15[2].Next = (struct _SLIST_ENTRY *)a1;
    HIDWORD(v15[4].Next) = v9;
    *((_DWORD *)&v15[4].Next + 2) = SubmissionFenceId;
    LOBYTE(v15[5].Next) = 0;
    if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    {
      VidSchiProcessIsrVSyncMultiPlaneOverlay2(
        (struct _VIDSCH_GLOBAL *)a1,
        (struct _VIDSCH_PRESENT_INFO *)v13,
        a2,
        (struct _VIDSCH_VSYNC_COOKIE *)v17);
      goto LABEL_13;
    }
    if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
    {
      LOBYTE(v17[6].Next) = 1;
      PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
      *((LARGE_INTEGER *)&v17[6].Next + 1) = PhysicalAddress;
      v68 = PhysicalAddress;
      goto LABEL_13;
    }
    EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
    if ( (unsigned int)EngineOrdinal >= 8 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(EngineOrdinal, v16);
      v28[3] = a1;
      v28[4] = a2->DmaCompleted.SubmissionFenceId;
      v28[5] = a2->DmaCompleted.EngineOrdinal;
      WdLogEvent5_WdAssertion(v28);
      goto LABEL_13;
    }
    v24 = a1[1].Alignment;
    v25 = 0;
    v26 = *(_BYTE *)(v24 + 2054);
    v27 = *(_BYTE *)(v24 + 2055);
    if ( !(_DWORD)EngineOrdinal )
    {
LABEL_13:
      LODWORD(v17[5].Next) = *(_DWORD *)(v13 + 18752);
      *((_QWORD *)&v17[3].Next + 1) = *(_QWORD *)(v13 + 18744);
      v17[4].Next = *(struct _SLIST_ENTRY **)(v13 + 18760);
      *((_QWORD *)&v17[4].Next + 1) = a4;
      ExpInterlockedPushEntrySList(a1 + 119, v17 + 2);
      goto LABEL_14;
    }
    while ( 1 )
    {
      if ( v26 )
      {
        v52 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 96LL * v7;
        if ( !*(_DWORD *)(v52 + 4) )
          goto LABEL_32;
        LOBYTE(v17[6].Next) |= 1 << *(_DWORD *)v52;
        v38 = (char *)v17 + 40 * v25;
        *((_QWORD *)v38 + 13) = *(_QWORD *)(v52 + 8);
        *((_WORD *)v38 + 56) = *(_WORD *)(v52 + 20);
        *((_WORD *)v38 + 58) = *(_WORD *)(v52 + 24);
        *((_WORD *)v38 + 57) = *(_WORD *)(v52 + 28);
        *((_WORD *)v38 + 59) = *(_WORD *)(v52 + 32);
        *((_WORD *)v38 + 60) = *(_WORD *)(v52 + 36);
        v53 = *((_DWORD *)v38 + 34);
        *((_WORD *)v38 + 62) = *(_WORD *)(v52 + 40);
        *((_WORD *)v38 + 61) = *(_WORD *)(v52 + 44);
        *((_WORD *)v38 + 63) = *(_WORD *)(v52 + 48);
        *((_WORD *)v38 + 64) = *(_WORD *)(v52 + 36);
        *((_WORD *)v38 + 66) = *(_WORD *)(v52 + 40);
        *((_WORD *)v38 + 65) = *(_WORD *)(v52 + 44);
        *((_WORD *)v38 + 67) = *(_WORD *)(v52 + 48);
        *((_DWORD *)v38 + 34) ^= (*(_DWORD *)(v52 + 16) ^ v53) & 1;
        v54 = *((_DWORD *)v38 + 34) ^ ((unsigned __int8)*((_DWORD *)v38 + 34) ^ (unsigned __int8)*(_DWORD *)(v52 + 16)) & 2;
        *((_DWORD *)v38 + 34) = v54;
        v55 = *(_DWORD *)(v52 + 52);
        if ( v55 <= 1 )
          *((_DWORD *)v38 + 34) = v54 & 0xFFFFFFE7;
        else
          *((_DWORD *)v38 + 34) = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(8 * v55 - 8)) & 0x18;
        *((_DWORD *)v38 + 34) ^= (*((_DWORD *)v38 + 34) ^ (4 * *(_DWORD *)(v52 + 56))) & 4;
        v29 = *((_DWORD *)v38 + 34) ^ ((unsigned __int8)*((_DWORD *)v38 + 34) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v52 + 72))) & 0x60;
        *((_DWORD *)v38 + 34) = v29;
        v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v52 + 76) << 7)) & 0x80;
        *((_DWORD *)v38 + 34) = v30;
        v31 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 76) << 7)) & 0x100;
        *((_DWORD *)v38 + 34) = v31;
        v32 = v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 76) << 7)) & 0x200;
        *((_DWORD *)v38 + 34) = v32;
        v33 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 80) << 10)) & 0x1C00;
        *((_DWORD *)v38 + 34) = v33;
        v34 = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 84) << 13)) & 0x2000;
        *((_DWORD *)v38 + 34) = v34;
        v35 = v34 ^ ((unsigned __int16)v34 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 88) << 14)) & 0x4000;
        *((_DWORD *)v38 + 34) = v35;
        v36 = *(_DWORD *)(v52 + 92);
      }
      else if ( v27 )
      {
        v37 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 112LL * v7;
        if ( !*(_DWORD *)(v37 + 4) )
          goto LABEL_32;
        LOBYTE(v17[6].Next) |= 1 << *(_DWORD *)v37;
        v38 = (char *)v17 + 40 * v25;
        *((_QWORD *)v38 + 13) = *(_QWORD *)(v37 + 8);
        *((_WORD *)v38 + 56) = *(_WORD *)(v37 + 20);
        *((_WORD *)v38 + 58) = *(_WORD *)(v37 + 24);
        *((_WORD *)v38 + 57) = *(_WORD *)(v37 + 28);
        *((_WORD *)v38 + 59) = *(_WORD *)(v37 + 32);
        *((_WORD *)v38 + 60) = *(_WORD *)(v37 + 36);
        v39 = *((_DWORD *)v38 + 34);
        *((_WORD *)v38 + 62) = *(_WORD *)(v37 + 40);
        *((_WORD *)v38 + 61) = *(_WORD *)(v37 + 44);
        *((_WORD *)v38 + 63) = *(_WORD *)(v37 + 48);
        *((_WORD *)v38 + 64) = *(_WORD *)(v37 + 52);
        *((_WORD *)v38 + 66) = *(_WORD *)(v37 + 56);
        *((_WORD *)v38 + 65) = *(_WORD *)(v37 + 60);
        *((_WORD *)v38 + 67) = *(_WORD *)(v37 + 64);
        *((_DWORD *)v38 + 34) ^= (*(_DWORD *)(v37 + 16) ^ v39) & 1;
        v40 = *((_DWORD *)v38 + 34) ^ ((unsigned __int8)*((_DWORD *)v38 + 34) ^ (unsigned __int8)*(_DWORD *)(v37 + 16)) & 2;
        *((_DWORD *)v38 + 34) = v40;
        v41 = *(_DWORD *)(v37 + 68);
        if ( v41 <= 1 )
          *((_DWORD *)v38 + 34) = v40 & 0xFFFFFFE7;
        else
          *((_DWORD *)v38 + 34) = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(8 * v41 - 8)) & 0x18;
        *((_DWORD *)v38 + 34) ^= (*((_DWORD *)v38 + 34) ^ (4 * *(_DWORD *)(v37 + 72))) & 4;
        v56 = *((_DWORD *)v38 + 34) ^ ((unsigned __int8)*((_DWORD *)v38 + 34) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v37 + 88))) & 0x60;
        *((_DWORD *)v38 + 34) = v56;
        v57 = v56 ^ ((unsigned __int8)v56 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v37 + 92) << 7)) & 0x80;
        *((_DWORD *)v38 + 34) = v57;
        v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v37 + 92) << 7)) & 0x100;
        *((_DWORD *)v38 + 34) = v58;
        v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v37 + 92) << 7)) & 0x200;
        *((_DWORD *)v38 + 34) = v59;
        v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v37 + 96) << 10)) & 0x1C00;
        *((_DWORD *)v38 + 34) = v60;
        v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v37 + 100) << 13)) & 0x2000;
        *((_DWORD *)v38 + 34) = v61;
        v35 = v61 ^ ((unsigned __int16)v61 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v37 + 104) << 14)) & 0x4000;
        *((_DWORD *)v38 + 34) = v35;
        v36 = *(_DWORD *)(v37 + 108);
      }
      else
      {
        v42 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 104LL * v7;
        if ( !*(_DWORD *)(v42 + 4) )
          goto LABEL_32;
        LOBYTE(v17[6].Next) |= 1 << *(_DWORD *)v42;
        v38 = (char *)v17 + 40 * v25;
        *((_QWORD *)v38 + 13) = *(_QWORD *)(v42 + 8);
        *((_WORD *)v38 + 56) = *(_WORD *)(v42 + 20);
        *((_WORD *)v38 + 58) = *(_WORD *)(v42 + 24);
        *((_WORD *)v38 + 57) = *(_WORD *)(v42 + 28);
        *((_WORD *)v38 + 59) = *(_WORD *)(v42 + 32);
        *((_WORD *)v38 + 60) = *(_WORD *)(v42 + 36);
        v43 = *((_DWORD *)v38 + 34);
        *((_WORD *)v38 + 62) = *(_WORD *)(v42 + 40);
        *((_WORD *)v38 + 61) = *(_WORD *)(v42 + 44);
        *((_WORD *)v38 + 63) = *(_WORD *)(v42 + 48);
        *((_WORD *)v38 + 64) = *(_WORD *)(v42 + 52);
        *((_WORD *)v38 + 66) = *(_WORD *)(v42 + 56);
        *((_WORD *)v38 + 65) = *(_WORD *)(v42 + 60);
        *((_WORD *)v38 + 67) = *(_WORD *)(v42 + 64);
        *((_DWORD *)v38 + 34) ^= (*(_DWORD *)(v42 + 16) ^ v43) & 1;
        v44 = *((_DWORD *)v38 + 34) ^ (*(_DWORD *)(v42 + 16) ^ *((_DWORD *)v38 + 34)) & 2;
        *((_DWORD *)v38 + 34) = v44;
        v45 = *(_DWORD *)(v42 + 68);
        if ( v45 > 1 )
          *((_DWORD *)v38 + 34) = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(8 * v45 - 8)) & 0x18;
        else
          *((_DWORD *)v38 + 34) = v44 & 0xFFFFFFE7;
        *((_DWORD *)v38 + 34) ^= (*((_DWORD *)v38 + 34) ^ (4 * *(_DWORD *)(v42 + 72))) & 4;
        v46 = *((_DWORD *)v38 + 34) ^ ((unsigned __int8)*((_DWORD *)v38 + 34) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v42 + 76))) & 0x60;
        *((_DWORD *)v38 + 34) = v46;
        v47 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v42 + 80) << 7)) & 0x80;
        *((_DWORD *)v38 + 34) = v47;
        v48 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 80) << 7)) & 0x100;
        *((_DWORD *)v38 + 34) = v48;
        v49 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 80) << 7)) & 0x200;
        *((_DWORD *)v38 + 34) = v49;
        v50 = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 84) << 10)) & 0x1C00;
        *((_DWORD *)v38 + 34) = v50;
        v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 88) << 13)) & 0x2000;
        *((_DWORD *)v38 + 34) = v51;
        v35 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 92) << 14)) & 0x4000;
        *((_DWORD *)v38 + 34) = v35;
        v36 = *(_DWORD *)(v42 + 96);
      }
      *((_DWORD *)v38 + 34) = v35 ^ (v35 ^ (v36 << 15)) & 0x18000;
      ++v25;
LABEL_32:
      if ( ++v7 >= a2->DmaCompleted.EngineOrdinal )
        goto LABEL_13;
    }
  }
LABEL_14:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pqx(v68.LowPart, (unsigned int)&EventVSyncInterrupt, v11, a1[1].Alignment, SubmissionFenceId, v68.QuadPart);
  return v9;
}
