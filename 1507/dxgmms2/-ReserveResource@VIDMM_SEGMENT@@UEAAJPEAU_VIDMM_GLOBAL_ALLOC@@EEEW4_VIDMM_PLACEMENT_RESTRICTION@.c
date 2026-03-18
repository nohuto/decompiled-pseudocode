/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C003D820
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C006F690 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C000EE78 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C000FA20 (Template_pqx.c)
 *     Template_qpxxtqqq @ 0x1C0011108 (Template_qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C003D31C (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C0071848 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  unsigned __int8 v6; // r13
  int v7; // r15d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // edx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+28h] [rbp-70h]
  int v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+40h] [rbp-58h]
  unsigned int v29; // [rsp+A0h] [rbp+8h]

  v6 = a3;
  v7 = a6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v26, v27, a4, v28, a6);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v10 = *(_QWORD *)(a2 + 24);
  else
    v10 = *(_QWORD *)(a2 + 16);
  v29 = *(_DWORD *)(a2 + 32);
  if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 )
  {
    v29 = *(_DWORD *)(a1 + 400);
    v10 = ~*(_QWORD *)(a1 + 392) & (*(_QWORD *)(a1 + 392) + v10);
  }
  v12 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, v10);
  if ( v12 < 0 )
  {
    v12 = VIDMM_SEGMENT::TrimOfferLists(v11, 2LL, v10, v14);
    if ( v12 < 0 )
      goto LABEL_51;
  }
  v15 = *(_DWORD *)(a1 + 56);
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 208) = 0LL;
    *(_QWORD *)(a2 + 200) = 1LL;
LABEL_36:
    if ( v12 >= 0 )
    {
LABEL_37:
      v21 = *(unsigned int *)(a1 + 372);
      v13 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 208) += v13;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40832LL) + 264 * v21;
      *(_QWORD *)(v11 + 8LL * *(int *)(a1 + 432) + 232) += v13;
      *(_QWORD *)(a1 + 216) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 360) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v22 = *(_QWORD *)(a1 + 224);
        v11 = v22 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 224) = v11;
        if ( v22 <= qword_1C00273B8 && v11 > qword_1C00273B8 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 39880LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 39928LL));
        if ( !v22 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v25) = *(_DWORD *)(a1 + 16) + 1;
        Template_pqx(
          (unsigned int)v25,
          &TotalBytesResidentInSegment,
          v13,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v25,
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
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 39976LL) += *(_QWORD *)(a2 + 16);
        v11 = *(_QWORD *)(a1 + 8);
        v23 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 3136LL);
        v24 = *(_QWORD *)(v11 + 39976);
        if ( *(_QWORD *)(v23 + 328) < v24 )
          *(_QWORD *)(v23 + 328) = v24;
      }
      *(_QWORD *)(a2 + 216) = a1;
      goto LABEL_51;
    }
    goto LABEL_51;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = 0LL;
  switch ( a6 )
  {
    case 3:
      v6 = 1;
      goto LABEL_32;
    case 4:
      v18 = dword_1C0027110;
      if ( (v15 & 0x1001) != 0 )
        v18 = dword_1C0027114;
      v17 = (v16 / 0x64 * (unsigned int)(100 - v18) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_31:
      v6 = 0;
      goto LABEL_32;
    case 5:
      if ( *(_DWORD *)(a1 + 404) != 1 )
        goto LABEL_32;
      v19 = *(_QWORD *)(a1 + 424);
      if ( v19 )
      {
        if ( v19 >= v10 )
        {
          v17 = *(_QWORD *)(a1 + 408);
          v16 = *(_QWORD *)(a1 + 416);
        }
        else
        {
          v7 = 6;
        }
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 376);
        v16 = v17 + *(_QWORD *)(a1 + 384);
      }
      v6 = 0;
      break;
  }
  if ( v7 == 6 && *(_DWORD *)(a1 + 404) == 1 )
  {
    if ( *(_QWORD *)(a1 + 408) - *(_QWORD *)(a1 + 376) < v10 )
      return 3221225473LL;
    v16 = *(_QWORD *)(a1 + 416);
    v17 = *(_QWORD *)(a1 + 408) - v10;
    goto LABEL_31;
  }
LABEL_32:
  v12 = VIDMM_LINEAR_POOL::Allocate(
          *(VIDMM_LINEAR_POOL **)(a1 + 144),
          v10,
          v29,
          v6,
          v17,
          v16,
          a4,
          a5,
          (void *)a2,
          (union _LARGE_INTEGER *)(a2 + 208),
          (void **)(a2 + 200));
  if ( v12 >= 0 )
    goto LABEL_37;
  v12 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v10, *(unsigned int *)(a2 + 32));
  if ( v12 >= 0 )
  {
    v12 = VIDMM_LINEAR_POOL::Allocate(
            *(VIDMM_LINEAR_POOL **)(a1 + 144),
            v10,
            v29,
            v6,
            v17,
            v16,
            a4,
            a5,
            (void *)a2,
            (union _LARGE_INTEGER *)(a2 + 208),
            (void **)(a2 + 200));
    goto LABEL_36;
  }
LABEL_51:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v11, &EventEndReserveResource, v13, v12);
  }
  return (unsigned int)v12;
}
