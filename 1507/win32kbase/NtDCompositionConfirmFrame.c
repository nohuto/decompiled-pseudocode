/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C001DB90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C0020770 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0031348 (-ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031430 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006B784 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rbx
  volatile signed __int32 *v13; // rax
  int v14; // r15d
  volatile signed __int32 *v15; // rsi
  char *v16; // rbx
  volatile signed __int32 *v17; // rcx
  unsigned int v18; // edx
  volatile signed __int32 *i; // rdi
  __int64 *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  struct _ERESOURCE *v23; // rbx
  __int64 *v24; // r14
  unsigned __int64 v25; // rdi
  struct _ERESOURCE *v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  DirectComposition::CBatchSharedMemoryPool *j; // rbx
  __int64 v32; // rdx
  __int64 *v34; // r12
  __int64 v35; // r15
  __int64 *v36; // rbx
  _QWORD *v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rdi
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-48h]
  int v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+28h] [rbp-40h]
  __int64 v45; // [rsp+28h] [rbp-40h]
  DirectComposition::CConnection *v46; // [rsp+80h] [rbp+18h]
  DirectComposition::CCompositionFrame *v47; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v46 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v44 = *a2;
    if ( *a2 )
      v5 = 0;
    else
      v5 = -1073741811;
    LODWORD(v42) = v5;
    if ( v5 >= 0 )
    {
      KeEnterCriticalRegion();
      v6 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v42, v44);
      if ( CurrentProcessWin32Process )
        v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v6 )
      {
        v12 = *(struct _ERESOURCE **)(v6 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v12, 1u);
        v13 = *(volatile signed __int32 **)(v6 + 24);
        if ( v13 && a1 == *(_QWORD *)(v6 + 16) )
        {
          _InterlockedIncrement(v13);
          v3 = *(DirectComposition::CConnection **)(v6 + 24);
          v46 = v3;
          v5 = 0;
          v4 = v45;
        }
        else
        {
          v5 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v5 = -1073741823;
      }
      if ( v5 >= 0 )
      {
        v14 = -1073741275;
        v15 = 0LL;
        v47 = 0LL;
        v16 = (char *)v3 + 200;
        ExAcquirePushLockSharedEx((char *)v3 + 200, 0LL);
        *((_BYTE *)v3 + 208) = 0;
        v17 = (volatile signed __int32 *)*((_QWORD *)v3 + 24);
        if ( v17 != (volatile signed __int32 *)((char *)v3 + 184) )
        {
          while ( *((_QWORD *)v17 + 7) != v4 )
          {
            v17 = (volatile signed __int32 *)*((_QWORD *)v17 + 1);
            if ( v17 == (volatile signed __int32 *)((char *)v3 + 184) )
              goto LABEL_20;
          }
          _InterlockedIncrement(v17 - 2);
          v15 = v17 - 2;
          v47 = (DirectComposition::CCompositionFrame *)(v17 - 2);
          v14 = 0;
          v3 = v46;
        }
LABEL_20:
        if ( v16[8] )
          ExReleasePushLockExclusiveEx(v16, 0LL);
        else
          ExReleasePushLockSharedEx(v16, 0LL);
        v43 = v14;
        if ( v14 >= 0 )
        {
          *((_DWORD *)v15 + 18) = 1;
          for ( i = (volatile signed __int32 *)*((_QWORD *)v15 + 17); i != v15 + 34; i = *(volatile signed __int32 **)i )
            (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 1) + 40LL))((_QWORD *)i - 1);
          v20 = (__int64 *)(v15 + 38);
          v21 = (__int64 *)*((_QWORD *)v15 + 19);
          v22 = *v21;
          if ( (volatile signed __int32 *)v21[1] != v15 + 38 || *(__int64 **)(v22 + 8) != v21 )
            __fastfail(3u);
          *v20 = v22;
          for ( *(_QWORD *)(v22 + 8) = v20; v21 != v20; v37[1] = v20 )
          {
            v36 = v21 - 5;
            (*(void (__fastcall **)(__int64 *))(*(v21 - 1) + 56))(v21 - 1);
            ObfDereferenceObject(v36);
            v21 = (__int64 *)*v20;
            v37 = *(_QWORD **)*v20;
            if ( *(__int64 **)(*v20 + 8) != v20 || (__int64 *)v37[1] != v21 )
              __fastfail(3u);
            *v20 = (__int64)v37;
          }
          if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v15 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v47);
            Win32FreePool(v47);
          }
          v23 = (struct _ERESOURCE *)*((_QWORD *)v46 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v23, 1u);
          v24 = (__int64 *)*((_QWORD *)v46 + 15);
          *((_QWORD *)v46 + 15) = 0LL;
          *((_QWORD *)v46 + 16) = 0LL;
          if ( v24 )
          {
            do
            {
              v34 = (__int64 *)*v24;
              *((_BYTE *)v24 + 32) &= ~2u;
              if ( (v24[4] & 4) == 0 )
                DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                  (DirectComposition::CApplicationChannel *)v24[1],
                  (struct DirectComposition::CBatch *)v24);
              v35 = v24[1];
              if ( *((_DWORD *)v24 + 5) == 6 )
              {
                v38 = *(_DWORD *)(v35 + 28);
                v39 = *(_QWORD *)(v35 + 40);
                DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(v39 + 16));
                DirectComposition::CLinearHandleTableBase::ReleaseHandle(
                  (DirectComposition::CLinearHandleTableBase *)(v39 + 24),
                  v38);
                ExReleaseResourceLite(*(PERESOURCE *)(v39 + 16));
                KeLeaveCriticalRegion();
                DirectComposition::CBatch::`scalar deleting destructor'((DirectComposition::CBatch *)v24, v40);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 32LL))(v35, 1LL);
              }
              else
              {
                *(_DWORD *)(v35 + 380) = *((_DWORD *)v24 + 4);
                if ( (v24[4] & 8) != 0 )
                  *(_BYTE *)(v35 + 185) = 0;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v35 + 144), (PSLIST_ENTRY)v24);
                KeReleaseSemaphore(*(PRKSEMAPHORE *)(v35 + 160), 1, 1, 0);
              }
              v24 = v34;
            }
            while ( v34 );
          }
          v25 = 0LL;
          v26 = (struct _ERESOURCE *)*((_QWORD *)v46 + 2);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v26, 1u);
          while ( 1 )
          {
            v27 = v25;
            v28 = *((_QWORD *)v46 + 7);
            if ( v25 < v28 )
            {
              v29 = (_QWORD *)(*((_QWORD *)v46 + 4) + v25 * *((_QWORD *)v46 + 8));
              do
              {
                if ( *v29 )
                  break;
                ++v27;
                v29 = (_QWORD *)((char *)v29 + *((_QWORD *)v46 + 8));
              }
              while ( v27 < v28 );
            }
            if ( v27 >= v28 )
              break;
            _mm_lfence();
            v25 = v27 + 1;
            v30 = *(_QWORD *)(v27 * *((_QWORD *)v46 + 8) + *((_QWORD *)v46 + 4));
            if ( !v30 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v46 + 2));
          KeLeaveCriticalRegion();
          v3 = v46;
          for ( j = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)v46 + 27);
                j != (DirectComposition::CConnection *)((char *)v46 + 216);
                j = *(DirectComposition::CBatchSharedMemoryPool **)j )
          {
            v32 = *((_QWORD *)j + 6);
            if ( v32 )
            {
              v41 = *(_QWORD *)(*((_QWORD *)j + 2) + 16LL);
              if ( v41 )
                MmUnmapViewOfSection(v41, v32);
              *((_QWORD *)j + 6) = 0LL;
            }
            *((_QWORD *)j + 4) = 0LL;
            *((_QWORD *)j + 5) = 0LL;
            if ( *((_QWORD *)j + 6) )
              DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(j);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v46 + 1));
          KeLeaveCriticalRegion();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v46, v18);
        v5 = v43;
      }
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
