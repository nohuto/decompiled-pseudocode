/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0055DC0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0056800 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001CA6C (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 *     Template_qpxxtqqq @ 0x1C001E818 (Template_qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C00559E0 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C0085854 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  int v7; // r12d
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r14d
  unsigned __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int8 v19; // dl
  unsigned __int64 v20; // rax
  __int64 v22; // rax
  unsigned int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+28h] [rbp-90h]
  int v31; // [rsp+30h] [rbp-88h]
  int v32; // [rsp+40h] [rbp-78h]
  unsigned __int64 v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v35; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v36; // [rsp+D0h] [rbp+18h]

  v36 = a3;
  v7 = a6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v30, v31, a4, v32, a6);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v9 = *(_QWORD *)(a2 + 24);
  else
    v9 = *(_QWORD *)(a2 + 16);
  v34 = *(_DWORD *)(a2 + 32);
  if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 400);
    v9 = ~*(_QWORD *)(a1 + 392) & (*(_QWORD *)(a1 + 392) + v9);
  }
  v14 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, v9);
  if ( v14 >= 0 || (v14 = VIDMM_SEGMENT::TrimOfferLists(v10, 2LL, v9, v13), v14 >= 0) )
  {
    v15 = 5LL;
    v16 = *(_DWORD *)(a1 + 56);
    if ( ((*(_DWORD *)(a2 + 76) >> 11) & 1) != 0 )
      v7 = 5;
    if ( (v16 & 0x1000) == 0 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      v18 = 0LL;
      if ( v7 == 3 )
      {
        v19 = 1;
LABEL_39:
        v36 = v19;
LABEL_40:
        v22 = v7;
        v12 = v17;
        v11 = v18;
        v33 = v17;
        v14 = -1073741823;
        v35 = v18;
        v23 = 0;
        while ( 1 )
        {
          if ( v14 >= 0 )
            goto LABEL_77;
          if ( v22 == 7 && *(_DWORD *)(a1 + 404) == 1 )
          {
            if ( v23 )
            {
              v17 = *(_QWORD *)(a1 + 376);
              v18 = v11;
              if ( v12 < v17 )
                v17 = v12;
            }
            else
            {
              v18 = *(_QWORD *)(a1 + 376) + *(_QWORD *)(a1 + 384);
              if ( v11 > v18 )
                v18 = v11;
            }
          }
          else
          {
            if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 || *(_DWORD *)(a1 + 404) != 1 || !*(_QWORD *)(a1 + 424) )
            {
              if ( v23 )
                goto LABEL_76;
LABEL_69:
              v14 = VIDMM_LINEAR_POOL::Allocate(
                      *(VIDMM_LINEAR_POOL **)(a1 + 144),
                      v9,
                      v34,
                      v19,
                      v18,
                      v17,
                      a4,
                      a5,
                      (void *)a2,
                      (union _LARGE_INTEGER *)(a2 + 208),
                      (void **)(a2 + 200));
              if ( v14 < 0 )
              {
                v14 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v9, *(unsigned int *)(a2 + 32));
                if ( v14 >= 0 )
                  v14 = VIDMM_LINEAR_POOL::Allocate(
                          *(VIDMM_LINEAR_POOL **)(a1 + 144),
                          v9,
                          v34,
                          v36,
                          v18,
                          v17,
                          a4,
                          a5,
                          (void *)a2,
                          (union _LARGE_INTEGER *)(a2 + 208),
                          (void **)(a2 + 200));
              }
              v11 = v35;
              v12 = v33;
              goto LABEL_73;
            }
            if ( v19 )
            {
              if ( v23 )
              {
                v17 = v12;
                if ( v18 <= *(_QWORD *)(a1 + 416) )
                  v18 = *(_QWORD *)(a1 + 416);
              }
              else if ( *(_QWORD *)(a1 + 408) < v17 )
              {
                v17 = *(_QWORD *)(a1 + 408);
              }
            }
            else if ( v23 )
            {
              v18 = v11;
              if ( *(_QWORD *)(a1 + 408) < v17 )
                v17 = *(_QWORD *)(a1 + 408);
            }
            else if ( v18 <= *(_QWORD *)(a1 + 416) )
            {
              v18 = *(_QWORD *)(a1 + 416);
            }
          }
          if ( v18 < v17 )
            goto LABEL_69;
LABEL_73:
          v19 = v36;
          ++v23;
          v22 = v7;
          if ( v23 >= 2 )
            goto LABEL_76;
        }
      }
      if ( v7 == 4 )
      {
        v15 = (unsigned int)dword_1C002F130;
        if ( (v16 & 0x1001) != 0 )
          v15 = (unsigned int)dword_1C002F134;
        v18 = (v17 / 0x64 * (unsigned int)(100 - v15) + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_38;
      }
      if ( v7 != 7 )
      {
        if ( v7 == 5 )
        {
          if ( ((*(_DWORD *)(a2 + 76) >> 11) & 1) != 0 || *(_DWORD *)(a1 + 404) != 1 )
          {
            v18 = *(_QWORD *)(a1 + 376);
            v17 = v18 + *(_QWORD *)(a1 + 384);
          }
          else
          {
            v20 = *(_QWORD *)(a1 + 424);
            if ( v20 )
            {
              if ( v20 >= v9 )
              {
                v18 = *(_QWORD *)(a1 + 408);
                v17 = *(_QWORD *)(a1 + 416);
              }
              else
              {
                v7 = 6;
              }
            }
            else
            {
              v17 = *(_QWORD *)(a1 + 376) + *(_QWORD *)(a1 + 384);
              v18 = v17 - v9;
            }
          }
          v19 = 0;
          v36 = 0;
        }
        else
        {
          v19 = v36;
        }
        if ( v7 != 6 )
          goto LABEL_40;
        if ( *(_DWORD *)(a1 + 404) == 1 )
        {
          if ( *(_QWORD *)(a1 + 408) - *(_QWORD *)(a1 + 376) < v9 )
            return 3221225473LL;
          v17 = *(_QWORD *)(a1 + 416);
          v18 = *(_QWORD *)(a1 + 408) - v9;
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 376);
          v17 = v18 + *(_QWORD *)(a1 + 384);
        }
      }
LABEL_38:
      v19 = 0;
      goto LABEL_39;
    }
    *(_QWORD *)(a2 + 208) = 0LL;
    *(_QWORD *)(a2 + 200) = 1LL;
LABEL_76:
    if ( v14 >= 0 )
    {
LABEL_77:
      v24 = *(unsigned int *)(a1 + 372);
      v11 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 208) += v11;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40888LL) + 264 * v24;
      *(_QWORD *)(v15 + 8LL * *(int *)(a1 + 432) + 232) += v11;
      *(_QWORD *)(a1 + 216) += *(_QWORD *)(a2 + 16);
      v25 = *(unsigned int *)(a1 + 360);
      if ( (_DWORD)v25 != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v26 = *(_QWORD *)(a1 + 224);
        v15 = v26 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 224) = v15;
        if ( v26 <= qword_1C002F3E0 && v15 > qword_1C002F3E0 )
          (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)(a1 + 8) + 39936LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 39984LL),
            v25,
            v11,
            v12);
        if ( !v26 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v29) = *(_DWORD *)(a1 + 16) + 1;
        Template_pqx(
          (unsigned int)v29,
          &TotalBytesResidentInSegment,
          v11,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v29,
          *(_QWORD *)(a1 + 216));
      }
      ++*(_DWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 316);
      if ( (*(_DWORD *)(a1 + 56) & 0x1001) != 0 )
      {
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
          *(_QWORD *)(a2 + 16));
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
          *(_QWORD *)(a2 + 16));
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40032LL) += *(_QWORD *)(a2 + 16);
        v15 = *(_QWORD *)(a1 + 8);
        v27 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 3152LL);
        v28 = *(_QWORD *)(v15 + 40032);
        if ( *(_QWORD *)(v27 + 328) < v28 )
          *(_QWORD *)(v27 + 328) = v28;
      }
      *(_QWORD *)(a2 + 216) = a1;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v15, &EventEndReserveResource, v11, v14);
  }
  return (unsigned int)v14;
}
