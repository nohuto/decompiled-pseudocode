/*
 * XREFs of AlpcpReceiveView @ 0x140474CA0
 * Callers:
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 *     AlpcpExposeViewAttribute @ 0x14053DA04 (AlpcpExposeViewAttribute.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLocateView @ 0x140476D44 (AlpcpLocateView.c)
 *     AlpcpRestoreWriteAccess @ 0x140477450 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpReceiveView(PVOID Object, __int64 a2, _BYTE *a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  int v6; // r13d
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  signed __int64 BugCheckParameter4; // rax
  __int64 View; // rax
  int v13; // r8d
  ULONG_PTR v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rdx
  signed __int64 v19; // rax
  bool v20; // cc
  ULONG_PTR v21; // rax
  int v22; // esi
  char v23; // cl
  signed __int64 v24; // rcx
  signed __int64 v25; // r14
  ULONG_PTR v26; // r14
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rdx
  char v31; // cl
  int v32; // esi
  __int64 v33; // r9
  signed __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rsi
  signed __int64 v38; // rax
  __int64 v39; // rax
  signed __int64 v40; // rax
  ULONG_PTR v41; // rax
  __int64 v42; // rax
  bool v43; // zf
  __int64 v44; // rdx
  signed __int64 v45; // rax
  ULONG_PTR v46; // rax
  signed __int64 v47; // rax
  ULONG_PTR v48; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-50h]
  _BYTE v52[48]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 144);
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 16);
  v8 = KeAbPreAcquire(v7 - 16, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 - 16), v8, v7 - 16, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_BYTE *)(v7 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v7, 0x26uLL, BugCheckParameter4);
  while ( 1 )
  {
    View = AlpcpLocateView(v7, Object);
    BugCheckParameter2 = View;
    v14 = View;
    if ( !View )
      break;
    _m_prefetchw((const void *)(View - 24));
    v28 = *(_QWORD *)(View - 24);
    v29 = v28 == 0;
    if ( v28 <= 0 )
    {
LABEL_41:
      if ( !v29 )
        KeBugCheckEx(0x18u, 0LL, v14, 0x20uLL, v28);
    }
    else
    {
      while ( 1 )
      {
        v30 = v28;
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 - 24), v28 + 1, v28);
        if ( v28 == v30 )
          break;
        if ( v28 <= 0 )
        {
          v14 = BugCheckParameter2;
          v29 = v28 == 0;
          goto LABEL_41;
        }
      }
      if ( v28 + 1 > 0 )
      {
        v14 = BugCheckParameter2;
        break;
      }
    }
    v31 = *(_BYTE *)(v7 - 32);
    v32 = 0;
    if ( (v31 & 1) != 0 )
    {
      v32 = v13 - *(__int16 *)(v7 - 30);
      *(_WORD *)(v7 - 30) = 0;
      *(_BYTE *)(v7 - 32) = v31 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
    KeAbPostRelease(v7 - 16);
    if ( v32 > 0 )
    {
      v34 = -v32 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v32);
      if ( v34 <= 0 )
      {
        if ( v34 )
          KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v34);
        AlpcpDestroyBlob(v7);
      }
    }
    v35 = KeAbPreAcquire(v7 - 16, 0LL, 0LL, v33);
    v37 = v35;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 - 16), v35, v7 - 16, v36);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    *(_BYTE *)(v7 - 32) |= 1u;
    v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0x10000uLL) + 0x10000;
    if ( v38 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v7, 0x26uLL, v38);
  }
  if ( (*(_DWORD *)(v7 + 48) & 1) != 0 )
  {
    if ( v14 == *(_QWORD *)(v7 + 80) )
    {
LABEL_17:
      *(_DWORD *)(a2 + 40) |= 0x8000u;
      *(_QWORD *)(a2 + 144) = v14;
      ++*(_DWORD *)(v14 + 76);
      goto LABEL_18;
    }
    if ( v14 && v14 == *(_QWORD *)(v7 + 72) )
    {
      v39 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v4 + 32), *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48));
      if ( !v39 )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v14 + 32), 0, (__int64)v52);
        MmUnsecureVirtualMemory(*(HANDLE *)(v14 + 64));
        KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
        *(_DWORD *)(v14 + 72) |= 1u;
        *(_QWORD *)(v14 + 64) = 0LL;
        v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v14 = BugCheckParameter2;
        v20 = v40 <= 1;
        v41 = v40 - 1;
        if ( v20 )
        {
          if ( v41 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v41);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
        *(_DWORD *)(v7 + 48) &= ~1u;
        *(_QWORD *)(v7 + 72) = 0LL;
        *(_QWORD *)(v7 + 80) = 0LL;
        goto LABEL_17;
      }
      *(_DWORD *)(v4 + 72) &= ~1u;
      *(_QWORD *)(v4 + 64) = v39;
      _m_prefetchw((const void *)(v4 - 24));
      v42 = *(_QWORD *)(v4 - 24);
      v43 = v42 == 0;
      if ( v42 <= 0 )
      {
LABEL_71:
        if ( !v43 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x20uLL, v42);
      }
      else
      {
        while ( 1 )
        {
          v44 = v42;
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 - 24), v42 + 1, v42);
          if ( v42 == v44 )
            break;
          if ( v42 <= 0 )
          {
            v14 = BugCheckParameter2;
            v43 = v42 == 0;
            goto LABEL_71;
          }
        }
        v14 = BugCheckParameter2;
      }
      KiStackAttachProcess(*(_KPROCESS **)(v14 + 32), 0, (__int64)v52);
      MmUnsecureVirtualMemory(*(HANDLE *)(v14 + 64));
      KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
      *(_DWORD *)(v14 + 72) |= 1u;
      *(_QWORD *)(v14 + 64) = 0LL;
      *(_QWORD *)(v7 + 72) = v4;
      *(_QWORD *)(v7 + 80) = v14;
      v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v45 <= 1;
      v46 = v45 - 1;
      if ( v20 )
      {
        if ( v46 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v46);
        v14 = BugCheckParameter2;
        AlpcpDestroyBlob(BugCheckParameter2);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v15 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v4 + 32), *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48));
    if ( v15 )
    {
      *(_DWORD *)(v4 + 72) &= ~1u;
      *(_QWORD *)(v4 + 64) = v15;
      _m_prefetchw((const void *)(v4 - 24));
      v16 = *(_QWORD *)(v4 - 24);
      v17 = v16 == 0;
      if ( v16 > 0 )
      {
        do
        {
          v18 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 - 24), v16 + 1, v16);
          if ( v16 == v18 )
          {
            v14 = BugCheckParameter2;
            goto LABEL_14;
          }
        }
        while ( v16 > 0 );
        v14 = BugCheckParameter2;
        v17 = v16 == 0;
      }
      if ( !v17 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x20uLL, v16);
LABEL_14:
      *(_QWORD *)(v7 + 72) = v4;
      *(_QWORD *)(v7 + 80) = 0LL;
      if ( v14 )
      {
        *(_QWORD *)(v7 + 80) = v14;
        goto LABEL_17;
      }
      v6 = AlpcpCreateView(v7, Object);
      if ( v6 >= 0 )
        goto LABEL_16;
      AlpcpRestoreWriteAccess(v4);
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v47 <= 1;
      v48 = v47 - 1;
      if ( v20 )
      {
        if ( v48 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, v48);
        AlpcpDestroyBlob(v4);
      }
      goto LABEL_86;
    }
    *(_DWORD *)(v7 + 48) &= ~1u;
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
  }
  else if ( v14 )
  {
    goto LABEL_17;
  }
  v6 = AlpcpCreateView(v7, Object);
  if ( v6 >= 0 )
  {
LABEL_16:
    v14 = BugCheckParameter2;
    goto LABEL_17;
  }
LABEL_86:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_18:
  --*(_DWORD *)(v4 + 76);
  if ( (*(_DWORD *)(v4 + 72) & 2) != 0 )
  {
    if ( (unsigned __int8)AlpcpDeleteBlob(v4) )
    {
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v19 <= 1;
      v21 = v19 - 1;
      if ( v20 )
      {
        if ( v21 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, v21);
        AlpcpDestroyBlob(v4);
      }
    }
    *(_DWORD *)(v4 + 72) &= ~2u;
  }
  v22 = 0;
  *a3 = *(_BYTE *)(v7 + 48) & 1;
  v23 = *(_BYTE *)(v7 - 32);
  if ( (v23 & 1) != 0 )
  {
    v22 = 0x10000 - *(__int16 *)(v7 - 30);
    *(_WORD *)(v7 - 30) = 0;
    *(_BYTE *)(v7 - 32) = v23 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
  KeAbPostRelease(v7 - 16);
  if ( v22 > 0 )
  {
    v24 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v22);
    if ( v24 <= 0 )
    {
      if ( v24 )
        KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v24);
      AlpcpDestroyBlob(v7);
    }
  }
  v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v20 = v25 <= 1;
  v26 = v25 - 1;
  if ( v20 )
  {
    if ( v26 )
      KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, v26);
    AlpcpDestroyBlob(v4);
  }
  return (unsigned int)v6;
}
