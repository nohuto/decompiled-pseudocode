/*
 * XREFs of ObpDeleteNameCheck @ 0x1404D3780
 * Callers:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ObpDeleteDirectoryEntry @ 0x14053BE00 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14055B27C (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rbp
  signed __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 *v14; // r14
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rtt
  __int64 v19; // r9
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *v22; // rax
  signed __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbp
  struct _KTHREAD *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rbp
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  __int64 v41; // rtt
  struct _KTHREAD *v42; // rdx
  __int16 v43; // ax
  struct _KTHREAD *v44; // rax
  signed __int64 *v45; // rsi
  signed __int64 v46; // rax
  signed __int64 v47; // rcx
  signed __int64 v48; // rtt
  struct _KTHREAD *v49; // rcx
  __int16 v50; // ax
  signed __int64 v51; // rax
  __int64 v52; // rtt
  struct _KTHREAD *v53; // rcx
  __int16 v54; // ax
  signed __int64 v55; // rax
  __int64 v56; // rtt
  struct _KTHREAD *v57; // rcx
  __int16 v58; // ax
  signed __int64 v59; // rax
  __int64 v60; // rtt
  __int16 v61; // ax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v63; // [rsp+38h] [rbp-50h]
  __int16 v64; // [rsp+4Eh] [rbp-3Ah]
  int v65; // [rsp+50h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v5 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v6 = a1 - v5;
    if ( a1 != v5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (unsigned __int64 *)(a1 + 16);
      v9 = 0LL;
      while ( 1 )
      {
        v10 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
        v13 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx(v8, v10, (ULONG_PTR)v8, v12);
        if ( v13 )
          *(_BYTE *)(v13 + 26) |= 1u;
        v14 = *(unsigned __int64 **)v6;
        if ( !*(_QWORD *)v6 )
        {
          _m_prefetchw((const void *)(a1 + 16));
          v59 = *(_QWORD *)(a1 + 16);
          if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v9 = v59 - 16;
          if ( (v59 & 2) != 0
            || (v60 = *(_QWORD *)(a1 + 16),
                v60 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v59)) )
          {
            ExfReleasePushLock((_QWORD *)(a1 + 16), v11);
          }
          KeAbPostRelease(a1 + 16);
          v57 = KeGetCurrentThread();
          v61 = v57->KernelApcDisable + 1;
          v57->KernelApcDisable = v61;
          if ( !v61 )
            goto LABEL_88;
          return;
        }
        if ( (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
          break;
        ObfReferenceObject(*(PVOID *)v6);
        _m_prefetchw((const void *)(a1 + 16));
        v16 = *(_QWORD *)(a1 + 16);
        v17 = v16 - 16;
        if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v17 = 0LL;
        if ( (v16 & 2) != 0
          || (v18 = *(_QWORD *)(a1 + 16),
              v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v17, v16)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16), v15);
        }
        KeAbPostRelease(a1 + 16);
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable + 1;
        v20->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v22 = KeGetCurrentThread();
        v63 = 0LL;
        --v22->KernelApcDisable;
        v23 = (signed __int64 *)(v14 + 37);
        v24 = KeAbPreAcquire((ULONG_PTR)(v14 + 37), 0LL, 0LL, v19);
        v26 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 74, 0LL) )
          ExfAcquirePushLockExclusiveEx(v14 + 37, v24, (ULONG_PTR)(v14 + 37), v25);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v65 = -859041228;
        ObfReferenceObject(v14);
        v27 = KeGetCurrentThread();
        Object = v14;
        v64 = 257;
        --v27->KernelApcDisable;
        v29 = KeAbPreAcquire(a1 + 16, 0LL, 0LL, v28);
        v32 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v29, a1 + 16, v31);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        if ( *(unsigned __int64 **)v6 == v14 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          if ( *(_DWORD *)(v6 + 24) )
            goto LABEL_54;
          if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(a1 + 48);
          ObpLookupDirectoryEntryEx(*(PVOID *)v6, 0, (__int64)&Object);
          ObpDeleteDirectoryEntry(&Object);
          if ( (_BYTE)v64 )
          {
LABEL_54:
            v45 = (signed __int64 *)((char *)Object + 296);
            _m_prefetchw((char *)Object + 296);
            v46 = *v45;
            v47 = *v45 - 16;
            if ( (*v45 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v47 = 0LL;
            if ( (v46 & 2) != 0 || (v48 = *v45, v48 != _InterlockedCompareExchange64(v45, v47, v46)) )
              ExfReleasePushLock(v45, v30);
            KeAbPostRelease((ULONG_PTR)v45);
            ObfDereferenceObject(Object);
            v49 = KeGetCurrentThread();
            v50 = v49->KernelApcDisable + 1;
            v49->KernelApcDisable = v50;
            if ( !v50
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
              && !v49->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          if ( v63 )
            ObfDereferenceObject(v63);
          _m_prefetchw((const void *)(a1 + 16));
          v51 = *(_QWORD *)(a1 + 16);
          if ( (v51 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v9 = v51 - 16;
          if ( (v51 & 2) != 0
            || (v52 = *(_QWORD *)(a1 + 16),
                v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v51)) )
          {
            ExfReleasePushLock((_QWORD *)(a1 + 16), v30);
          }
          KeAbPostRelease(a1 + 16);
          v53 = KeGetCurrentThread();
          v54 = v53->KernelApcDisable + 1;
          v53->KernelApcDisable = v54;
          if ( !v54
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
            && !v53->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PspDereferenceSiloObject(v14);
          return;
        }
        _m_prefetchw(v23);
        v33 = *v23;
        v34 = *v23 - 16;
        if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v34 = 0LL;
        if ( (v33 & 2) != 0 || (v35 = *v23, v35 != _InterlockedCompareExchange64(v23, v34, v33)) )
          ExfReleasePushLock(v14 + 37, v30);
        KeAbPostRelease((ULONG_PTR)(v14 + 37));
        v65 = -286387660;
        ObfDereferenceObject(v14);
        v37 = KeGetCurrentThread();
        Object = 0LL;
        v64 = 0;
        v38 = v37->KernelApcDisable + 1;
        v37->KernelApcDisable = v38;
        if ( !v38
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
          && !v37->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        _m_prefetchw((const void *)(a1 + 16));
        v39 = *(_QWORD *)(a1 + 16);
        v40 = v39 - 16;
        if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v40 = 0LL;
        if ( (v39 & 2) != 0
          || (v41 = *(_QWORD *)(a1 + 16),
              v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v40, v39)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16), v36);
        }
        KeAbPostRelease(a1 + 16);
        v42 = KeGetCurrentThread();
        v43 = v42->KernelApcDisable + 1;
        v42->KernelApcDisable = v43;
        if ( !v43
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
          && !v42->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        PspDereferenceSiloObject(v14);
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        v8 = (unsigned __int64 *)(a1 + 16);
      }
      _m_prefetchw((const void *)(a1 + 16));
      v55 = *(_QWORD *)(a1 + 16);
      if ( (v55 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v9 = v55 - 16;
      if ( (v55 & 2) != 0
        || (v56 = *(_QWORD *)(a1 + 16),
            v56 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v55)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 16), v11);
      }
      KeAbPostRelease(a1 + 16);
      v57 = KeGetCurrentThread();
      v58 = v57->KernelApcDisable + 1;
      v57->KernelApcDisable = v58;
      if ( !v58 )
      {
LABEL_88:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v57->ApcState.ApcListHead[0].Flink != &v57->152
          && !v57->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
  }
}
