/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1404522A0
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpGetCallbackObjectContext @ 0x140420F90 (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rsi
  signed __int64 v6; // rbx
  __int64 v7; // r15
  struct _KTHREAD *v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rsi
  signed __int64 v16; // rbx
  __int64 v17; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rbp
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  ULONG_PTR v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rsi
  signed __int64 v26; // rbx
  __int64 v27; // r15
  struct _KTHREAD *v28; // rax
  __int64 v29; // rbp
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  ULONG_PTR v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rsi
  signed __int64 v36; // rbx
  __int64 v37; // r15
  struct _KTHREAD *v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // rax
  _QWORD *v41; // rsi
  ULONG_PTR v42; // rtt
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  __int64 v45; // rsi
  signed __int64 v46; // rbx
  __int64 v47; // r15
  struct _KTHREAD *v48; // rax
  __int64 v49; // rbp
  _QWORD *v50; // rax
  _QWORD *v51; // rsi
  ULONG_PTR v52; // rtt
  struct _KTHREAD *v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rsi
  signed __int64 v56; // rbx
  struct _KTHREAD *v57; // rax
  __int64 v58; // rbp
  _QWORD *v59; // rax
  _QWORD *v60; // rsi
  ULONG_PTR v61; // rtt
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rsi
  signed __int64 v66; // rbx
  struct _KTHREAD *v67; // rax
  __int64 v68; // rbp
  _QWORD *v69; // rax
  _QWORD *v70; // rsi
  ULONG_PTR v71; // rtt
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx

  switch ( a1 )
  {
    case 29:
LABEL_19:
      a2[5] = 0LL;
      break;
    case 28:
LABEL_20:
      v15 = a2[1];
      v16 = 0LL;
      v17 = 0LL;
      if ( v15 && *(_DWORD *)v15 == 1803104306 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v19 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v19, (ULONG_PTR)&CmpContextListLock);
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        v20 = *(_QWORD **)(v15 + 72);
        v21 = (_QWORD *)(v15 + 72);
        if ( v20 != v21 )
        {
          v74 = *a3;
          while ( 1 )
          {
            v75 = v20[4];
            if ( v75 == v74 )
              break;
            if ( v75 >= v74 )
            {
              v20 = (_QWORD *)*v20;
              if ( v20 != v21 )
                continue;
            }
            goto LABEL_27;
          }
          v17 = v20[7];
        }
LABEL_27:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v16 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v22 = CmpContextListLock,
              v22 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v16,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v23 = KeGetCurrentThread();
        v24 = v23->KernelApcDisable + 1;
        v23->KernelApcDisable = v24;
        if ( !v24
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v23->ApcState.ApcListHead[0].Flink != &v23->152
          && !v23->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v23);
        }
      }
      a2[11] = v17;
      break;
    case 23:
LABEL_6:
      v5 = *a2;
      v6 = 0LL;
      v7 = 0LL;
      if ( *a2 && *(_DWORD *)v5 == 1803104306 )
      {
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        v9 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v9, (ULONG_PTR)&CmpContextListLock);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        v10 = *(_QWORD **)(v5 + 72);
        v11 = (_QWORD *)(v5 + 72);
        if ( v10 != v11 )
        {
          v72 = *a3;
          while ( 1 )
          {
            v73 = v10[4];
            if ( v73 == v72 )
              break;
            if ( v73 >= v72 )
            {
              v10 = (_QWORD *)*v10;
              if ( v10 != v11 )
                continue;
            }
            goto LABEL_13;
          }
          v7 = v10[7];
        }
LABEL_13:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v6 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v12 = CmpContextListLock,
              v12 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v6,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v13 = KeGetCurrentThread();
        v14 = v13->KernelApcDisable + 1;
        v13->KernelApcDisable = v14;
        if ( !v14
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v13->ApcState.ApcListHead[0].Flink != &v13->152
          && !v13->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v13);
        }
      }
      a2[5] = v7;
      break;
    case 8:
      v25 = *a2;
      v26 = 0LL;
      v27 = 0LL;
      if ( *a2 && *(_DWORD *)v25 == 1803104306 )
      {
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        v29 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v29, (ULONG_PTR)&CmpContextListLock);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        v30 = *(_QWORD **)(v25 + 72);
        v31 = (_QWORD *)(v25 + 72);
        if ( v30 != v31 )
        {
          v80 = *a3;
          while ( 1 )
          {
            v81 = v30[4];
            if ( v81 == v80 )
              break;
            if ( v81 >= v80 )
            {
              v30 = (_QWORD *)*v30;
              if ( v30 != v31 )
                continue;
            }
            goto LABEL_40;
          }
          v27 = v30[7];
        }
LABEL_40:
        _m_prefetchw(&CmpContextListLock);
        if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v26 = CmpContextListLock - 16;
        if ( (CmpContextListLock & 2) != 0
          || (v32 = CmpContextListLock,
              v32 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v26,
                       CmpContextListLock)) )
        {
          ExfReleasePushLock(&CmpContextListLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v33 = KeGetCurrentThread();
        v34 = v33->KernelApcDisable + 1;
        v33->KernelApcDisable = v34;
        if ( !v34
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && !v33->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v33);
        }
      }
      a2[7] = v27;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
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
          v55 = *a2;
          v56 = 0LL;
          v37 = 0LL;
          if ( !*a2 || *(_DWORD *)v55 != 1803104306 )
            goto LABEL_58;
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v58 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v58, (ULONG_PTR)&CmpContextListLock);
          if ( v58 )
            *(_BYTE *)(v58 + 26) |= 1u;
          v59 = *(_QWORD **)(v55 + 72);
          v60 = (_QWORD *)(v55 + 72);
          if ( v59 == v60 )
            goto LABEL_79;
          v82 = *a3;
          while ( 1 )
          {
            v83 = v59[4];
            if ( v83 == v82 )
              break;
            if ( v83 >= v82 )
            {
              v59 = (_QWORD *)*v59;
              if ( v59 != v60 )
                continue;
            }
            goto LABEL_79;
          }
          v37 = v59[7];
LABEL_79:
          _m_prefetchw(&CmpContextListLock);
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v56 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 2) == 0 )
          {
            v61 = CmpContextListLock;
            if ( v61 == _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpContextListLock,
                          v56,
                          CmpContextListLock) )
              goto LABEL_83;
          }
          goto LABEL_96;
        case 6:
          v65 = *a2;
          v66 = 0LL;
          v37 = 0LL;
          if ( !*a2 || *(_DWORD *)v65 != 1803104306 )
            goto LABEL_58;
          v67 = KeGetCurrentThread();
          --v67->KernelApcDisable;
          v68 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v68, (ULONG_PTR)&CmpContextListLock);
          if ( v68 )
            *(_BYTE *)(v68 + 26) |= 1u;
          v69 = *(_QWORD **)(v65 + 72);
          v70 = (_QWORD *)(v65 + 72);
          if ( v69 == v70 )
            goto LABEL_92;
          v84 = *a3;
          while ( 1 )
          {
            v85 = v69[4];
            if ( v85 == v84 )
              break;
            if ( v85 >= v84 )
            {
              v69 = (_QWORD *)*v69;
              if ( v69 != v70 )
                continue;
            }
            goto LABEL_92;
          }
          v37 = v69[7];
LABEL_92:
          _m_prefetchw(&CmpContextListLock);
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v66 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 2) != 0
            || (v71 = CmpContextListLock,
                v71 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v66,
                         CmpContextListLock)) )
          {
LABEL_96:
            ExfReleasePushLock(&CmpContextListLock);
          }
LABEL_83:
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v62, v63, v64);
          goto LABEL_58;
        case 7:
          v35 = *a2;
          v36 = 0LL;
          v37 = 0LL;
          if ( !*a2 || *(_DWORD *)v35 != 1803104306 )
            goto LABEL_58;
          v38 = KeGetCurrentThread();
          --v38->KernelApcDisable;
          v39 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v39, (ULONG_PTR)&CmpContextListLock);
          if ( v39 )
            *(_BYTE *)(v39 + 26) |= 1u;
          v40 = *(_QWORD **)(v35 + 72);
          v41 = (_QWORD *)(v35 + 72);
          if ( v40 == v41 )
            goto LABEL_53;
          v76 = *a3;
          while ( 1 )
          {
            v77 = v40[4];
            if ( v77 == v76 )
              break;
            if ( v77 >= v76 )
            {
              v40 = (_QWORD *)*v40;
              if ( v40 != v41 )
                continue;
            }
            goto LABEL_53;
          }
          v37 = v40[7];
LABEL_53:
          _m_prefetchw(&CmpContextListLock);
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v36 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 2) != 0
            || (v42 = CmpContextListLock,
                v42 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v36,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          v43 = KeGetCurrentThread();
          v44 = v43->KernelApcDisable + 1;
          v43->KernelApcDisable = v44;
          if ( !v44
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v43->ApcState.ApcListHead[0].Flink != &v43->152
            && !v43->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v43);
          }
LABEL_58:
          a2[6] = v37;
          return;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v45 = *a2;
          v46 = 0LL;
          v47 = 0LL;
          if ( !*a2 || *(_DWORD *)v45 != 1803104306 )
            goto LABEL_71;
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          v49 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v49, (ULONG_PTR)&CmpContextListLock);
          if ( v49 )
            *(_BYTE *)(v49 + 26) |= 1u;
          v50 = *(_QWORD **)(v45 + 72);
          v51 = (_QWORD *)(v45 + 72);
          if ( v50 == v51 )
            goto LABEL_66;
          v78 = *a3;
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
          goto LABEL_6;
        case 25:
        case 27:
          goto LABEL_19;
        case 26:
          goto LABEL_20;
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
        v79 = v50[4];
        if ( v79 == v78 )
          break;
        if ( v79 >= v78 )
        {
          v50 = (_QWORD *)*v50;
          if ( v50 != v51 )
            continue;
        }
        goto LABEL_66;
      }
      v47 = v50[7];
LABEL_66:
      _m_prefetchw(&CmpContextListLock);
      if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v46 = CmpContextListLock - 16;
      if ( (CmpContextListLock & 2) != 0
        || (v52 = CmpContextListLock,
            v52 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpContextListLock,
                     v46,
                     CmpContextListLock)) )
      {
        ExfReleasePushLock(&CmpContextListLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
      v53 = KeGetCurrentThread();
      v54 = v53->KernelApcDisable + 1;
      v53->KernelApcDisable = v54;
      if ( !v54
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v53->ApcState.ApcListHead[0].Flink != &v53->152
        && !v53->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v53);
      }
LABEL_71:
      a2[2] = v47;
      break;
  }
}
