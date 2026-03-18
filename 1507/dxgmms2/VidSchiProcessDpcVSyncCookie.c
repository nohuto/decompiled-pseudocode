/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x1C000211C (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z @ 0x1C000F204 (-ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0012110 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0012968 (-VidSchiIsExpectedVSyncCookie@@YAHPEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001318C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     Template_pqXR1qqqXR5 @ 0x1C00142C0 (Template_pqXR1qqqXR5.c)
 *     Template_pqxqqipqx @ 0x1C0014BC8 (Template_pqxqqipqx.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0019F38 (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 */

void *__fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _VIDSCH_VSYNC_COOKIE *v4; // r15
  _QWORD *v5; // r13
  void *result; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int16 *v28; // rax
  __int16 v29; // r8
  _DWORD *v30; // rax
  unsigned int v31; // r13d
  int v32; // edi
  int v33; // eax
  char v34; // dl
  unsigned int v35; // r15d
  char v36; // r11
  __int64 v37; // r13
  unsigned __int64 v38; // r12
  __int64 v39; // r10
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r9
  VIDMM_GLOBAL *v43; // rcx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // eax
  __int64 v48; // r11
  int v49; // ecx
  __int64 v50; // r10
  unsigned int v51; // r13d
  char v52; // dl
  int v53; // eax
  int v54; // eax
  __int64 v55; // r10
  int v56; // r11d
  unsigned int v57; // edx
  _DWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  char v61; // bl
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  char v66; // r9
  int v67; // eax
  int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // r9d
  __int64 v72; // [rsp+130h] [rbp+130h]
  _BYTE *v73; // [rsp+130h] [rbp+130h]
  __int64 v74; // [rsp+140h] [rbp+140h]
  __int64 v75; // [rsp+148h] [rbp+148h]
  __int64 v76; // [rsp+150h] [rbp+150h]
  _BYTE v77[272]; // [rsp+1B0h] [rbp+1B0h] BYREF

  v1 = (unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = *((_QWORD *)a1 + 6);
  v3 = 0LL;
  v4 = a1;
  *(_QWORD *)(v1 + 56) = a1;
  *(_QWORD *)(v1 + 80) = v2;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  v5 = 0LL;
  result = memset((void *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 128), 0, 0x40uLL);
  v7 = *((unsigned int *)v4 + 19);
  *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v7;
  if ( (_DWORD)v7 == -1 || (unsigned int)v7 >= *(_DWORD *)(v2 + 40) )
    return result;
  _mm_lfence();
  v8 = *(_QWORD *)(v2 + 8 * v7 + 2640);
  *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1872), (PKLOCK_QUEUE_HANDLE)(v1 + 96));
  if ( *(_DWORD *)(v8 + 14688) )
  {
    v11 = (unsigned int)(*((_DWORD *)v4 + 18) - *(_DWORD *)(v8 + 14644));
    v9 = *((_QWORD *)v4 + 7) - *(_QWORD *)(v8 + 14648);
    if ( *((_DWORD *)v4 + 18) != *(_DWORD *)(v8 + 14644) )
    {
      v12 = *(_DWORD *)(v8 + 14688);
      if ( v12 > 3 )
      {
        v9 = *(_QWORD *)(v8 + 14712);
        v15 = (*((_QWORD *)v4 + 7) - *(_QWORD *)(v8 + 14648)) / v11;
        v16 = *(_QWORD *)(v8 + 14696);
        *(_QWORD *)(v8 + 14728) = v15;
        if ( v15 > v16 + v9 || v15 < v16 - v9 )
        {
          ++*(_QWORD *)(v8 + 14720);
          *(_DWORD *)(v8 + 14688) = 0;
        }
      }
      else
      {
        *(_QWORD *)(v8 + 14704) += v9;
        v13 = v11 + v12;
        v9 = *(_QWORD *)(v8 + 14704);
        *(_DWORD *)(v8 + 14688) = v13;
        if ( v13 > 3 )
        {
          v14 = v9 / (v13 - 1);
          *(_QWORD *)(v8 + 14712) = v14 / 0xA;
          _m_prefetchw((const void *)(v8 + 14696));
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 14696), v14, *(_QWORD *)(v8 + 14696)) != v14 )
            ;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v8 + 14704) = 0LL;
    *(_DWORD *)(v8 + 14688) = 1;
  }
  if ( *(_DWORD *)(v8 + 14688) <= 3u )
    _InterlockedExchange((volatile __int32 *)(v2 + 2020), 1);
  *(_DWORD *)(v8 + 14644) = *((_DWORD *)v4 + 18);
  *(_QWORD *)(v8 + 14648) = *((_QWORD *)v4 + 7);
  *(_QWORD *)(v8 + 14656) = *((_QWORD *)v4 + 8);
  *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  if ( *(_DWORD *)(v2 + 124) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v8 + 8 * v3 + 16);
      *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17;
      if ( v17 )
        break;
LABEL_95:
      v3 = (unsigned int)(v3 + 1);
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v3;
      if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 124) )
        goto LABEL_96;
    }
    *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    if ( *(int *)(v8 + 4) < 4 )
    {
LABEL_93:
      if ( v5 )
      {
        VidSchiCheckPendingDeviceCommand(v5, v17, v9);
        v10 = *(unsigned int *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v57 = -*(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5[5] + 24LL) + 8LL * *(unsigned int *)(v5[4] + 4LL))
                       + 8LL * (unsigned int)v7
                       + 520);
        _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8LL * (unsigned int)v7 + 5176) + 8LL), v57);
        v58 = *(_DWORD **)(v2 + 8LL * (unsigned int)v7 + 5176);
        *v58 += v10;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v57);
        *(_DWORD *)v9 += v10;
      }
      goto LABEL_95;
    }
    v18 = *(unsigned int *)(v17 + 44);
    *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v18;
    v19 = v17 + 1144 * v18;
    if ( *(_DWORD *)(v19 + 1100) != 5 )
      goto LABEL_51;
    if ( !*((_QWORD *)v4 + 12) )
      VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v8, (struct _VIDSCH_GLOBAL *)v2, v9, v10);
    if ( *(_DWORD *)(v19 + 1100) == 5
      && (unsigned int)VidSchiIsExpectedVSyncCookie((struct VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + 56), v4)
      && ((v20 = *((_DWORD *)v4 + 21)) == 0 || v20 == *(_DWORD *)(v19 + 1116)) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 104LL);
      *(_DWORD *)(v19 + 1100) = 11;
      *(_DWORD *)(v19 + 1144) = *(_DWORD *)(v8 + 14644);
      *(_QWORD *)(v19 + 1136) = *(_QWORD *)(v8 + 14648);
      v22 = (*(_BYTE *)(v19 + 1148) & 0x10) == 0;
      *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v21;
      v23 = *(_QWORD *)(v19 + 1192);
      if ( v22 )
      {
        v24 = *(unsigned int *)(v2 + 124);
        v25 = (1 << v24) - 1;
      }
      else
      {
        v24 = (unsigned __int8)*(_DWORD *)v23;
        v25 = v24 | *(unsigned __int8 *)(v23 + 1);
      }
      v26 = v25;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v25;
      v27 = *(unsigned int *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      *(_DWORD *)(v8 + 2332) &= ~v26;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(v19 + 1096);
      *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80 + 8 * v27) = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                                + 0x40);
      v22 = *(_DWORD *)(v8 + 4) == 5;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v27 + 1;
      if ( v22 )
      {
        if ( (*(_DWORD *)(v19 + 1148) & 0x10) != 0 )
        {
          v28 = *(unsigned __int16 **)(v19 + 1192);
          v24 = *v28;
          LOWORD(v24) = (unsigned __int8)*v28;
          v29 = *(_WORD *)(v8 + 14624) & (v24 | *((unsigned __int8 *)v28 + 1));
        }
        else
        {
          v29 = *(_WORD *)(v8 + 14624);
        }
        VidSchiUnreferenceDisplayingAllocations((struct _VIDSCH_GLOBAL *)v24, (struct _VIDSCH_PRESENT_INFO *)v8, v29);
      }
      v30 = *(_DWORD **)(v19 + 1192);
      v22 = (unsigned __int8)*v30 == 0;
      v31 = (unsigned __int8)*v30;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v31;
      if ( !v22 )
      {
        v32 = 0;
        do
        {
          v22 = !_BitScanForward((unsigned int *)&v33, v31);
          *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v33;
          v34 = -1;
          if ( !v22 )
            v34 = v33;
          v35 = 0;
          v36 = v34;
          if ( *(_DWORD *)(v19 + 1120) )
          {
            v37 = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v38 = (unsigned __int64)(unsigned int)v34 << 6;
            do
            {
              v39 = *(_QWORD *)(v19 + 1192);
              v40 = v38 + v35;
              v41 = 3 * v40;
              v42 = 56LL * (v32 + v35 * *(_DWORD *)(v39 + 4));
              v43 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v42 + v39 + 16) + 96LL);
              *(_QWORD *)(v8 + 8 * v41 + 2336) = v43;
              *(_QWORD *)(v8 + 8 * v41 + 2344) = *(_QWORD *)(v42 + v39 + 24);
              *(_QWORD *)(v8 + 24 * v40 + 2352) = v37;
              v44 = *(unsigned __int16 *)(v8 + 14628);
              if ( (*(_DWORD *)(v42 + v39 + 68) & 0x800000) != 0 )
                v45 = v44 | (1 << v36);
              else
                v45 = v44 & ~(1 << v36);
              *(_WORD *)(v8 + 14628) = v45;
              VIDMM_GLOBAL::ReferenceDisplayingAllocation(
                v43,
                (struct _VIDSCH_DISPLAYING_ALLOCATION *)(v8 + 8 * (v41 + 292)));
              _InterlockedAdd64((volatile signed __int64 *)(v37 + 24), 1uLL);
              ++v35;
            }
            while ( v35 < *(_DWORD *)(v19 + 1120) );
            v31 = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
          ++v32;
          *(_WORD *)(v8 + 14624) |= 1 << v36;
          v31 &= ~(1 << v36);
          *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v31;
        }
        while ( v31 );
        v2 = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        v4 = *(struct _VIDSCH_VSYNC_COOKIE **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        LODWORD(v7) = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        *(_WORD *)(v8 + 14626) = *(_WORD *)(v19 + 1120);
      }
      v46 = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v47 = VidSchiCompleteFlipEntry(
              (struct _VIDSCH_GLOBAL *)v2,
              v7,
              *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
              v46,
              v46,
              0,
              0LL);
      v48 = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v5 = *(_QWORD **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v49 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
      if ( v47 )
        v49 = 1;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v47;
      v22 = *(_DWORD *)(v8 + 4) == 4;
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = v49;
      if ( v22 )
        *(_DWORD *)(v48 + 44) = ((_BYTE)v46 + 1) & 0x3F;
    }
    else
    {
LABEL_51:
      v48 = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    if ( *(_DWORD *)(v8 + 4) != 5 || !*(_DWORD *)(v8 + 2320) )
    {
LABEL_92:
      LODWORD(v3) = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      goto LABEL_93;
    }
    v50 = *(unsigned int *)(v48 + 40);
    v51 = *(_DWORD *)(v48 + 40);
    v52 = v50 + 1;
    v3 = 1144 * v50 + v48 + 56;
    while ( 1 )
    {
      v17 = v52 & 0x3F;
      if ( (_DWORD)v17 == (_DWORD)v50 )
        break;
      v10 = 1144LL * (unsigned int)v17 + v48 + 56;
      if ( (unsigned int)(*(_DWORD *)(v10 + 1044) - 2) > 1 )
        break;
      v9 = (*(_BYTE *)(v10 + 1092) & 0x10) != 0
         ? (unsigned __int8)**(_DWORD **)(v10 + 1136) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v10 + 1136) + 1LL)
         : (unsigned int)((1 << *(_DWORD *)(v2 + 124)) - 1);
      if ( ((unsigned int)v9 & *(_DWORD *)(v8 + 2332)) != 0 )
        break;
      if ( *(_BYTE *)(v10 + 1056) )
      {
        v51 = v17;
        v3 = 1144LL * (unsigned int)v17 + v48 + 56;
      }
      v52 = v17 + 1;
    }
    if ( v51 == (_DWORD)v50 )
    {
      if ( (unsigned int)(*(_DWORD *)(v3 + 1044) - 2) > 1 )
        goto LABEL_86;
      v9 = *(unsigned int *)(v3 + 1092);
      *(_QWORD *)(v3 + 1072) = MEMORY[0xFFFFF78000000320];
      v17 = (v9 & 0x10) != 0
          ? (unsigned __int8)**(_DWORD **)(v3 + 1136) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v3 + 1136) + 1LL)
          : (unsigned int)((1 << *(_DWORD *)(v2 + 124)) - 1);
      v53 = *(_DWORD *)(v8 + 2332);
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v53;
      if ( (v53 & (unsigned int)v17) != 0 )
        goto LABEL_86;
      v54 = *(_DWORD *)(v3 + 1052);
      if ( v54 )
      {
        *(_DWORD *)(v3 + 1044) = 3;
        *(_DWORD *)(v3 + 1052) = v54 - 1;
        goto LABEL_86;
      }
      if ( (v9 & 0x80u) != 0LL )
      {
        v10 = *(unsigned int *)(v48 + 40);
        v17 = ((_BYTE)v10 + 1) & 0x3F;
        if ( (_DWORD)v17 != (_DWORD)v10 )
        {
          do
          {
            v55 = v48 + 1144LL * (unsigned int)v17;
            if ( *(_DWORD *)(v55 + 1100) != 2 )
              break;
            v56 = *(_DWORD *)(v55 + 1148);
            v9 = (v56 & 0x10) != 0
               ? (unsigned __int8)**(_DWORD **)(v55 + 1192) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v55 + 1192)
                                                                                               + 1LL)
               : (unsigned int)((1 << *(_DWORD *)(v2 + 124)) - 1);
            if ( (*(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) & (unsigned int)v9) != 0 )
              break;
            v3 = v55 + 56;
            v51 = v17;
            if ( (v56 & 0x80u) == 0 )
              break;
            v48 = *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            v17 = ((_BYTE)v17 + 1) & 0x3F;
          }
          while ( (_DWORD)v17 != (_DWORD)v10 );
          v4 = *(struct _VIDSCH_VSYNC_COOKIE **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        }
        if ( v51 != (_DWORD)v10 )
          VidSchiCompleteFlipEntry(
            (struct _VIDSCH_GLOBAL *)v2,
            v7,
            *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            v10,
            ((_BYTE)v51 - 1) & 0x3F,
            6,
            (_BYTE *)(v1 + 28));
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(
        *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        (unsigned int)v7,
        *(unsigned int *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
        v51);
    }
    *(_DWORD *)(v3 + 1044) = 4;
LABEL_86:
    if ( *(_DWORD *)(v3 + 1044) == 4 )
    {
      v22 = (*(_DWORD *)(v3 + 1092) & 0x100) == 0;
      LODWORD(v3) = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v73 = (_BYTE *)(v1 + 1);
      if ( v22 )
        VidSchiExecuteMmIoFlip(v2, v7, v3, v51, v73);
      else
        VidSchiFlipImmediateAndCompleteFlipEntry((struct _VIDSCH_GLOBAL *)v2, v7, v3, v51, v73);
      v5 = *(_QWORD **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      goto LABEL_93;
    }
    v5 = *(_QWORD **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_92;
  }
LABEL_96:
  if ( bTracingEnabled )
  {
    if ( v5 )
      v59 = *(unsigned int *)(v2 + 2152);
    else
      v59 = 0LL;
    if ( v5 )
    {
      v60 = v5[1];
      if ( !v60 )
        v60 = (__int64)v5;
    }
    else
    {
      v60 = 0LL;
    }
    v61 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v74) = *((_DWORD *)v4 + 19);
      LODWORD(v72) = *((_DWORD *)v4 + 20);
      Template_pqxqqipqx(
        v60,
        v59,
        v9,
        *(_QWORD *)(v2 + 16),
        v72,
        *((_QWORD *)v4 + 12),
        v74,
        *((_DWORD *)v4 + 18),
        *((_QWORD *)v4 + 7),
        v60,
        v59,
        *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
      v61 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    memset((void *)(v1 + 192), 0, 0x40uLL);
    if ( *((_DWORD *)v4 + 4) == 3 )
    {
      *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *((_QWORD *)v4 + 12);
    }
    else
    {
      v64 = (unsigned __int8)*((_DWORD *)v4 + 22);
      v22 = !_BitScanForward((unsigned int *)&v65, v64);
      *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = v65;
      LOBYTE(v62) = !v22;
      v63 = 0xFFFFFFFFLL;
      if ( !v22 )
        v63 = (unsigned __int8)v65;
      v66 = 0;
      while ( (_DWORD)v64 )
      {
        *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0 + 8LL * (char)v63) = *((_QWORD *)v4
                                                                                                + 5 * v66
                                                                                                + 12);
        v62 = 0xFFFFFFFFLL;
        v64 = ~(1 << v63) & (unsigned int)v64;
        v22 = !_BitScanForward((unsigned int *)&v67, v64);
        *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v67;
        if ( !v22 )
          v62 = (unsigned __int8)v67;
        ++v66;
        LOBYTE(v63) = v62;
      }
    }
    if ( v61 < 0 )
    {
      LODWORD(v76) = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      LODWORD(v75) = *((_DWORD *)v4 + 18);
      LODWORD(v74) = *((_DWORD *)v4 + 19);
      LODWORD(v72) = *(_DWORD *)(v2 + 124);
      Template_pqXR1qqqXR5(v63, v62, v64, *(_QWORD *)(v2 + 16), v72, v1 + 192, v74, v75, v76, v1 + 128);
    }
  }
  if ( !*(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) )
  {
    if ( g_bVSyncEnabledForLogging || *(_BYTE *)(v2 + 45) != 1 || !*(_DWORD *)(v2 + 2032) )
      goto LABEL_135;
    if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2020), 0)
      && !*(_DWORD *)(*(_QWORD *)(v2 + 16) + 2000LL)
      && !*(_DWORD *)(v2 + 908)
      && !*(_DWORD *)(v2 + 924) )
    {
      if ( *(_DWORD *)(v2 + 2028) == -1 )
        *(_DWORD *)(v2 + 2028) = v7;
      if ( *(_DWORD *)(v2 + 2028) == (_DWORD)v7 )
      {
        v68 = *(_DWORD *)(v2 + 2024);
        if ( v68 != -1 )
        {
          v69 = *(_DWORD *)(v2 + 2032);
          v70 = v68 + 1;
          *(_DWORD *)(v2 + 2024) = v70;
          if ( v70 == v69 )
          {
            if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2016), 1) )
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 1984), CriticalWorkQueue);
          }
          else if ( v70 > v69 )
          {
            *(_DWORD *)(v2 + 2024) = v69 + 1;
          }
        }
      }
      goto LABEL_135;
    }
  }
  *(_DWORD *)(v2 + 2028) = -1;
  *(_DWORD *)(v2 + 2024) = 0;
LABEL_135:
  v71 = *(_DWORD *)(v8 + 14644);
  *(_QWORD *)(v8 + 14672) = *((_QWORD *)v4 + 12);
  *(_DWORD *)(v8 + 14680) = *((_DWORD *)v4 + 21);
  ADAPTER_DISPLAY::SignalVerticalBlankEvent(
    *(ADAPTER_DISPLAY **)(*(_QWORD *)(v2 + 16) + 1976LL),
    *(struct DXGADAPTER **)(v2 + 16),
    v7,
    v71);
  if ( *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    VidSchiCompletePendingFlip((struct _VIDSCH_GLOBAL *)v2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 96));
  result = *(void **)(v2 + 2544);
  if ( result )
    return (void *)((__int64 (__fastcall *)(_QWORD, _QWORD))result)(*(_QWORD *)(v2 + 2560), (unsigned int)v7);
  return result;
}
