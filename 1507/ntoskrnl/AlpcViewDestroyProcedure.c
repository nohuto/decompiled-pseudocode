/*
 * XREFs of AlpcViewDestroyProcedure @ 0x140476810
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x140477450 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v6; // r15
  _KPROCESS *Process; // r12
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v12; // ecx
  int v13; // eax
  char v14; // cl
  int v15; // ebp
  __int64 v16; // r9
  signed __int64 v17; // rcx
  _QWORD *v18; // rsi
  unsigned __int64 *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rbp
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _KPROCESS *v25; // rcx
  void *v26; // rcx
  __int64 v27; // r9
  signed __int64 v28; // rax
  bool v29; // cc
  ULONG_PTR v30; // rax
  ULONG_PTR v31; // r8
  signed __int64 v32; // rax
  ULONG_PTR v33; // rax
  unsigned __int64 *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rsi
  _BYTE v40[48]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v4 )
  {
    v8 = KeAbPreAcquire(v4 - 16, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 - 16), v8, v4 - 16, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *(_BYTE *)(v4 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v4, 0x26uLL, BugCheckParameter4);
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v12 = --*(_DWORD *)(v4 + 52);
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v13 = *(_DWORD *)(v4 + 48);
      if ( (v13 & 1) != 0 )
      {
        v6 = *(_QWORD *)(v4 + 72);
        *(_QWORD *)(v4 + 80) = 0LL;
        if ( v6 )
        {
          AlpcpRestoreWriteAccess(v6);
        }
        else if ( !v12 )
        {
          *(_DWORD *)(v4 + 48) = v13 & 0xFFFFFFFE;
        }
      }
    }
    v14 = *(_BYTE *)(v4 - 32);
    v15 = 0;
    if ( (v14 & 1) != 0 )
    {
      v15 = 0x10000 - *(__int16 *)(v4 - 30);
      *(_WORD *)(v4 - 30) = 0;
      *(_BYTE *)(v4 - 32) = v14 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
    KeAbPostRelease(v4 - 16);
    if ( v15 > 0 )
    {
      v17 = -v15 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v15);
      if ( v17 <= 0 )
      {
        if ( v17 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v17);
        AlpcpDestroyBlob(v4);
      }
    }
    v18 = (_QWORD *)(a1 - 48);
    v19 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 328LL);
    v20 = KeAbPreAcquire((ULONG_PTR)v19, 0LL, 0LL, v16);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
      ExfAcquirePushLockExclusiveEx(v19, v20, (ULONG_PTR)v19, v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v23 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 != v18 )
    {
      v24 = (_QWORD *)v18[1];
      if ( (_QWORD *)v23[1] != v18 || (_QWORD *)*v24 != v18 )
        __fastfail(3u);
      *v24 = v23;
      v23[1] = v24;
      v18[1] = v18;
      *v18 = v18;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v19);
    KeAbPostRelease((ULONG_PTR)v19);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    v25 = *(_KPROCESS **)(a1 + 32);
    if ( Process != v25 )
      KiStackAttachProcess(v25, 0, (__int64)v40);
    v26 = *(void **)(a1 + 56);
    if ( v26 )
      MmUnsecureVirtualMemory(v26);
    MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0LL);
    if ( Process != *(_KPROCESS **)(a1 + 32) )
      KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
    if ( v6 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v29 = v28 <= 1;
      v30 = v28 - 1;
      if ( v29 )
      {
        if ( v30 )
          KeBugCheckEx(0x18u, 0LL, v6, 0x21uLL, v30);
        AlpcpDestroyBlob(v6);
      }
    }
    v31 = *(_QWORD *)(a1 + 16);
    v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v29 = v32 <= 1;
    v33 = v32 - 1;
    if ( v29 )
    {
      if ( v33 )
        KeBugCheckEx(0x18u, 0LL, v31, 0x21uLL, v33);
      AlpcpDestroyBlob(v31);
    }
    v34 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 1592LL);
    v35 = KeAbPreAcquire((ULONG_PTR)v34, 0LL, 0LL, v27);
    v37 = v35;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
      ExfAcquirePushLockExclusiveEx(v34, v35, (ULONG_PTR)v34, v36);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v38 = *(_QWORD *)(a1 + 32);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 1592), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v38 + 1592));
    KeAbPostRelease(v38 + 1592);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
