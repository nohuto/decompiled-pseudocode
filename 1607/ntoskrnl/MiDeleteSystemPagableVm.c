/*
 * XREFs of MiDeleteSystemPagableVm @ 0x14004A820
 * Callers:
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiDeleteSessionPoolRange @ 0x1401EC974 (MiDeleteSessionPoolRange.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A2D0 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiInitializeTbFlushStamps @ 0x14004B64C (MiInitializeTbFlushStamps.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiVolunteerForTrimFirst @ 0x1400E3E30 (MiVolunteerForTrimFirst.c)
 *     MiImageProtoChargedCommit @ 0x14012DEEC (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14012E64C (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiDriverPageIsDangling @ 0x1401E5D18 (MiDriverPageIsDangling.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, char a5, _QWORD *a6)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  ULONG_PTR v8; // r13
  unsigned __int64 v9; // r9
  int v11; // ebx
  char v12; // r8
  __int64 v13; // rdx
  int v14; // r12d
  KIRQL v15; // al
  unsigned int v16; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  ULONG_PTR v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r12d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // esi
  int v28; // r8d
  ULONG_PTR v29; // r8
  ULONG_PTR *v30; // r13
  ULONG_PTR Wsle; // r12
  ULONG_PTR v32; // rbx
  __int64 v33; // rbx
  ULONG_PTR v34; // r9
  char v35; // cl
  ULONG_PTR *v36; // rbx
  ULONG_PTR v37; // rdx
  unsigned __int64 v38; // rax
  ULONG_PTR *v39; // r8
  ULONG_PTR v40; // r12
  __int64 v41; // r10
  __int64 v42; // r11
  unsigned __int64 v43; // rdx
  __int64 v44; // r10
  __int64 v45; // r11
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __int64 v49; // r15
  ULONG_PTR v50; // r8
  __int64 v51; // r13
  ULONG_PTR v52; // rdx
  __int64 v53; // r9
  int v54; // eax
  ULONG_PTR v55; // r9
  _QWORD *v56; // rdx
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r10
  __int64 v67; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  ULONG_PTR v72; // r10
  __int64 v73; // rcx
  __int64 v74; // r10
  __int64 v75; // rdx
  __int64 v76; // rcx
  _KTHREAD *NextThread; // rax
  bool v78; // zf
  KIRQL v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+38h] [rbp-C8h]
  BOOL v82; // [rsp+44h] [rbp-BCh]
  BOOL v83; // [rsp+48h] [rbp-B8h]
  _QWORD v84[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v87; // [rsp+70h] [rbp-90h]
  ULONG_PTR v88; // [rsp+78h] [rbp-88h]
  _QWORD v89[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h]
  __int64 v91; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h]
  _QWORD v95[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v96; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v97; // [rsp+D4h] [rbp-2Ch]
  __int64 v98; // [rsp+D8h] [rbp-28h]
  __int64 v99; // [rsp+E0h] [rbp-20h]
  __int64 v100; // [rsp+E8h] [rbp-18h]

  v93 = a1;
  v6 = a1;
  v81 = a4;
  BugCheckParameter2 = a3;
  v7 = a4;
  v94 = a2;
  v83 = 0;
  v8 = a3;
  if ( a2 )
    v83 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 0LL;
  v85 = 0LL;
  v82 = 0;
  v11 = 0;
  v12 = *(_BYTE *)(a1 + 184) & 7;
  v90 = 0LL;
  v13 = (__int64)(a3 << 25) >> 16;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v85 = v9;
    if ( (a5 & 2) != 0 )
      v82 = dword_1403271C8 != 0;
    v11 = 2;
  }
  v98 = 20LL;
  v14 = a5 & 8;
  v96 = v11;
  v97 = 0;
  v99 = 0LL;
  v100 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v89[1] = v13;
    v89[2] = (unsigned int)v7;
    if ( v12 == 4 )
    {
      v89[0] = 6LL;
    }
    else if ( v12 == 3 )
    {
      v89[0] = 4LL;
    }
    else
    {
      v89[0] = (16 * (v9 & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v95[1] = 24LL;
    v95[0] = v89;
    EtwTraceKernelEvent((int)v95, 1, 0x20000001u, 633, 289413890);
  }
  v15 = MiLockWorkingSetExclusive(v6);
  v80 = v15;
  if ( v7 )
  {
    v84[1] = v11;
    v16 = 1;
    v92 = 0xF000000000000LL;
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(v8);
      v84[0] = v17;
      if ( !v17 )
        goto LABEL_25;
      if ( (v17 & 1) != 0 )
      {
        v19 = (__int64)((v8 << 25) - v90) >> 16;
        v20 = MI_GET_PFN_FROM_PTE(v84);
        v22 = v20;
        if ( v14 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v20) )
          {
            MiLockPageAtDpcInline(v23);
            *(_BYTE *)(v22 + 35) &= ~0x20u;
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++a6[1];
          }
          v16 = 1;
        }
        else
        {
          v29 = *(_QWORD *)v20;
          if ( !*(_QWORD *)v20 || (*(_BYTE *)(v20 + 35) & 8) != 0 )
          {
            ++*a6;
            if ( v21 == 2 )
              _InterlockedDecrement64((volatile signed __int64 *)(v85 + 40));
          }
          else
          {
            if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
              v30 = &::BugCheckParameter2;
            else
              v30 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
            v87 = v30;
            Wsle = MiLocateWsle(v19, v6, v29);
            v32 = Wsle * *((unsigned int *)v30 + 8);
            v88 = Wsle;
            v33 = *(_QWORD *)(v30[10] + v32);
            v91 = v33;
            if ( v82 )
              MI_WSLE_LOG_ACCESS(v6, &v91, (_BYTE *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
            if ( (v33 & 8) != 0
              && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
            {
              --*(_QWORD *)(v6 + 136);
              if ( v19 < v34 || v19 > 0xFFFFF6FFFFFFFFFFuLL )
                --*(_QWORD *)(v6 + 120);
            }
            MiRemoveWsle(Wsle, v6);
            v35 = *(_BYTE *)(v6 + 184) & 7;
            if ( v35 == 2 )
              v36 = &::BugCheckParameter2;
            else
              v36 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
            if ( Wsle >= v36[1] )
            {
              v37 = v36[10] + Wsle * *((unsigned int *)v36 + 8);
              v38 = *(_QWORD *)v37;
              if ( v35 == 2 )
                v39 = &::BugCheckParameter2;
              else
                v39 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
              if ( *((_DWORD *)v39 + 8) == 16 )
              {
                v40 = v39[10];
                if ( (__int64)(v37 - v40) >> 4 >= v39[1] )
                {
                  v41 = *(unsigned int *)(v37 + 8);
                  v42 = *(unsigned int *)(v37 + 12);
                  v43 = *(_QWORD *)v37;
                  v44 = (v38 >> 16) & 0xF00000000LL | v41;
                  v45 = (v38 >> 20) & 0xF00000000LL | v42;
                  v46 = 2 * ((unsigned int)(v38 >> 9) & 7);
                  if ( (v38 & 0x800000000000LL) != 0 )
                    v47 = v43 | 0xFFFF000000000000uLL;
                  else
                    v47 = v38 & 0xFFFFFFFFFFFFLL;
                  if ( v47 < 0xFFFFF68000000000uLL
                    || ((v38 & 0x800000000000LL) == 0
                      ? (v48 = v38 & 0xFFFFFFFFFFFFLL)
                      : (v48 = v38 | 0xFFFF000000000000uLL),
                        v48 > 0xFFFFF6FFFFFFFFFFuLL) )
                  {
                    v46 = (unsigned int)(v46 + 1);
                  }
                  v49 = *(_QWORD *)(v6 + 16);
                  v50 = v40 + 16 * v44;
                  v51 = (unsigned int)v46;
                  v52 = v40 + 16 * v45;
                  v53 = 2 * (v46 + 10);
                  if ( v45 == 0xFFFFFFFFFLL )
                  {
                    *(_QWORD *)(v49 + 8 * v53) = v44;
                  }
                  else
                  {
                    *(_DWORD *)(v52 + 8) = v44;
                    *(_QWORD *)v52 ^= v92 & (*(_QWORD *)v52 ^ (v44 << 16));
                  }
                  if ( v44 == 0xFFFFFFFFFLL )
                  {
                    *(_QWORD *)(v49 + 8 * v53 + 8) = v45;
                  }
                  else
                  {
                    *(_DWORD *)(v50 + 12) = v45;
                    *(_QWORD *)v50 ^= (*(_QWORD *)v50 ^ (v45 << 20)) & 0xF0000000000000LL;
                  }
                  --*(_QWORD *)(v49 + 8 * v51 + 32);
                  v6 = v93;
                  v30 = v87;
                }
                Wsle = v88;
              }
              v54 = (v38 >> 9) & 7;
              if ( v54 )
              {
                --*(_QWORD *)(v6 + 8LL * (unsigned int)(v54 - 1) + 40);
                if ( v54 == 7 )
                  MiVolunteerForTrimFirst(v6, -1LL);
              }
            }
            v55 = *v36;
            if ( *v36 != 0xFFFFFFFFFLL )
            {
              if ( v55 < v36[1] || v55 > v36[3] )
                KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v36, v55, v36[3]);
              v56 = (_QWORD *)(v36[10] + v55 * *((unsigned int *)v36 + 8));
              *v56 ^= (*(_DWORD *)v56 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
            }
            *(_QWORD *)(v36[10] + Wsle * *((unsigned int *)v36 + 8)) = (v55 << 28) | 0xFFFFFFE;
            *v36 = Wsle;
            --*(_QWORD *)(v6 + 128);
            if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              --*(_QWORD *)(v6 + 112);
              v57 = 1;
            }
            else
            {
              v57 = 0;
            }
            if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
            {
              --qword_140327D48;
              if ( v57 == 1 )
                --qword_140327D50;
            }
            if ( Wsle < v30[1] )
            {
              v58 = MI_GET_PFN_FROM_PTE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              MiRemoveLockedPageFromWorkingSet(v6, v19, Wsle, v58);
              _InterlockedDecrement64((volatile signed __int64 *)(v85 + 40));
              ++*a6;
            }
            v8 = BugCheckParameter2;
          }
          MiDeleteValidSystemPage(v8);
          if ( (a5 & 1) != 0 )
          {
            v16 = 1;
            MiInsertTbFlushEntry(&v96, v19, 1LL);
          }
          else
          {
            v84[0] = 0LL;
            MiInitializeTbFlushStamps(v84, v59, v60, v61);
            *(_QWORD *)v8 = v84[0];
            if ( (unsigned int)MiPteInShadowRange(v8, v62) )
              MiWritePteShadow(v64, v66);
            v16 = 1;
            if ( !MiGetPteTimeStamp(v66, v63, v65) )
              MiInsertTbFlushEntry(&v96, v19, 1LL);
          }
        }
        v7 = v81;
        goto LABEL_25;
      }
      if ( (v17 & 0x400) != 0 )
      {
        if ( !v14 )
        {
          if ( (v17 & 2) != 0 )
            goto LABEL_103;
          if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v17) )
          {
            ++a6[3];
            PrototypePteDirect = MiGetPrototypePteDirect(v67);
            if ( (unsigned int)MiDecrementCombinedPte(PrototypePteDirect) == 3 )
              ++a6[1];
            goto LABEL_104;
          }
          if ( v83 || (v69 = MiGetPrototypePteDirect(v67), (unsigned int)MiImageProtoChargedCommit(v94, v69)) )
LABEL_103:
            ++a6[3];
LABEL_104:
          *(_QWORD *)v8 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v8, v18) )
            MiWritePteShadow(v70, 0LL);
        }
LABEL_25:
        --v7;
        v8 += 8LL;
        v81 = v7;
        BugCheckParameter2 = v8;
        if ( !v7 )
        {
          v15 = v80;
          break;
        }
        if ( (v8 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v6) )
        {
LABEL_138:
          MiRelockWorkingSetExclusive(v6, v80);
          v14 = a5 & 8;
          v16 = 1;
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
          DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
          DpcTimeCount = CurrentPrcb->DpcTimeCount;
          if ( (DpcRequestSummary & 1) != 0 )
          {
            v28 = 1;
            if ( DpcTimeCount > 7 )
            {
              if ( CurrentPrcb->QuantumEnd )
                goto LABEL_135;
              goto LABEL_130;
            }
          }
          else
          {
            v28 = 0;
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v16 = 2;
              goto LABEL_135;
            }
            if ( CurrentPrcb->QuantumEnd )
            {
              v16 = 3;
              goto LABEL_135;
            }
            NextThread = CurrentPrcb->NextThread;
            if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
            {
              v16 = 4;
              goto LABEL_135;
            }
          }
          if ( DpcWatchdogCount <= 7 )
          {
            v14 = a5 & 8;
            v7 = v81;
          }
          else
          {
            if ( !v28 )
              goto LABEL_134;
LABEL_130:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v16 = 5;
            }
            else
            {
              if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
              {
LABEL_134:
                _disable();
                CurrentPrcb->DpcWatchdogCount = 0;
                CurrentPrcb->DpcTimeCount = 0;
                KiResetGlobalDpcWatchdogProfiler();
                _enable();
                v16 = 0;
                goto LABEL_135;
              }
              v16 = 6;
            }
LABEL_135:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
              EtwTraceShouldYieldProcessor(v16, DpcWatchdogCount, DpcTimeCount);
            v14 = a5 & 8;
            v78 = v16 == 0;
            v7 = v81;
            v16 = 1;
            if ( !v78 )
              goto LABEL_138;
          }
        }
      }
      else
      {
        if ( (v17 & 0x800) == 0 )
        {
          if ( v14 )
            goto LABEL_25;
          MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v17, 1LL);
          *(_QWORD *)v8 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v8, v75) )
          {
            MiWritePteShadow(v76, 0LL);
            ++a6[3];
            goto LABEL_25;
          }
          goto LABEL_117;
        }
        v71 = MiLockTransitionLeafPage(v8);
        v72 = v71;
        if ( v71 )
        {
          if ( v14 )
          {
            if ( (unsigned int)MiIsPfnSystemCharged(v71) )
            {
              *(_BYTE *)(v73 + 35) &= ~0x20u;
              ++a6[1];
            }
            _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_25;
          }
          if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v71) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v72 + 35) &= ~0x20u;
          }
          if ( (unsigned int)MiDeleteTransitionPte(v8, v72) == 3 )
            ++a6[1];
LABEL_117:
          ++a6[3];
          goto LABEL_25;
        }
      }
    }
  }
  MiUnlockWorkingSetExclusive(v6, v15);
  return MiFlushTbList(&v96);
}
