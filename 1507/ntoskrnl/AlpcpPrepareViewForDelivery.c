/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x140477090
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140476E58 (AlpcpCaptureViewAttributeInternal.c)
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
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  signed __int64 BugCheckParameter4; // rax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  int v16; // r14d
  char v17; // cl
  signed __int64 v18; // rcx
  _QWORD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rdi
  bool v25; // cc
  ULONG_PTR v26; // rdi
  _BYTE v27[48]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  v8 = 0LL;
  v9 = KeAbPreAcquire(v4 - 16, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 - 16), v9, v4 - 16, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_BYTE *)(v4 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v4, 0x26uLL, BugCheckParameter4);
  v13 = *(_DWORD *)(v4 + 48);
  if ( (v13 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      {
        v14 = *(_DWORD *)(v4 + 52);
        if ( v14 <= 2 )
        {
          if ( v14 == 1 )
          {
            *(_QWORD *)(v4 + 80) = BugCheckParameter2;
            *(_DWORD *)(v4 + 48) = v13 | 1;
          }
          else
          {
            v20 = *(_QWORD **)(v4 + 56);
            if ( v20 == (_QWORD *)BugCheckParameter2 )
              v20 = (_QWORD *)*v20;
            v21 = MmSecureVirtualMemoryAgainstWrites(
                    *(_KPROCESS **)(BugCheckParameter2 + 32),
                    *(_QWORD *)(BugCheckParameter2 + 40),
                    *(_QWORD *)(BugCheckParameter2 + 48));
            if ( v21 )
            {
              _m_prefetchw((const void *)(BugCheckParameter2 - 24));
              v22 = *(_QWORD *)(BugCheckParameter2 - 24);
              while ( v22 > 0 )
              {
                v23 = v22;
                v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), v22 + 1, v22);
                if ( v22 == v23 )
                  goto LABEL_34;
              }
              if ( v22 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, v22);
LABEL_34:
              *(_DWORD *)(BugCheckParameter2 + 72) &= ~1u;
              *(_QWORD *)(BugCheckParameter2 + 64) = v21;
              *(_DWORD *)(v4 + 48) |= 1u;
              *(_QWORD *)(v4 + 72) = BugCheckParameter2;
              *(_QWORD *)(v4 + 80) = v20;
            }
          }
        }
      }
    }
    goto LABEL_12;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v4 + 80) )
  {
    if ( a2 )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 76) )
        goto LABEL_24;
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 72);
      if ( v8 )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)v27);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess((struct _KTHREAD *)v27, 0);
        *(_DWORD *)(v8 + 72) |= 1u;
        *(_QWORD *)(v8 + 64) = 0LL;
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      *(_DWORD *)(v4 + 48) &= ~1u;
      *(_QWORD *)(v4 + 80) = 0LL;
    }
LABEL_12:
    v15 = 0;
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    goto LABEL_13;
  }
LABEL_24:
  v15 = -1073741790;
LABEL_13:
  v16 = 0;
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * a3)) & 2;
  v17 = *(_BYTE *)(v4 - 32);
  if ( (v17 & 1) != 0 )
  {
    v16 = 0x10000 - *(__int16 *)(v4 - 30);
    *(_WORD *)(v4 - 30) = 0;
    *(_BYTE *)(v4 - 32) = v17 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
  KeAbPostRelease(v4 - 16);
  if ( v16 > 0 )
  {
    v18 = -v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v16);
    if ( v18 <= 0 )
    {
      if ( v18 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v18);
      AlpcpDestroyBlob(v4);
    }
  }
  if ( v8 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v25 = v24 <= 1;
    v26 = v24 - 1;
    if ( v25 )
    {
      if ( v26 )
        KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, v26);
      AlpcpDestroyBlob(v8);
    }
  }
  return v15;
}
