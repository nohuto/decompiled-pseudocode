/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x140491B20
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(
        unsigned __int64 *Object,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  BOOLEAN v4; // r12
  char v5; // bp
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  void *result; // rax
  void *v12; // rbx
  __int64 v13; // rdx
  void *v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  int v18; // esi
  __int64 *v19; // r15
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rtt
  void *v23; // rcx
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 *v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // rtt
  void *v30; // rcx
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax

  v4 = a4;
  v5 = *(_BYTE *)(a3 + 30);
  v9 = &Object[*(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
  {
    *(_DWORD *)(a3 + 32) = -1145368012;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)(Object + 37), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 37, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(Object + 37, v16, (ULONG_PTR)(Object + 37), v17);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_DWORD *)(a3 + 32) = -572714444;
    ObfReferenceObject(Object);
    *(_QWORD *)a3 = Object;
    *(_WORD *)(a3 + 30) = 1;
  }
  v10 = *v9;
  if ( *v9 )
  {
    v18 = *(_DWORD *)(a3 + 24);
    while ( *(_DWORD *)(v10 + 16) != v18
         || !RtlEqualUnicodeString(
               a2,
               (PCUNICODE_STRING)(*(_QWORD *)(v10 + 8)
                                - 48LL
                                - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(v10 + 8) - 48LL + 26) & 3]
                                + 8),
               v4) )
    {
      v9 = (unsigned __int64 *)v10;
      v10 = *(_QWORD *)v10;
      if ( !v10 )
        goto LABEL_3;
    }
    v12 = *(void **)(v10 + 8);
    ObfReferenceObject(v12);
    if ( !v5 )
    {
      v19 = (__int64 *)(Object + 37);
      _m_prefetchw(v19);
      v20 = *v19;
      v9 = 0LL;
      v21 = *v19 - 16;
      if ( (*v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (v20 & 2) != 0 || (v22 = *v19, v22 != _InterlockedCompareExchange64(v19, v21, v20)) )
        ExfReleasePushLock(v19, v13);
      KeAbPostRelease((ULONG_PTR)v19);
      v23 = *(void **)a3;
      *(_DWORD *)(a3 + 32) = -286387660;
      ObfDereferenceObject(v23);
      *(_QWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 30) = 0;
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v14 = *(void **)(a3 + 8);
    if ( v14 )
      ObfDereferenceObject(v14);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_3:
    if ( !v5 )
    {
      v26 = (__int64 *)(Object + 37);
      _m_prefetchw(v26);
      v27 = *v26;
      v28 = *v26 - 16;
      if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( (v27 & 2) != 0 || (v29 = *v26, v29 != _InterlockedCompareExchange64(v26, v28, v27)) )
        ExfReleasePushLock(v26, (__int64)a2);
      KeAbPostRelease((ULONG_PTR)v26);
      v30 = *(void **)a3;
      *(_DWORD *)(a3 + 32) = -286387660;
      ObfDereferenceObject(v30);
      *(_QWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 30) = 0;
      v31 = KeGetCurrentThread();
      v32 = v31->KernelApcDisable + 1;
      v31->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
        && !v31->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return 0LL;
  }
  return result;
}
