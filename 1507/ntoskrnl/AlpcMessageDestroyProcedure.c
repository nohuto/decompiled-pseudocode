/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x14047A9E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x1404713BC (AlpcpReleaseAttributes.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14069E9EC (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  ULONG_PTR v8; // r8
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v14; // eax
  void *v15; // rcx
  int v16; // edi
  __int64 v17; // r14
  ULONG_PTR v18; // rdx
  signed __int64 v19; // rax
  bool v20; // cc
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // r8
  signed __int64 v23; // rbp
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v25; // r15
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r14
  signed __int64 v29; // rax
  int v30; // r15d
  ULONG_PTR v31; // r14
  char v32; // cl
  signed __int64 v33; // rcx
  signed __int64 v34; // rax
  ULONG_PTR v35; // rax
  signed __int64 v36; // rax
  ULONG_PTR v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // r14
  char v40; // al
  __int64 v41; // r8
  _QWORD *v42; // rdi
  char v43; // al

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  *(_DWORD *)(a1 + 248) |= 0x80000000;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v14 = *(_DWORD *)(a1 + 40);
    v15 = *(void **)(a1 + 24);
    v16 = (v14 >> 13) & 1;
    if ( v15 )
    {
      if ( (v14 & 0x1000) != 0 )
        ObfDereferenceObject(v15);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    *(_DWORD *)(a1 + 40) = 0;
    AlpcpReleaseAttributes((_QWORD *)(a1 + 104), a2, a3, a4);
    v17 = *(_QWORD *)(a1 + 200);
    if ( v17 )
    {
      v38 = *(_QWORD *)(a1 + 200) & 7LL;
      v39 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8uLL);
      v40 = 1;
      if ( (_DWORD)v38 == 5 )
      {
        v40 = 5;
        LODWORD(v38) = 0;
      }
      PspChargeJobWakeCounter(v39, 0LL, v38, -1LL, v40, 0LL, *(unsigned int *)(a1 + 248));
      ObDereferenceObjectDeferDeleteWithTag(v39, 0x6B577350u);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    *(_DWORD *)(a1 + 224) = 2621440;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 184) = 0LL;
    if ( v16 )
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 96) + 40LL), 0);
      v22 = *(_QWORD *)(a1 + 96);
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v23 <= 1;
      BugCheckParameter4 = v23 - 1;
      if ( v20 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v22, 0x21uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v22);
      }
    }
    return 3221225473LL;
  }
  else
  {
    v5 = *(volatile signed __int64 **)(a1 + 48);
    if ( v5 )
    {
      v18 = 776LL;
      if ( *(_QWORD *)(a1 + 208) )
        v18 = *(_QWORD *)(a1 + 216) + 776LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((PVOID)v5);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        if ( v18 + *((_QWORD *)v5 + 202) >= 0x1000 )
          PsReturnProcessPagedPoolQuota((ULONG_PTR)v5, v18);
        else
          _InterlockedExchangeAdd64(v5 + 202, v18);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
    v6 = *(void **)(a1 + 208);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x42456C41u);
    v7 = *(void **)(a1 + 24);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
        ObfDereferenceObject(v7);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 136);
    if ( v8 )
    {
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v19 <= 1;
      v21 = v19 - 1;
      if ( v20 )
      {
        if ( v21 )
          KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, v21);
        AlpcpDestroyBlob(v8);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = 0LL;
      }
    }
    v9 = *(_QWORD *)(a1 + 144);
    if ( v9 )
    {
      v25 = *(_QWORD *)(v9 + 16);
      v26 = KeAbPreAcquire(v25 - 16, 0LL, 0LL, a4);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 - 16), v26, v25 - 16, v27);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      *(_BYTE *)(v25 - 32) |= 1u;
      v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 - 24), 0x10000uLL) + 0x10000;
      if ( v29 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v25, 0x26uLL, v29);
      --*(_DWORD *)(v9 + 76);
      v30 = 0;
      v31 = *(_QWORD *)(v9 + 16);
      v32 = *(_BYTE *)(v31 - 32);
      if ( (v32 & 1) != 0 )
      {
        v30 = 0x10000 - *(__int16 *)(v31 - 30);
        *(_WORD *)(v31 - 30) = 0;
        *(_BYTE *)(v31 - 32) = v32 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v31 - 16));
      KeAbPostRelease(v31 - 16);
      if ( v30 > 0 )
      {
        v33 = -v30 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 24), -v30);
        if ( v33 <= 0 )
        {
          if ( v33 )
            KeBugCheckEx(0x18u, 0LL, v31, 0x28uLL, v33);
          AlpcpDestroyBlob(v31);
        }
      }
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v34 <= 1;
      v35 = v34 - 1;
      if ( v20 )
      {
        if ( v35 )
          KeBugCheckEx(0x18u, 0LL, v9, 0x21uLL, v35);
        AlpcpDestroyBlob(v9);
      }
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 )
    {
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v20 = v36 <= 1;
      v37 = v36 - 1;
      if ( v20 )
      {
        if ( v37 )
          KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, v37);
        AlpcpDestroyBlob(v10);
      }
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 )
    {
      if ( (v11 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v11 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 200);
    if ( v12 )
    {
      v41 = *(_QWORD *)(a1 + 200) & 7LL;
      v42 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 1;
      if ( (_DWORD)v41 == 5 )
      {
        v43 = 5;
        LODWORD(v41) = 0;
      }
      PspChargeJobWakeCounter(v42, 0LL, v41, -1LL, v43, 0LL, *(unsigned int *)(a1 + 248));
      ObDereferenceObjectDeferDeleteWithTag(v42, 0x6B577350u);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    return 0LL;
  }
}
