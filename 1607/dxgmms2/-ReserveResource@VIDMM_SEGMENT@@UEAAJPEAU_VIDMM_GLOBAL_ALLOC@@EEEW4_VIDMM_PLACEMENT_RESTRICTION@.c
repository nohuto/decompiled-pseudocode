/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0064640
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0062160 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001DBA4 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     Template_qpxxtqqq @ 0x1C0020368 (Template_qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C0064308 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C0099EEC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C009A998 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  unsigned int v6; // r12d
  char v7; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // ebp
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+28h] [rbp-90h]
  int v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+40h] [rbp-78h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  unsigned int v36; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v38; // [rsp+D0h] [rbp+18h]
  char v39; // [rsp+D8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v6 = 0;
  v7 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v14 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = a2;
  }
  v15 = a6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v32, v33, v7, v34, a6);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v16 = *(_QWORD *)(a2 + 24);
  else
    v16 = *(_QWORD *)(a2 + 16);
  v36 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 404) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v19 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, v7, a5);
LABEL_36:
    if ( v19 >= 0 )
    {
LABEL_19:
      v26 = *(unsigned int *)(a1 + 372);
      v20 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 208) += v20;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 41200LL) + 264 * v26;
      *(_QWORD *)(v18 + 8LL * *(int *)(a1 + 468) + 232) += v20;
      *(_QWORD *)(a1 + 216) += *(_QWORD *)(a2 + 16);
      v27 = *(unsigned int *)(a1 + 360);
      if ( (_DWORD)v27 != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v30 = *(_QWORD *)(a1 + 224);
        v18 = v30 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 224) = v18;
        if ( v30 <= qword_1C00353E8 && v18 > qword_1C00353E8 )
          (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)(a1 + 8) + 40008LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40072LL),
            v27,
            v20,
            v21);
        if ( !v30 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v31) = *(_DWORD *)(a1 + 16) + 1;
        Template_pqx(
          (unsigned int)v31,
          &TotalBytesResidentInSegment,
          v20,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v31,
          *(_QWORD *)(a1 + 216));
      }
      ++*(_DWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 316);
      if ( (*(_DWORD *)(a1 + 56) & 0x1001) != 0 )
      {
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
          *(_QWORD *)(a2 + 16));
        v18 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
                *(_QWORD *)(a2 + 16));
        v27 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v27 + 40120) += *(_QWORD *)(a2 + 16);
      }
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v27, v20, v21);
        v28[3] = *(_QWORD *)(a2 + 208);
        v28[4] = *(int *)(a2 + 220);
        v18 = *(unsigned int *)(a2 + 216);
        v28[5] = v18;
      }
      goto LABEL_25;
    }
    goto LABEL_55;
  }
  v19 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, v16, a3, a4);
  if ( v19 < 0 )
  {
    v19 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v16, *(unsigned int *)(a2 + 32));
    if ( v19 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_25:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v18, &EventEndReserveResource, v20, v19);
        }
        return (unsigned int)v19;
      }
      WdLogNewEntry5_WdTrace(v18, v17, v20, v21);
LABEL_55:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v20, v21) + 24) = v19;
      goto LABEL_25;
    }
  }
  v22 = *(_DWORD *)(a1 + 56);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) != 0 )
    v15 = 5;
  if ( (v22 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_36;
  }
  v23 = *(_QWORD *)(a1 + 40);
  v24 = 0LL;
  switch ( v15 )
  {
    case 3:
      LOBYTE(v17) = 1;
      goto LABEL_42;
    case 4:
      v18 = (unsigned int)dword_1C0035160;
      if ( (v22 & 0x1001) != 0 )
        v18 = (unsigned int)dword_1C0035164;
      v17 = (v23 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v24 = (v23 / 0x64 * (unsigned int)(100 - v18) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_41;
    case 7:
LABEL_41:
      LOBYTE(v17) = 0;
LABEL_42:
      v38 = v17;
      goto LABEL_17;
    case 5:
      v24 = *(_QWORD *)(a1 + 376);
      v23 = v24 + *(_QWORD *)(a1 + 384);
      goto LABEL_41;
  }
  if ( v15 != 6 )
  {
LABEL_16:
    LOBYTE(v17) = v38;
LABEL_17:
    v25 = v15;
    v21 = v23;
    v20 = v24;
    v35 = v23;
    v19 = -1073741823;
    v37 = v24;
    while ( 1 )
    {
      if ( v19 >= 0 )
        goto LABEL_19;
      if ( v25 == 7 && *(_DWORD *)(a1 + 404) == 1 )
      {
        if ( v6 )
        {
          v23 = *(_QWORD *)(a1 + 376);
          v24 = v20;
          if ( v21 < v23 )
            v23 = v21;
        }
        else
        {
          v24 = *(_QWORD *)(a1 + 376) + *(_QWORD *)(a1 + 384);
          if ( v20 > v24 )
            v24 = v20;
        }
      }
      else
      {
        if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 || *(_DWORD *)(a1 + 404) != 1 || !*(_QWORD *)(a1 + 424) )
        {
          if ( v6 )
            goto LABEL_36;
LABEL_31:
          v19 = VIDMM_LINEAR_POOL::Allocate(
                  *(VIDMM_LINEAR_POOL **)(a1 + 144),
                  v16,
                  v36,
                  v17,
                  v24,
                  v23,
                  v39,
                  a5,
                  (void *)a2,
                  (union _LARGE_INTEGER *)(a2 + 216),
                  (void **)(a2 + 208));
          if ( v19 < 0 )
          {
            v19 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v16, *(unsigned int *)(a2 + 32));
            if ( v19 >= 0 )
              v19 = VIDMM_LINEAR_POOL::Allocate(
                      *(VIDMM_LINEAR_POOL **)(a1 + 144),
                      v16,
                      v36,
                      v38,
                      v24,
                      v23,
                      v39,
                      a5,
                      (void *)a2,
                      (union _LARGE_INTEGER *)(a2 + 216),
                      (void **)(a2 + 208));
          }
          v20 = v37;
          v21 = v35;
          goto LABEL_33;
        }
        if ( (_BYTE)v17 )
        {
          if ( v6 )
          {
            v23 = v21;
            if ( v24 <= *(_QWORD *)(a1 + 416) )
              v24 = *(_QWORD *)(a1 + 416);
          }
          else if ( *(_QWORD *)(a1 + 408) < v23 )
          {
            v23 = *(_QWORD *)(a1 + 408);
          }
        }
        else if ( v6 )
        {
          v24 = v20;
          if ( *(_QWORD *)(a1 + 408) < v23 )
            v23 = *(_QWORD *)(a1 + 408);
        }
        else if ( v24 <= *(_QWORD *)(a1 + 416) )
        {
          v24 = *(_QWORD *)(a1 + 416);
        }
      }
      if ( v24 < v23 )
        goto LABEL_31;
LABEL_33:
      LOBYTE(v17) = v38;
      ++v6;
      v25 = v15;
      if ( v6 >= 2 )
        goto LABEL_36;
    }
  }
  if ( *(_DWORD *)(a1 + 404) != 1 )
  {
    v24 = *(_QWORD *)(a1 + 376);
    v23 = v24 + *(_QWORD *)(a1 + 384);
    goto LABEL_16;
  }
  if ( *(_QWORD *)(a1 + 408) - *(_QWORD *)(a1 + 376) >= v16 )
  {
    v23 = *(_QWORD *)(a1 + 416);
    v24 = *(_QWORD *)(a1 + 408) - v16;
    goto LABEL_41;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v18, v17, v20, v21);
  return 3221225473LL;
}
