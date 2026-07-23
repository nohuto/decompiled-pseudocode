/*
 * XREFs of MiAllocatePagedPoolPages @ 0x1400AC600
 * Callers:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     MiIssuePageExtendRequestNoWait @ 0x140221D54 (MiIssuePageExtendRequestNoWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 */

ULONG_PTR __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2)
{
  int v3; // r14d
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  ULONG_PTR result; // rax
  unsigned __int64 v9; // rbx
  ULONG_PTR *v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rdi
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 *v31; // r11
  __int64 v32; // rdx
  unsigned int v33; // r8d
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int64 v45; // r12
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // r11
  __int64 v50; // rdx
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r15
  __int64 v54; // rsi
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rdi
  __int64 v58; // r9
  unsigned __int64 *v59; // rdx
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned __int64 *v63; // r9
  unsigned int v64; // r9d
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned __int64 v69; // r10
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned __int64 *v72; // r11
  __int64 v73; // rcx
  unsigned int v74; // r8d
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int16 v81; // ax
  ULONG_PTR v82; // r13
  __int64 v83; // r14
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // rdi
  __int16 v86; // ax
  __int16 v87; // ax
  __int64 *v88; // rdi
  __int64 *v89; // r15
  __int64 DemandZeroPte; // rbx
  unsigned __int64 v91; // rsi
  unsigned __int64 v92; // [rsp+30h] [rbp-79h]
  unsigned __int64 v93; // [rsp+30h] [rbp-79h]
  unsigned __int64 v94; // [rsp+30h] [rbp-79h]
  unsigned __int64 v95; // [rsp+38h] [rbp-71h]
  __int64 v96; // [rsp+40h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-61h]
  struct _KTHREAD *v98; // [rsp+50h] [rbp-59h]
  unsigned __int64 v99; // [rsp+70h] [rbp-39h]
  unsigned __int64 v100; // [rsp+A0h] [rbp-9h]
  unsigned int v101; // [rsp+110h] [rbp+67h]

  v3 = 0;
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v95 = v4;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  v101 = v5;
  if ( (a1 & 0x20) != 0 )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = (ULONG_PTR *)(v9 + 2912);
  }
  else
  {
    if ( (unsigned __int64)(qword_14034FC68 - qword_14034FC58) < 0x500 )
    {
      ++dword_14034E6D0;
      MiTrimSegmentCache();
      v5 = v101;
    }
    if ( v4 == 1 && a1 >= 0 )
    {
      v6 = &qword_14034EB70[26 * v5];
      if ( LOWORD(v6->Alignment) )
      {
        v7 = RtlpInterlockedPopEntrySList(v6);
        if ( v7 )
        {
          result = (ULONG_PTR)&v7[-1];
          if ( *(_QWORD *)result != (result ^ qword_14034FB80) )
            KeBugCheckEx(0x1Au, 0x5300uLL, result, *(_QWORD *)result, result ^ qword_14034FB80);
          return result;
        }
      }
    }
    v9 = 0LL;
    v10 = &qword_14034FC28;
  }
  BugCheckParameter2 = (ULONG_PTR)v10;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v4, 1) )
    goto LABEL_193;
  v99 = 0LL;
  if ( !v9 )
  {
    if ( (dword_1403D00D8 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeResident(MiSystemPartition, v4, 0LL, v11) )
        goto LABEL_192;
      v12 = v4;
      _InterlockedExchangeAdd64(&qword_14034F8D0, v4);
      v99 = v4;
      goto LABEL_19;
    }
    if ( !(unsigned int)MiChargeWsles((__int64)dword_14034FE40, v4, 0) )
      goto LABEL_192;
  }
  v12 = v4;
LABEL_19:
  CurrentThread = KeGetCurrentThread();
  v14 = BugCheckParameter2;
  v15 = *(_QWORD *)(BugCheckParameter2 + 8);
  v16 = *(_QWORD *)(BugCheckParameter2 + 16);
  v17 = *(_QWORD *)(BugCheckParameter2 + 40);
  v98 = CurrentThread;
  v18 = v17;
  v19 = v15 - 1;
  if ( v17 >= v15 )
    v18 = 0LL;
  v92 = v18;
  if ( !v12 )
  {
    v93 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_96;
  }
  while ( 2 )
  {
    if ( v19 - v18 + 1 < v12 )
    {
      v20 = -1LL;
      goto LABEL_48;
    }
    v21 = v19 - v12 + 1;
    v22 = (unsigned __int64 *)(v16 + 8 * (v18 >> 6));
    v23 = v16 + 8 * (v21 >> 6);
    v11 = *v22 | ((1LL << (v18 & 0x3F)) - 1);
    if ( v12 > 0x7F )
    {
      if ( (v21 & 0x3F) != 0 )
        v23 += 8LL;
      if ( v11 )
      {
        if ( *++v22 )
          goto LABEL_34;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v26, v11);
        if ( v25 )
          v24 = 64;
        else
          v24 = 63 - v26;
      }
      else
      {
        v24 = 0;
      }
LABEL_39:
      v11 = v24;
      v20 = (((__int64)v22 - v16) >> 3 << 6) - v24;
      if ( v20 > v21 )
        goto LABEL_89;
      v11 = (__int64)&v22[(v12 - v24) >> 6];
      for ( ++v22; v22 != (unsigned __int64 *)v11; ++v22 )
      {
        if ( *v22 )
          goto LABEL_34;
      }
      v11 = ((_BYTE)v12 - (_BYTE)v24) & 0x3F;
      if ( (((_BYTE)v12 - (_BYTE)v24) & 0x3F) != 0 )
      {
        v25 = !_BitScanForward64((unsigned __int64 *)&v28, *v22);
        if ( v25 )
          LODWORD(v28) = 64;
        if ( (unsigned int)v28 < (unsigned int)v11 )
        {
LABEL_34:
          while ( (unsigned __int64)v22 <= v23 )
          {
            if ( !*++v22 )
            {
              v25 = !_BitScanReverse64((unsigned __int64 *)&v27, *(v22 - 1));
              if ( v25 )
                v24 = 64;
              else
                v24 = 63 - v27;
              goto LABEL_39;
            }
          }
          goto LABEL_89;
        }
      }
LABEL_47:
      if ( v20 == -1LL )
        goto LABEL_48;
      break;
    }
    if ( v12 < 0x40 )
    {
      if ( v12 > 1 )
      {
        v30 = 0LL;
        v31 = (unsigned __int64 *)(v16 + 8 * (v19 >> 6));
        while ( 1 )
        {
          if ( v11 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v22 > v23 )
                goto LABEL_89;
              v11 = *v22;
              if ( *v22 != -1LL )
              {
                v30 = 0LL;
                break;
              }
            }
          }
          v25 = !_BitScanForward64((unsigned __int64 *)&v32, v11);
          if ( v25 )
            LODWORD(v32) = 64;
          if ( (unsigned int)(v30 + v32) >= v12 )
            break;
          v33 = v95;
          v34 = ~v11;
          while ( 1 )
          {
            v34 &= v34 >> (v33 >> 1);
            if ( !v34 )
              break;
            v33 -= v33 >> 1;
            if ( v33 <= 1 )
            {
              _BitScanForward64(&v35, v34);
              v36 = (unsigned int)v35;
              goto LABEL_88;
            }
          }
          if ( v22 == v31 )
            goto LABEL_89;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v41, v11);
          v11 = v22[1];
          if ( v25 )
          {
            ++v22;
            v12 = v95;
            v30 = 64LL;
          }
          else
          {
            v12 = v95;
            v30 = (unsigned int)(63 - v41);
            ++v22;
          }
        }
        v36 = -v30;
LABEL_88:
        v20 = (((__int64)v22 - v16) >> 3 << 6) + v36;
        if ( v20 <= v21 )
          goto LABEL_47;
        goto LABEL_89;
      }
      if ( v11 == -1 )
      {
        do
        {
          if ( (unsigned __int64)++v22 > v23 )
            goto LABEL_89;
          v11 = *v22;
        }
        while ( *v22 == -1LL );
      }
      v11 = ~v11;
      _BitScanForward64(&v42, v11);
      v20 = (unsigned int)v42 + (((__int64)v22 - v16) >> 3 << 6);
      if ( v20 > v21 )
      {
        v20 = -1LL;
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    while ( v11 >= 0 )
    {
LABEL_70:
      v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v11);
      if ( v25 )
        v38 = 64;
      else
        v38 = 63 - v37;
      v20 = (((((__int64)v22 - v16) >> 3) + 1) << 6) - v38;
      if ( v20 > v21 )
        goto LABEL_89;
      v39 = v12 - v38;
      if ( !v39 )
        goto LABEL_47;
      v11 = v22[1];
      ++v22;
      if ( v39 >= 0x40 )
      {
        if ( v11 )
          goto LABEL_66;
        v39 -= 64LL;
        if ( !v39 )
          goto LABEL_47;
        v11 = v22[1];
        ++v22;
      }
      v25 = !_BitScanForward64((unsigned __int64 *)&v40, v11);
      if ( v25 )
        LODWORD(v40) = 64;
      if ( (unsigned int)v40 >= v39 )
        goto LABEL_47;
LABEL_66:
      v12 = v95;
    }
    while ( (unsigned __int64)++v22 <= v23 )
    {
      v11 = *v22;
      if ( (*v22 & 0x8000000000000000uLL) == 0 )
        goto LABEL_70;
    }
LABEL_89:
    v20 = -1LL;
LABEL_48:
    if ( v92 )
    {
      v12 = v95;
      v18 = 0LL;
      v92 = 0LL;
      v29 = v17 + v95;
      if ( v17 + v95 > v15 )
        v29 = *(_QWORD *)(BugCheckParameter2 + 8);
      v19 = v29 - 1;
      continue;
    }
    break;
  }
  v14 = BugCheckParameter2;
  CurrentThread = v98;
  v93 = v20;
LABEL_96:
  --CurrentThread->SpecialApcDisable;
  v43 = KeAbPreAcquire(v14, 0LL, 0LL, v11);
  v44 = v43;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx(v14, v43, v14);
  if ( v44 )
    *(_BYTE *)(v44 + 26) |= 1u;
  v45 = *(_QWORD *)(v14 + 40);
  v46 = v14 + 8;
  v47 = v93;
  v48 = *(_QWORD *)(v14 + 8);
  v49 = v95;
  v50 = *(_QWORD *)(v14 + 16);
  if ( v93 < v45 )
    v47 = *(_QWORD *)(v14 + 40);
  v100 = *(_QWORD *)(v14 + 40);
  v51 = v47;
  v94 = v47;
  if ( v47 >= v48 )
    v51 = 0LL;
  v96 = *(_QWORD *)(v14 + 16);
  v52 = v48 - 1;
  if ( !v95 )
  {
    v53 = v51 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_180;
  }
  while ( 2 )
  {
    v54 = v50;
    if ( v52 - v51 + 1 < v49 )
    {
      v55 = -1LL;
      goto LABEL_132;
    }
    v56 = v52 - v49 + 1;
    v57 = v50 + 8 * (v56 >> 6);
    v58 = *(_QWORD *)(v50 + 8 * (v51 >> 6)) | ((1LL << (v51 & 0x3F)) - 1);
    v59 = (unsigned __int64 *)(v50 + 8 * (v51 >> 6));
    if ( v49 > 0x7F )
    {
      if ( (v56 & 0x3F) != 0 )
        v57 += 8LL;
      if ( v58 )
      {
        if ( *++v59 )
          goto LABEL_117;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v61, v58);
        if ( v25 )
          v60 = 64;
        else
          v60 = 63 - v61;
      }
      else
      {
        v60 = 0;
      }
LABEL_122:
      v55 = (((__int64)v59 - v54) >> 3 << 6) - v60;
      if ( v55 <= v56 )
      {
        v63 = &v59[(v49 - v60) >> 6];
        for ( ++v59; v59 != v63; ++v59 )
        {
          if ( *v59 )
            goto LABEL_117;
        }
        v64 = ((_BYTE)v49 - (_BYTE)v60) & 0x3F;
        if ( (((_BYTE)v49 - (_BYTE)v60) & 0x3F) != 0 )
        {
          v25 = !_BitScanForward64((unsigned __int64 *)&v65, *v59);
          if ( v25 )
            LODWORD(v65) = 64;
          if ( (unsigned int)v65 < v64 )
          {
LABEL_117:
            while ( (unsigned __int64)v59 <= v57 )
            {
              if ( !*++v59 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v62, *(v59 - 1));
                if ( v25 )
                  v60 = 64;
                else
                  v60 = 63 - v62;
                goto LABEL_122;
              }
            }
            goto LABEL_136;
          }
        }
        goto LABEL_130;
      }
      goto LABEL_173;
    }
    if ( v49 < 0x40 )
    {
      if ( v49 <= 1 )
      {
        if ( v58 != -1 )
        {
LABEL_177:
          _BitScanForward64(&v79, ~v58);
          v55 = v79 + (((__int64)v59 - v54) >> 3 << 6);
          if ( v55 > v56 )
          {
            v55 = -1LL;
            goto LABEL_131;
          }
          goto LABEL_130;
        }
        while ( (unsigned __int64)++v59 <= v57 )
        {
          v58 = *v59;
          if ( *v59 != -1LL )
            goto LABEL_177;
        }
      }
      else
      {
        v71 = 0LL;
        v72 = (unsigned __int64 *)(v54 + 8 * (v52 >> 6));
        while ( 1 )
        {
          if ( v58 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v59 > v57 )
                goto LABEL_136;
              v58 = *v59;
            }
            while ( *v59 == -1LL );
            v71 = 0LL;
          }
          v25 = !_BitScanForward64((unsigned __int64 *)&v73, v58);
          if ( v25 )
            LODWORD(v73) = 64;
          if ( (unsigned int)(v71 + v73) >= v95 )
            break;
          v74 = v95;
          v75 = ~v58;
          while ( 1 )
          {
            v75 &= v75 >> (v74 >> 1);
            if ( !v75 )
              break;
            v74 -= v74 >> 1;
            if ( v74 <= 1 )
            {
              _BitScanForward64(&v76, v75);
              v77 = (unsigned int)v76;
              goto LABEL_172;
            }
          }
          if ( v59 == v72 )
            goto LABEL_136;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v78, v58);
          v58 = v59[1];
          if ( v25 )
          {
            ++v59;
            v71 = 64LL;
          }
          else
          {
            v71 = (unsigned int)(63 - v78);
            ++v59;
          }
        }
        v77 = -v71;
LABEL_172:
        v55 = (((__int64)v59 - v54) >> 3 << 6) + v77;
        if ( v55 <= v56 )
        {
LABEL_130:
          if ( v55 == -1LL )
            goto LABEL_131;
          break;
        }
      }
LABEL_173:
      v55 = -1LL;
      goto LABEL_131;
    }
    while ( v58 >= 0 )
    {
LABEL_141:
      v25 = !_BitScanReverse64((unsigned __int64 *)&v67, v58);
      if ( v25 )
        v68 = 64;
      else
        v68 = 63 - v67;
      v55 = (((((__int64)v59 - v54) >> 3) + 1) << 6) - v68;
      if ( v55 > v56 )
        goto LABEL_136;
      v69 = v49 - v68;
      if ( v49 == v68 )
        goto LABEL_130;
      v58 = v59[1];
      ++v59;
      if ( v69 >= 0x40 )
      {
        if ( v58 )
          continue;
        v69 -= 64LL;
        if ( !v69 )
          goto LABEL_130;
        v58 = v59[1];
        ++v59;
      }
      v25 = !_BitScanForward64((unsigned __int64 *)&v70, v58);
      if ( v25 )
        LODWORD(v70) = 64;
      if ( (unsigned int)v70 >= v69 )
        goto LABEL_130;
    }
    while ( (unsigned __int64)++v59 <= v57 )
    {
      v58 = *v59;
      if ( (*v59 & 0x8000000000000000uLL) == 0 )
        goto LABEL_141;
    }
LABEL_136:
    v55 = -1LL;
LABEL_131:
    v47 = v94;
    v50 = v96;
LABEL_132:
    if ( v51 )
    {
      v49 = v95;
      v51 = 0LL;
      v66 = v47 + v95;
      if ( v47 + v95 > v48 )
        v66 = v48;
      v52 = v66 - 1;
      continue;
    }
    break;
  }
  v45 = v100;
  v53 = v55;
  v49 = v95;
  v47 = v94;
  v46 = BugCheckParameter2 + 8;
LABEL_180:
  if ( v53 != -1LL )
  {
    RtlSetBitsEx(v46, v53, v49);
    v4 = v95;
    v82 = BugCheckParameter2;
    goto LABEL_198;
  }
  v4 = v95;
  v82 = BugCheckParameter2;
  v80 = MiExpandPagedPool(BugCheckParameter2, v95);
  v53 = v80;
  if ( v80 != -1LL )
  {
    if ( (v95 & 0x1FF) == 0 || v95 != 1 && v80 >= v45 )
    {
LABEL_198:
      if ( v53 != v45 && (v4 != 1 || v47 != v45) )
        goto LABEL_202;
    }
    *(_QWORD *)(v82 + 40) = v53 + v4;
LABEL_202:
    v83 = *(_QWORD *)(v82 + 24);
    *(_QWORD *)(v82 + 48) += v4;
    v84 = (__int64)((v53 << 28) + (v83 << 25)) >> 16;
    if ( v9 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v82);
      KeAbPostRelease(v82);
      v87 = v98->SpecialApcDisable + 1;
      v98->SpecialApcDisable = v87;
      if ( !v87 && ($CD287064E7C9F7953DE243E927CFCB99 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
        KiCheckForKernelApcDelivery(v98);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), v4);
    }
    else
    {
      v85 = qword_14034FC68 - qword_14034FC58;
      if ( qword_14034FC68 - qword_14034FC58 < (unsigned __int64)qword_14034E6C0 )
      {
        if ( qword_140353E28->Header.SignalState )
          KeResetEvent(qword_140353E28);
        if ( v85 <= qword_14034E6B8 && !qword_140353E20->Header.SignalState )
          KeSetEvent(qword_140353E20, 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v82);
      KeAbPostRelease(v82);
      v86 = v98->SpecialApcDisable + 1;
      v98->SpecialApcDisable = v86;
      if ( !v86 && ($CD287064E7C9F7953DE243E927CFCB99 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
        KiCheckForKernelApcDelivery(v98);
    }
    v88 = (__int64 *)(((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiFlushTbAsNeeded((ULONG_PTR)v88);
    if ( v99 )
    {
      MiFillPagedPoolLockedDown(v88, v4, v101);
      return v84;
    }
    else
    {
      v89 = &v88[v4];
      DemandZeroPte = MiMakeDemandZeroPte(4LL);
      v91 = (unsigned __int64)(v88 + 0x12090482600LL);
      do
      {
        *v88 = DemandZeroPte;
        if ( v91 <= 0x7F8 )
          MiWritePteShadow(v88, DemandZeroPte);
        ++v88;
        v91 += 8LL;
      }
      while ( v88 < v89 );
      return v84;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v81 = v98->SpecialApcDisable + 1;
  v98->SpecialApcDisable = v81;
  if ( !v81 && ($CD287064E7C9F7953DE243E927CFCB99 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
    KiCheckForKernelApcDelivery(v98);
  v3 = 1;
  if ( !v9 )
  {
    if ( v99 )
    {
      MiReturnResidentAvailable(v95);
      _InterlockedExchangeAdd64(&qword_14034F8D8, v95);
    }
    else
    {
      MiChargeWsles((__int64)dword_14034FE40, -(__int64)v95, 0);
    }
  }
LABEL_192:
  MiReturnCommit(MiSystemPartition, v4);
  if ( !v3 )
  {
LABEL_193:
    if ( v9 )
    {
      ++dword_14034E680;
      ++dword_14034E6AC;
      ++*(_DWORD *)(v9 + 100);
    }
    else
    {
      ++dword_14034E674;
      ++dword_14034E6A8;
    }
  }
  MiIssuePageExtendRequestNoWait(MiSystemPartition, v4, 0LL);
  MiTrimSegmentCache();
  return 0LL;
}
