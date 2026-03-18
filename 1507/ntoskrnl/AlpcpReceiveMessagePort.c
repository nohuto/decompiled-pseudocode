/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14047F3A0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14053250C (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogReceiveMessage @ 0x1406A0280 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogUnwait @ 0x1406A0338 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406A0390 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, LONG a5)
{
  __int64 v6; // rsi
  volatile signed __int64 *v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r9
  int i; // r12d
  int v11; // eax
  volatile signed __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdi
  ULONG_PTR v16; // rdi
  ULONG_PTR v17; // rax
  __int64 v18; // r9
  signed __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rbp
  int v23; // eax
  __int64 result; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdi
  struct _LIST_ENTRY ***v30; // rdx
  struct _LIST_ENTRY **p_Blink; // rcx
  __int64 v32; // r8
  unsigned int v33; // ebp
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rbx
  signed __int64 v37; // rax
  unsigned int v38; // edi
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 BugCheckParameter4; // rax
  bool v43; // zf
  __int64 v44; // rdx
  volatile signed __int32 *v45; // r14
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rbp
  signed __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // r9
  int v53; // ebp
  __int64 v54; // rax
  __int64 v55; // rbp
  _QWORD *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  int v60; // ebp
  char v61; // cl
  int v62; // eax
  signed __int64 v63; // rcx
  ULONG_PTR v64; // rdi
  __int64 v65; // rax
  bool v66; // zf
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rbx
  signed __int64 v72; // rax
  unsigned __int64 *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // r9
  __int64 v76; // rdi
  char *v77; // rax
  __int64 v78; // rdx
  char **QuadPart; // rcx
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // r8
  char v84; // cl
  int v85; // eax
  signed __int64 v86; // rcx
  struct _KTHREAD *v87; // rcx
  __int16 v88; // ax
  unsigned int v89; // eax
  __int64 v90; // r9
  struct _KTHREAD *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r9
  __int64 v94; // rbx
  signed __int64 v95; // rax
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+8h]

  v6 = *a1;
  CurrentThread = KeGetCurrentThread();
  v7 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    v8 = KeAbPreAcquire(v6 + 352, 0LL, 0LL, (__int64)a4);
    if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 352), v8, v6 + 352, v9);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v6 + 416);
        if ( (v11 & 0x40) != 0 )
        {
          v38 = -1073740032;
          goto LABEL_79;
        }
        if ( (v11 & 0x10) != 0 )
        {
          v38 = -1073741759;
          goto LABEL_79;
        }
        v12 = (volatile signed __int64 *)(v6 + 136);
        v13 = KeAbPreAcquire(v6 + 136, 0LL, 0LL, v9);
        v15 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v13, v6 + 136, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        v16 = *(_QWORD *)(v6 + 160);
        if ( v16 == v6 + 160 || !v16 )
        {
          v16 = *(_QWORD *)(v6 + 144);
          if ( v16 == v6 + 144 || !v16 )
            break;
        }
        v17 = KeAbPreAcquire(v16 - 16, 0LL, 1LL, v14);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 - 16), 0LL) )
        {
          if ( v17 )
            *(_BYTE *)(v17 + 26) |= 1u;
          *(_BYTE *)(v16 - 32) |= 1u;
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), 0x10000uLL) + 0x10000;
          if ( v19 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v16, 0x27uLL, v19);
LABEL_20:
          if ( (*(_DWORD *)(v16 + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(v16 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(v16 + 16) = 0LL;
          **(_QWORD **)(v16 + 8) = *(_QWORD *)v16;
          *(_QWORD *)(*(_QWORD *)v16 + 8LL) = *(_QWORD *)(v16 + 8);
          if ( (*(_DWORD *)(v16 + 40) & 0x200) == 0 )
            goto LABEL_23;
          v25 = 0;
          if ( *(_QWORD *)(v16 + 136) )
            v25 = 0x80000000;
          if ( *(_QWORD *)(v16 + 144) )
            v25 |= 0x40000000u;
          if ( *(_QWORD *)(v16 + 152) )
            v25 |= 0x10000000u;
          if ( (v25 & a5) != 0 )
          {
LABEL_23:
            *(_WORD *)(v16 + 228) |= 0x2000u;
            v20 = KeAbPreAcquire(v6 + 176, 0LL, 0LL, v18);
            v22 = v20;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 176), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 176), v20, v6 + 176, v21);
            if ( v22 )
              *(_BYTE *)(v22 + 26) |= 1u;
            v23 = *(_DWORD *)(v16 + 40);
            *(_QWORD *)(v16 + 16) = v6;
            *(_DWORD *)(v16 + 40) = v23 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(v16 + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)v16 = v6 + 184;
            **(_QWORD **)(v6 + 192) = v16;
            *(_QWORD *)(v6 + 192) = v16;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(v16 + 228) &= ~0x2000u;
            --*(_WORD *)(v16 - 30);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
LABEL_36:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(v16);
          *a4 = v16;
          return 0LL;
        }
        if ( v17 )
          KeAbPostReleaseEx(v16 - 16, v17);
        if ( !*(_QWORD *)(v16 + 96) )
        {
          _m_prefetchw((const void *)(v16 - 24));
          BugCheckParameter4 = *(_QWORD *)(v16 - 24);
          v43 = BugCheckParameter4 == 0;
          if ( BugCheckParameter4 <= 0 )
          {
LABEL_203:
            if ( !v43 )
              KeBugCheckEx(0x18u, 0LL, v16, 0x20uLL, BugCheckParameter4);
          }
          else
          {
            while ( 1 )
            {
              v44 = BugCheckParameter4;
              BugCheckParameter4 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v16 - 24),
                                     BugCheckParameter4 + 1,
                                     BugCheckParameter4);
              if ( BugCheckParameter4 == v44 )
                break;
              v43 = BugCheckParameter4 == 0;
              if ( BugCheckParameter4 <= 0 )
                goto LABEL_203;
            }
          }
          v45 = (volatile signed __int32 *)(v6 + 136);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          v47 = KeAbPreAcquire(v16 - 16, 0LL, 0LL, v46);
          v49 = v47;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 - 16), v47, v16 - 16, v48);
          if ( v49 )
            *(_BYTE *)(v49 + 26) |= 1u;
          *(_BYTE *)(v16 - 32) |= 1u;
          v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), 0x10000uLL) + 0x10000;
          if ( v50 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v16, 0x26uLL, v50);
          --*(_WORD *)(v16 - 30);
          v51 = KeAbPreAcquire(v6 + 352, 0LL, 0LL, v48);
          if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 352), v51, v6 + 352, v52);
          if ( v51 )
            *(_BYTE *)(v51 + 26) |= 1u;
          v53 = 0;
          i = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
            KeAbPostRelease(v6 + 352);
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterStateChangeEventMessageLog(v16);
            v84 = *(_BYTE *)(v16 - 32);
            if ( (v84 & 1) != 0 )
            {
              v85 = *(__int16 *)(v16 - 30);
              *(_BYTE *)(v16 - 32) = v84 & 0xFE;
              v53 = 0x10000 - v85;
              *(_WORD *)(v16 - 30) = 0;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v16 - 16));
            KeAbPostRelease(v16 - 16);
            if ( v53 > 0 )
            {
              v86 = -v53 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), -v53);
              if ( v86 <= 0 )
              {
                if ( v86 )
                  KeBugCheckEx(0x18u, 0LL, v16, 0x28uLL, v86);
                goto LABEL_142;
              }
            }
          }
          else
          {
            v54 = KeAbPreAcquire(v6 + 136, 0LL, 0LL, v52);
            v55 = v54;
            if ( _interlockedbittestandset64(v45, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v54, v6 + 136, v18);
            if ( v55 )
              *(_BYTE *)(v55 + 26) |= 1u;
            v56 = (_QWORD *)(v6 + 160);
            v57 = *(_QWORD *)(v6 + 160);
            if ( v57 == v6 + 160 || !v57 )
            {
              v58 = *(_QWORD *)(v6 + 144);
              if ( v58 == v6 + 144 || !v58 )
                v58 = 0LL;
              if ( v16 == v58 )
                goto LABEL_20;
            }
            v59 = (_QWORD *)*v56;
            if ( (_QWORD *)*v56 == v56 || !v59 )
            {
              v60 = 0;
              v59 = 0LL;
            }
            else
            {
              v60 = 0;
            }
            if ( (_QWORD *)v16 == v59 )
              goto LABEL_20;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
            KeAbPostRelease(v6 + 352);
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterStateChangeEventMessageLog(v16);
            v61 = *(_BYTE *)(v16 - 32);
            if ( (v61 & 1) != 0 )
            {
              v62 = *(__int16 *)(v16 - 30);
              *(_BYTE *)(v16 - 32) = v61 & 0xFE;
              v60 = 0x10000 - v62;
              *(_WORD *)(v16 - 30) = 0;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v16 - 16));
            KeAbPostRelease(v16 - 16);
            if ( v60 > 0 )
            {
              v63 = -v60 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), -v60);
              if ( v63 <= 0 )
              {
                if ( v63 )
                  KeBugCheckEx(0x18u, 0LL, v16, 0x28uLL, v63);
LABEL_142:
                AlpcpDestroyBlob(v16);
                goto LABEL_2;
              }
            }
          }
          goto LABEL_2;
        }
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        v81 = KeAbPreAcquire(v6 + 352, 0LL, 0LL, v80);
        v82 = v81;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v81, v6 + 352, v9);
        if ( v82 )
          *(_BYTE *)(v82 + 26) |= 1u;
        i = 1;
      }
      if ( *(_QWORD *)(v6 + 384) != v6 + 384 )
      {
        v64 = *(_QWORD *)(v6 + 384) - 80LL;
        **(_QWORD **)(v64 + 88) = **(_QWORD **)(v6 + 384);
        *(_QWORD *)(*(_QWORD *)(v64 + 80) + 8LL) = *(_QWORD *)(v64 + 88);
        --*(_DWORD *)(v6 + 464);
        _m_prefetchw((const void *)(v64 - 24));
        v65 = *(_QWORD *)(v64 - 24);
        v66 = v65 == 0;
        if ( v65 <= 0 )
        {
LABEL_240:
          if ( !v66 )
            KeBugCheckEx(0x18u, 0LL, v64, 0x20uLL, v65);
        }
        else
        {
          while ( 1 )
          {
            v67 = v65;
            v65 = _InterlockedCompareExchange64((volatile signed __int64 *)(v64 - 24), v65 + 1, v65);
            if ( v65 == v67 )
              break;
            v66 = v65 == 0;
            if ( v65 <= 0 )
              goto LABEL_240;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        v69 = KeAbPreAcquire(v64 - 16, 0LL, 0LL, v68);
        v71 = v69;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v64 - 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v64 - 16), v69, v64 - 16, v70);
        if ( v71 )
          *(_BYTE *)(v71 + 26) |= 1u;
        *(_BYTE *)(v64 - 32) |= 1u;
        v72 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 - 24), 0x10000uLL) + 0x10000;
        if ( v72 <= 0 )
          KeBugCheckEx(0x18u, 0LL, v64, 0x26uLL, v72);
        *(_WORD *)(v64 - 30) -= 2;
        *a4 = v64;
        return 0LL;
      }
      v26 = *(_QWORD *)(v6 + 360);
      if ( v26 && (*(_QWORD *)(*(_QWORD *)(v26 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v38 = 1073741872;
        goto LABEL_79;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_78;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v38 = 258;
LABEL_79:
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v38;
      }
      if ( ((__int64)CurrentThread[1].Queue & 8) != 0 )
        goto LABEL_78;
      if ( i )
      {
        CurrentThread[1].Timer.Header.LockNV = a5;
        v27 = KeAbPreAcquire(v6 + 224, 0LL, 0LL, v9);
        v29 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v27, v6 + 224, v28);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        v30 = *(struct _LIST_ENTRY ****)(v6 + 240);
        p_Blink = &CurrentThread[1].Timer.Header.WaitListHead.Blink;
        CurrentThread[1].Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v6 + 232);
        CurrentThread[1].Timer.DueTime.QuadPart = (unsigned __int64)v30;
        if ( *v30 != (struct _LIST_ENTRY **)(v6 + 232) )
          __fastfail(3u);
        *v30 = p_Blink;
        *(_QWORD *)(v6 + 240) = p_Blink;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v33 = AlpcpCompleteDeferSignalRequestAndWait(a1, &CurrentThread[1].StateSaveArea, v32, a2, a3);
        if ( !v33 )
        {
          v16 = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( !v16 )
            goto LABEL_2;
          v34 = KeAbPreAcquire(v16 - 16, 0LL, 0LL, (__int64)a4);
          v36 = v34;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 - 16), v34, v16 - 16, v35);
          if ( v36 )
            *(_BYTE *)(v36 + 26) |= 1u;
          *(_BYTE *)(v16 - 32) |= 1u;
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), 0x10000uLL) + 0x10000;
          if ( v37 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v16, 0x26uLL, v37);
          goto LABEL_76;
        }
        v73 = (unsigned __int64 *)(v6 + 224);
        v74 = KeAbPreAcquire((ULONG_PTR)v73, 0LL, 0LL, (__int64)a4);
        v76 = v74;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v73, 0LL) )
          ExfAcquirePushLockExclusiveEx(v73, v74, (ULONG_PTR)v73, v75);
        if ( v76 )
          *(_BYTE *)(v76 + 26) |= 1u;
        v77 = (char *)&CurrentThread[1].Timer.Header.WaitListHead.Blink;
        if ( CurrentThread[1].Timer.Header.WaitListHead.Blink )
        {
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          v78 = *(_QWORD *)v77;
          QuadPart = (char **)CurrentThread[1].Timer.DueTime.QuadPart;
          if ( *(char **)(*(_QWORD *)v77 + 8LL) != v77 || *QuadPart != v77 )
            __fastfail(3u);
          *QuadPart = (char *)v78;
          *(_QWORD *)(v78 + 8) = QuadPart;
          *(_QWORD *)v77 = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v73);
          KeAbPostRelease((ULONG_PTR)v73);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v73);
          KeAbPostRelease((ULONG_PTR)v73);
          v87 = KeGetCurrentThread();
          v88 = v87->KernelApcDisable + 1;
          v87->KernelApcDisable = v88;
          if ( !v88
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v87->ApcState.ApcListHead[0].Flink != &v87->152
            && !v87->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v89 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReceive, 0, 0, 0LL);
          v91 = KeGetCurrentThread();
          --v91->KernelApcDisable;
          if ( AlpcpLogEnabled )
            AlpcpLogUnwait(v89);
          v16 = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( v16 )
          {
            v92 = KeAbPreAcquire(v16 - 16, 0LL, 0LL, v90);
            v94 = v92;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 16), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 - 16), v92, v16 - 16, v93);
            if ( v94 )
              *(_BYTE *)(v94 + 26) |= 1u;
            *(_BYTE *)(v16 - 32) |= 1u;
            v95 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 - 24), 0x10000uLL) + 0x10000;
            if ( v95 <= 0 )
              KeBugCheckEx(0x18u, 0LL, v16, 0x26uLL, v95);
LABEL_76:
            --*(_WORD *)(v16 - 30);
            *(_DWORD *)(v16 + 40) &= ~0x4000u;
            goto LABEL_36;
          }
        }
        return v33;
      }
      if ( _InterlockedCompareExchange64(v7, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v40 = KeAbPreAcquire(v6 + 352, 0LL, 0LL, v39);
        v41 = v40;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v40, v6 + 352, v9);
        if ( v41 )
          *(_BYTE *)(v41 + 26) |= 1u;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_78:
      v38 = -1073741823;
      goto LABEL_79;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
    }
    else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v83, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
