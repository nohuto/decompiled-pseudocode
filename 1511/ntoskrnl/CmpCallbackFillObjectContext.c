/*
 * XREFs of CmpCallbackFillObjectContext @ 0x140409770
 * Callers:
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpGetCallbackObjectContext @ 0x1403E7C40 (CmpGetCallbackObjectContext.c)
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
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx

  switch ( a1 )
  {
    case 29:
LABEL_20:
      a2[5] = 0LL;
      break;
    case 28:
LABEL_21:
      v15 = a2[1];
      v16 = 0LL;
      v17 = 0LL;
      if ( v15 && *(_DWORD *)v15 == 1803104306 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v19 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v19, (ULONG_PTR)&CmpContextListLock);
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        v20 = *(_QWORD **)(v15 + 72);
        v21 = (_QWORD *)(v15 + 72);
        if ( v20 != v21 )
        {
          v72 = *a3;
          while ( 1 )
          {
            v73 = v20[4];
            if ( v73 == v72 )
              break;
            if ( v73 >= v72 )
            {
              v20 = (_QWORD *)*v20;
              if ( v20 != v21 )
                continue;
            }
            goto LABEL_28;
          }
          v17 = v20[7];
        }
LABEL_28:
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
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
          && !v23->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v23);
        }
      }
      a2[11] = v17;
      break;
    case 23:
LABEL_7:
      v5 = *a2;
      v6 = 0LL;
      v7 = 0LL;
      if ( *a2 && *(_DWORD *)v5 == 1803104306 )
      {
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        v9 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v9, (ULONG_PTR)&CmpContextListLock);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        v10 = *(_QWORD **)(v5 + 72);
        v11 = (_QWORD *)(v5 + 72);
        if ( v10 != v11 )
        {
          v64 = *a3;
          while ( 1 )
          {
            v65 = v10[4];
            if ( v65 == v64 )
              break;
            if ( v65 >= v64 )
            {
              v10 = (_QWORD *)*v10;
              if ( v10 != v11 )
                continue;
            }
            goto LABEL_14;
          }
          v7 = v10[7];
        }
LABEL_14:
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
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
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
        v29 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v29, (ULONG_PTR)&CmpContextListLock);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        v30 = *(_QWORD **)(v25 + 72);
        v31 = (_QWORD *)(v25 + 72);
        if ( v30 != v31 )
        {
          v62 = *a3;
          while ( 1 )
          {
            v63 = v30[4];
            if ( v63 == v62 )
              break;
            if ( v63 >= v62 )
            {
              v30 = (_QWORD *)*v30;
              if ( v30 != v31 )
                continue;
            }
            goto LABEL_41;
          }
          v27 = v30[7];
        }
LABEL_41:
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
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && !v33->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v33);
        }
      }
      a2[7] = v27;
      break;
    case 7:
      v35 = *a2;
      v36 = 0LL;
      v37 = 0LL;
      if ( *a2 && *(_DWORD *)v35 == 1803104306 )
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        v39 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpContextListLock, v39, (ULONG_PTR)&CmpContextListLock);
        if ( v39 )
          *(_BYTE *)(v39 + 26) |= 1u;
        v40 = *(_QWORD **)(v35 + 72);
        v41 = (_QWORD *)(v35 + 72);
        if ( v40 != v41 )
        {
          v70 = *a3;
          while ( 1 )
          {
            v71 = v40[4];
            if ( v71 == v70 )
              break;
            if ( v71 >= v70 )
            {
              v40 = (_QWORD *)*v40;
              if ( v40 != v41 )
                continue;
            }
            goto LABEL_54;
          }
          v37 = v40[7];
        }
LABEL_54:
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
LABEL_84:
          ExfReleasePushLock(&CmpContextListLock);
        }
LABEL_58:
        KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
        v43 = KeGetCurrentThread();
        v44 = v43->KernelApcDisable + 1;
        v43->KernelApcDisable = v44;
        if ( !v44
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
          && !v43->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v43);
        }
      }
LABEL_59:
      a2[6] = v37;
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
          v55 = *a2;
          v56 = 0LL;
          v37 = 0LL;
          if ( !*a2 || *(_DWORD *)v55 != 1803104306 )
            goto LABEL_59;
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v58 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v58, (ULONG_PTR)&CmpContextListLock);
          if ( v58 )
            *(_BYTE *)(v58 + 26) |= 1u;
          v59 = *(_QWORD **)(v55 + 72);
          v60 = (_QWORD *)(v55 + 72);
          if ( v59 == v60 )
            goto LABEL_80;
          v66 = *a3;
          while ( 1 )
          {
            v67 = v59[4];
            if ( v67 == v66 )
              break;
            if ( v67 >= v66 )
            {
              v59 = (_QWORD *)*v59;
              if ( v59 != v60 )
                continue;
            }
            goto LABEL_80;
          }
          v37 = v59[7];
LABEL_80:
          _m_prefetchw(&CmpContextListLock);
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v56 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 2) != 0 )
            goto LABEL_84;
          v61 = CmpContextListLock;
          if ( v61 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpContextListLock,
                        v56,
                        CmpContextListLock) )
            goto LABEL_84;
          goto LABEL_58;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v45 = *a2;
          v46 = 0LL;
          v47 = 0LL;
          if ( !*a2 || *(_DWORD *)v45 != 1803104306 )
            goto LABEL_72;
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          v49 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&CmpContextListLock, v49, (ULONG_PTR)&CmpContextListLock);
          if ( v49 )
            *(_BYTE *)(v49 + 26) |= 1u;
          v50 = *(_QWORD **)(v45 + 72);
          v51 = (_QWORD *)(v45 + 72);
          if ( v50 == v51 )
            goto LABEL_67;
          v68 = *a3;
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
        v69 = v50[4];
        if ( v69 == v68 )
          break;
        if ( v69 >= v68 )
        {
          v50 = (_QWORD *)*v50;
          if ( v50 != v51 )
            continue;
        }
        goto LABEL_67;
      }
      v47 = v50[7];
LABEL_67:
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
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
        && !v53->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v53);
      }
LABEL_72:
      a2[2] = v47;
      break;
  }
}
