/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x1404A41F0
 * Callers:
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x14014C840 (PsTransferProcessQuotaToSharedQuota.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14052C618 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // ebp
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  ULONG_PTR v14; // rdi
  volatile signed __int64 *v15; // rdi
  ULONG_PTR v17; // rbp
  __int64 BugCheckParameter4; // rax
  __int64 v19; // rdx
  ULONG_PTR v20; // rax
  __int64 v21; // r9
  signed __int64 v22; // rax
  int v23; // r15d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r14
  char v30; // cl
  int v31; // r14d
  signed __int64 v32; // rdx
  volatile signed __int64 *v33; // r14
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r14
  signed __int64 v38; // rax
  unsigned __int64 *v39; // r15
  __int64 v40; // rax
  __int64 v41; // r14
  char v42; // cl
  int v43; // r14d
  signed __int64 v44; // rcx
  char v45; // cl
  int v46; // r14d
  signed __int64 v47; // rcx
  ULONG_PTR *i; // rax
  __int64 v49; // rdx
  PVOID v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // r14
  char v53; // al
  unsigned int v54; // [rsp+40h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-40h]
  int v58; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v7 = *(_DWORD *)(a2 + 416);
  v8 = a1;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    if ( (v7 & 6) == 4 )
      goto LABEL_4;
  }
  else if ( (v7 & 6) == 2 )
  {
    goto LABEL_4;
  }
  if ( (_DWORD)a4 == 3 )
  {
    v54 = 1;
    v58 = 0;
    v9 = 0;
LABEL_19:
    v10 = (unsigned __int64 *)(a2 + 176);
    goto LABEL_6;
  }
LABEL_4:
  v54 = 0;
  v9 = 0;
  v58 = 0;
  if ( (unsigned int)a4 <= 2 )
  {
    v10 = (unsigned __int64 *)(a2 + 136);
    goto LABEL_6;
  }
  if ( (_DWORD)a4 == 3 )
    goto LABEL_19;
  v10 = (unsigned __int64 *)(a2 + 200);
LABEL_6:
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      BugCheckParameter2 = v14;
      if ( *(_QWORD *)(v14 + 24) == v8 || (*(_BYTE *)(v14 + 42) & 1) != 0 )
        break;
      v14 = *(_QWORD *)v14;
LABEL_28:
      if ( (ULONG_PTR *)v14 == a3 )
      {
        v9 = v58;
        goto LABEL_11;
      }
    }
    v17 = v14 - 48;
    _m_prefetchw((const void *)(v14 - 48 + 24));
    BugCheckParameter4 = *(_QWORD *)(v14 - 48 + 24);
    while ( BugCheckParameter4 > 0 )
    {
      v19 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v17 + 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v19 )
        goto LABEL_33;
    }
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v14, 0x20uLL, BugCheckParameter4);
LABEL_33:
    v20 = KeAbPreAcquire(v17 + 32, 0LL, 1LL, v12);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 32), 0LL) )
    {
      if ( v20 )
        KeAbPostReleaseEx(v17 + 32, v20);
      if ( v5 <= 2 )
      {
        v33 = (volatile signed __int64 *)(a2 + 136);
      }
      else if ( v5 == 3 )
      {
        v33 = (volatile signed __int64 *)(a2 + 176);
      }
      else
      {
        v33 = (volatile signed __int64 *)(a2 + 200);
      }
      if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v33);
      KeAbPostRelease((ULONG_PTR)v33);
      v58 = 1;
      v35 = KeAbPreAcquire(v17 + 32, 0LL, 0LL, v34);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 32), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 32), v35, v17 + 32, v36);
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      *(_BYTE *)(v17 + 16) |= 1u;
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0x10000uLL) + 0x10000;
      if ( v38 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v14, 0x26uLL, v38);
      if ( v5 <= 2 )
      {
        v39 = (unsigned __int64 *)(a2 + 136);
      }
      else if ( v5 == 3 )
      {
        v39 = (unsigned __int64 *)(a2 + 176);
      }
      else
      {
        v39 = (unsigned __int64 *)(a2 + 200);
      }
      v40 = KeAbPreAcquire((ULONG_PTR)v39, 0LL, 0LL, v36);
      v41 = v40;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v39, 0LL) )
        ExfAcquirePushLockExclusiveEx(v39, v40, (ULONG_PTR)v39, v21);
      if ( v41 )
        *(_BYTE *)(v41 + 26) |= 1u;
      if ( *(_QWORD *)(v14 + 24) == a1 )
      {
        for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
        {
          if ( i == (ULONG_PTR *)v14 )
          {
            v23 = 1;
            goto LABEL_39;
          }
        }
      }
      --*(_WORD *)(v17 + 18);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v14);
      v42 = *(_BYTE *)(v17 + 16);
      v43 = 0;
      if ( (v42 & 1) != 0 )
      {
        v43 = 0x10000 - *(__int16 *)(v17 + 18);
        *(_WORD *)(v17 + 18) = 0;
        *(_BYTE *)(v17 + 16) = v42 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 32));
      KeAbPostRelease(v17 + 32);
      if ( v43 > 0 )
      {
        v44 = -v43 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), -v43);
        if ( v44 <= 0 )
        {
          if ( v44 )
            KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v44);
          AlpcpDestroyBlob(v14);
        }
      }
      v14 = (ULONG_PTR)a3;
    }
    else
    {
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      *(_BYTE *)(v17 + 16) |= 1u;
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0x10000uLL) + 0x10000;
      if ( v22 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v14, 0x27uLL, v22);
      if ( *(_QWORD *)(v14 + 24) == v8 )
      {
        v23 = 0;
LABEL_39:
        if ( *(_QWORD *)(v14 + 64) )
          goto LABEL_44;
        v24 = *(_DWORD *)(v14 + 40);
        if ( (v24 & 0x80u) != 0 )
          goto LABEL_44;
        v25 = *(_QWORD *)(v14 + 32);
        v26 = v24 | 0x80;
        *(_BYTE *)(v14 + 228) = 0;
        *(_WORD *)(v14 + 228) |= 0xCu;
        *(_DWORD *)(v14 + 40) = v26;
        *(_DWORD *)(v14 + 224) = 2621440;
        if ( v25 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v25 + 1744), 0LL) == v14 )
          {
            KeReleaseSemaphoreEx(*(_QWORD *)(v14 + 32) + 1592LL, 1, 1, v21, 2);
            *(_QWORD *)(v14 + 32) = 0LL;
            *(_WORD *)(v17 + 18) -= 3;
            goto LABEL_44;
          }
        }
        else if ( (v26 & 0x200) == 0 )
        {
          *(_QWORD *)(v14 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v14 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v14 + 80;
          *(_QWORD *)(a5 + 8) = v14 + 80;
LABEL_44:
          AlpcpReleaseMessageAttributesOnCancel(v14, v54);
          *(_DWORD *)(v14 + 40) |= 0x200u;
          *(_WORD *)(v14 + 228) &= ~0x2000u;
          v27 = *(void **)(v14 + 24);
          if ( v27 )
          {
            if ( (*(_DWORD *)(v14 + 40) & 0x1000) != 0 )
              ObfDereferenceObject(v27);
            *(_QWORD *)(v14 + 24) = 0LL;
          }
          v28 = *(_QWORD *)(v14 + 48);
          if ( v28 && (*(_DWORD *)(v14 + 40) & 0x400) == 0 && !*(_QWORD *)(v14 + 96) )
          {
            v49 = 776LL;
            if ( *(_QWORD *)(v14 + 208) )
              v49 = *(_QWORD *)(v14 + 216) + 776LL;
            *(_QWORD *)(v14 + 48) = PsTransferProcessQuotaToSharedQuota(v28, v49);
            ObfDereferenceObjectWithTag(v50, 0x63706C41u);
            *(_DWORD *)(v14 + 40) |= 0x400u;
          }
          v29 = *(_QWORD *)(v14 + 200);
          if ( v29 )
          {
            v51 = *(_QWORD *)(v14 + 200) & 7LL;
            v52 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8uLL);
            v53 = 1;
            if ( (_DWORD)v51 == 5 )
            {
              v53 = 5;
              LODWORD(v51) = 0;
            }
            PspChargeJobWakeCounter(v52, 0LL, v51, -1LL, v53, 0LL, *(unsigned int *)(v14 + 248));
            ObDereferenceObjectDeferDeleteWithTag(v52, 0x6B577350u);
            *(_QWORD *)(v14 + 200) = 0LL;
          }
          if ( v23 )
            v14 = *a3;
          else
            v14 = *(_QWORD *)v14;
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
          v30 = *(_BYTE *)(v17 + 16);
          v31 = 0;
          if ( (v30 & 1) != 0 )
          {
            v31 = 0x10000 - *(__int16 *)(v17 + 18);
            *(_WORD *)(v17 + 18) = 0;
            *(_BYTE *)(v17 + 16) = v30 & 0xFE;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 32));
          KeAbPostRelease(v17 + 32);
          if ( v31 > 0 )
          {
            v32 = -v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), -v31);
            if ( v32 <= 0 )
            {
              if ( v32 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v32);
              AlpcpDestroyBlob(BugCheckParameter2);
            }
          }
          goto LABEL_60;
        }
        --*(_WORD *)(v17 + 18);
        goto LABEL_44;
      }
      --*(_WORD *)(v17 + 18);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v14);
      v45 = *(_BYTE *)(v17 + 16);
      v46 = 0;
      if ( (v45 & 1) != 0 )
      {
        v46 = 0x10000 - *(__int16 *)(v17 + 18);
        *(_WORD *)(v17 + 18) = 0;
        *(_BYTE *)(v17 + 16) = v45 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 32));
      KeAbPostRelease(v17 + 32);
      if ( v46 > 0 )
      {
        v47 = -v46 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), -v46);
        if ( v47 <= 0 )
        {
          if ( v47 )
            KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v47);
          AlpcpDestroyBlob(v14);
        }
      }
    }
    v14 = *(_QWORD *)v14;
LABEL_60:
    v8 = a1;
    goto LABEL_28;
  }
LABEL_11:
  if ( v5 > 2 )
  {
    if ( v5 == 3 )
      v15 = (volatile signed __int64 *)(a2 + 176);
    else
      v15 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v15 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  return v9;
}
