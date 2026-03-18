/*
 * XREFs of CmpCallbackFillObjectContext @ 0x140498B70
 * Callers:
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpGetCallbackObjectContext @ 0x140520E30 (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  __int64 v8; // r15
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rsi
  signed __int64 v19; // rbx
  __int64 v20; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  ULONG_PTR v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rsi
  signed __int64 v31; // rbx
  __int64 v32; // r15
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // r9
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  ULONG_PTR v39; // rtt
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rsi
  signed __int64 v43; // rbx
  __int64 v44; // r15
  struct _KTHREAD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // r9
  _QWORD *v49; // rax
  _QWORD *v50; // rsi
  ULONG_PTR v51; // rtt
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rsi
  signed __int64 v55; // rbx
  __int64 v56; // r15
  struct _KTHREAD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbp
  __int64 v60; // r9
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  ULONG_PTR v63; // rtt
  struct _KTHREAD *v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rsi
  signed __int64 v67; // rbx
  struct _KTHREAD *v68; // rax
  __int64 v69; // rbp
  __int64 v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rsi
  ULONG_PTR v73; // rtt
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx

  switch ( a1 )
  {
    case 28:
LABEL_21:
      v18 = a2[1];
      v19 = 0LL;
      v20 = 0LL;
      if ( v18 && *(_DWORD *)v18 == 1803104306 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v23 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v23, (ULONG_PTR)&CmpContextListLock, v24);
        if ( v23 )
          *(_BYTE *)(v23 + 26) |= 1u;
        v25 = *(_QWORD **)(v18 + 72);
        v26 = (_QWORD *)(v18 + 72);
        if ( v25 != v26 )
        {
          v22 = *a3;
          while ( 1 )
          {
            v76 = v25[4];
            if ( v76 == v22 )
              break;
            if ( v76 >= v22 )
            {
              v25 = (_QWORD *)*v25;
              if ( v25 != v26 )
                continue;
            }
            goto LABEL_28;
          }
          v20 = v25[7];
        }
LABEL_28:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v19 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v27 = CmpContextListLock,
              v27 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v19,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock, v22);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v28 = KeGetCurrentThread();
        v29 = v28->KernelApcDisable + 1;
        v28->KernelApcDisable = v29;
        if ( !v29
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
          && !v28->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      a2[11] = v20;
      break;
    case 29:
LABEL_20:
      a2[5] = 0LL;
      break;
    case 23:
LABEL_7:
      v6 = *a2;
      v7 = 0LL;
      v8 = 0LL;
      if ( *a2 && *(_DWORD *)v6 == 1803104306 )
      {
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
        v11 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v11, (ULONG_PTR)&CmpContextListLock, v12);
        if ( v11 )
          *(_BYTE *)(v11 + 26) |= 1u;
        v13 = *(_QWORD **)(v6 + 72);
        v14 = (_QWORD *)(v6 + 72);
        if ( v13 != v14 )
        {
          v10 = *a3;
          while ( 1 )
          {
            v74 = v13[4];
            if ( v74 == v10 )
              break;
            if ( v74 >= v10 )
            {
              v13 = (_QWORD *)*v13;
              if ( v13 != v14 )
                continue;
            }
            goto LABEL_14;
          }
          v8 = v13[7];
        }
LABEL_14:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v7 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v15 = CmpContextListLock,
              v15 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v7,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock, v10);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v16 = KeGetCurrentThread();
        v17 = v16->KernelApcDisable + 1;
        v16->KernelApcDisable = v17;
        if ( !v17
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
          && !v16->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      a2[5] = v8;
      break;
    case 8:
      v30 = *a2;
      v31 = 0LL;
      v32 = 0LL;
      if ( *a2 && *(_DWORD *)v30 == 1803104306 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        v35 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v35, (ULONG_PTR)&CmpContextListLock, v36);
        if ( v35 )
          *(_BYTE *)(v35 + 26) |= 1u;
        v37 = *(_QWORD **)(v30 + 72);
        v38 = (_QWORD *)(v30 + 72);
        if ( v37 != v38 )
        {
          v34 = *a3;
          while ( 1 )
          {
            v78 = v37[4];
            if ( v78 == v34 )
              break;
            if ( v78 >= v34 )
            {
              v37 = (_QWORD *)*v37;
              if ( v37 != v38 )
                continue;
            }
            goto LABEL_41;
          }
          v32 = v37[7];
        }
LABEL_41:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v31 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v39 = CmpContextListLock,
              v39 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v31,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock, v34);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v40 = KeGetCurrentThread();
        v41 = v40->KernelApcDisable + 1;
        v40->KernelApcDisable = v41;
        if ( !v41
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
          && !v40->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      a2[7] = v32;
      break;
    case 7:
      v42 = *a2;
      v43 = 0LL;
      v44 = 0LL;
      if ( *a2 && *(_DWORD *)v42 == 1803104306 )
      {
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        v47 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v47, (ULONG_PTR)&CmpContextListLock, v48);
        if ( v47 )
          *(_BYTE *)(v47 + 26) |= 1u;
        v49 = *(_QWORD **)(v42 + 72);
        v50 = (_QWORD *)(v42 + 72);
        if ( v49 != v50 )
        {
          v46 = *a3;
          while ( 1 )
          {
            v75 = v49[4];
            if ( v75 == v46 )
              break;
            if ( v75 >= v46 )
            {
              v49 = (_QWORD *)*v49;
              if ( v49 != v50 )
                continue;
            }
            goto LABEL_54;
          }
          v44 = v49[7];
        }
LABEL_54:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v43 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v51 = CmpContextListLock,
              v51 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v43,
                       CmpContextListLock)) )
        {
LABEL_84:
          ExfReleasePushLock(&CmpContextListLock, v46);
        }
LABEL_58:
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v52 = KeGetCurrentThread();
        v53 = v52->KernelApcDisable + 1;
        v52->KernelApcDisable = v53;
        if ( !v53
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
          && !v52->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
LABEL_59:
      a2[6] = v44;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
        case 6:
          a2[6] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
        case 36:
        case 47:
          a2[5] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 5:
          v66 = *a2;
          v67 = 0LL;
          v44 = 0LL;
          if ( !*a2 || *(_DWORD *)v66 != 1803104306 )
            goto LABEL_59;
          v68 = KeGetCurrentThread();
          --v68->KernelApcDisable;
          v69 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v69, (ULONG_PTR)&CmpContextListLock, v70);
          if ( v69 )
            *(_BYTE *)(v69 + 26) |= 1u;
          v71 = *(_QWORD **)(v66 + 72);
          v72 = (_QWORD *)(v66 + 72);
          if ( v71 == v72 )
            goto LABEL_80;
          v46 = *a3;
          while ( 1 )
          {
            v77 = v71[4];
            if ( v77 == v46 )
              break;
            if ( v77 >= v46 )
            {
              v71 = (_QWORD *)*v71;
              if ( v71 != v72 )
                continue;
            }
            goto LABEL_80;
          }
          v44 = v71[7];
LABEL_80:
          _m_prefetchw(&CmpContextListLock);
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v67 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 2) != 0 )
            goto LABEL_84;
          v73 = CmpContextListLock;
          if ( v73 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpContextListLock,
                        v67,
                        CmpContextListLock) )
            goto LABEL_84;
          goto LABEL_58;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v54 = *a2;
          v55 = 0LL;
          v56 = 0LL;
          if ( !*a2 || *(_DWORD *)v54 != 1803104306 )
            goto LABEL_72;
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v59 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v59, (ULONG_PTR)&CmpContextListLock, v60);
          if ( v59 )
            *(_BYTE *)(v59 + 26) |= 1u;
          v61 = *(_QWORD **)(v54 + 72);
          v62 = (_QWORD *)(v54 + 72);
          if ( v61 == v62 )
            goto LABEL_67;
          v58 = *a3;
          break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_7;
        case 25:
        case 27:
          goto LABEL_20;
        case 26:
          goto LABEL_21;
        case 32:
          a2[9] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( 1 )
      {
        v79 = v61[4];
        if ( v79 == v58 )
          break;
        if ( v79 >= v58 )
        {
          v61 = (_QWORD *)*v61;
          if ( v61 != v62 )
            continue;
        }
        goto LABEL_67;
      }
      v56 = v61[7];
LABEL_67:
      _m_prefetchw(&CmpContextListLock);
      if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v55 = CmpContextListLock - 16;
      if ( (CmpContextListLock & 2) != 0
        || (v63 = CmpContextListLock,
            v63 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpContextListLock,
                     v55,
                     CmpContextListLock)) )
      {
        ExfReleasePushLock(&CmpContextListLock, v58);
      }
      KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
      v64 = KeGetCurrentThread();
      v65 = v64->KernelApcDisable + 1;
      v64->KernelApcDisable = v65;
      if ( !v65
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
        && !v64->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
LABEL_72:
      a2[2] = v56;
      break;
  }
}
