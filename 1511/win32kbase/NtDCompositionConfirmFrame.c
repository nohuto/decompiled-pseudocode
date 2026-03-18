/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C0011A20
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A1DC (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001A4E0 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001ABEC (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C001E03C (-ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  int v11; // r15d
  volatile signed __int32 *v12; // rsi
  char *v13; // rbx
  volatile signed __int32 *v14; // rcx
  unsigned int v15; // edx
  volatile signed __int32 *i; // rdi
  __int64 *v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rbx
  __int64 *v21; // r14
  unsigned __int64 v22; // rdi
  struct _ERESOURCE *v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  DirectComposition::CBatchSharedMemoryPool *j; // rbx
  __int64 *v30; // r12
  __int64 v31; // r15
  __int64 *v32; // rbx
  _QWORD *v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rdi
  unsigned int v36; // edx
  int v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  DirectComposition::CConnection *v39; // [rsp+80h] [rbp+18h]
  DirectComposition::CCompositionFrame *v40; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v39 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v38 = *a2;
    if ( *a2 )
      v5 = 0;
    else
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      KeEnterCriticalRegion();
      v6 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
        v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v6 )
      {
        v9 = *(struct _ERESOURCE **)(v6 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v9, 1u);
        v10 = *(volatile signed __int32 **)(v6 + 24);
        if ( v10 && a1 == *(_QWORD *)(v6 + 16) )
        {
          _InterlockedIncrement(v10);
          v3 = *(DirectComposition::CConnection **)(v6 + 24);
          v39 = v3;
          v5 = 0;
          v4 = v38;
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
        v11 = -1073741275;
        v12 = 0LL;
        v40 = 0LL;
        v13 = (char *)v3 + 200;
        ExAcquirePushLockSharedEx((char *)v3 + 200, 0LL);
        *((_BYTE *)v3 + 208) = 0;
        v14 = (volatile signed __int32 *)*((_QWORD *)v3 + 24);
        if ( v14 != (volatile signed __int32 *)((char *)v3 + 184) )
        {
          while ( *((_QWORD *)v14 + 7) != v4 )
          {
            v14 = (volatile signed __int32 *)*((_QWORD *)v14 + 1);
            if ( v14 == (volatile signed __int32 *)((char *)v3 + 184) )
              goto LABEL_20;
          }
          _InterlockedIncrement(v14 - 2);
          v12 = v14 - 2;
          v40 = (DirectComposition::CCompositionFrame *)(v14 - 2);
          v11 = 0;
          v3 = v39;
        }
LABEL_20:
        if ( v13[8] )
          ExReleasePushLockExclusiveEx(v13);
        else
          ExReleasePushLockSharedEx(v13);
        v37 = v11;
        if ( v11 >= 0 )
        {
          *((_DWORD *)v12 + 18) = 1;
          for ( i = (volatile signed __int32 *)*((_QWORD *)v12 + 17); i != v12 + 34; i = *(volatile signed __int32 **)i )
            (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 1) + 40LL))((_QWORD *)i - 1);
          v17 = (__int64 *)(v12 + 38);
          v18 = (__int64 *)*((_QWORD *)v12 + 19);
          v19 = *v18;
          if ( (volatile signed __int32 *)v18[1] != v12 + 38 || *(__int64 **)(v19 + 8) != v18 )
            __fastfail(3u);
          *v17 = v19;
          for ( *(_QWORD *)(v19 + 8) = v17; v18 != v17; v33[1] = v17 )
          {
            v32 = v18 - 5;
            (*(void (__fastcall **)(__int64 *))(*(v18 - 1) + 56))(v18 - 1);
            ObfDereferenceObject(v32);
            v18 = (__int64 *)*v17;
            v33 = *(_QWORD **)*v17;
            if ( *(__int64 **)(*v17 + 8) != v17 || (__int64 *)v33[1] != v18 )
              __fastfail(3u);
            *v17 = (__int64)v33;
          }
          if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v12 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v40);
            Win32FreePool(v40);
          }
          v20 = (struct _ERESOURCE *)*((_QWORD *)v39 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v20, 1u);
          v21 = (__int64 *)*((_QWORD *)v39 + 15);
          *((_QWORD *)v39 + 15) = 0LL;
          *((_QWORD *)v39 + 16) = 0LL;
          if ( v21 )
          {
            do
            {
              v30 = (__int64 *)*v21;
              *((_BYTE *)v21 + 32) &= ~2u;
              if ( (v21[4] & 4) == 0 )
                DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                  (DirectComposition::CApplicationChannel *)v21[1],
                  (struct DirectComposition::CBatch *)v21);
              v31 = v21[1];
              if ( *((_DWORD *)v21 + 5) == 6 )
              {
                v34 = *(_DWORD *)(v31 + 28);
                v35 = *(_QWORD *)(v31 + 40);
                DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(v35 + 16));
                DirectComposition::CLinearHandleTableBase::ReleaseHandle(
                  (DirectComposition::CLinearHandleTableBase *)(v35 + 24),
                  v34);
                ExReleaseResourceLite(*(PERESOURCE *)(v35 + 16));
                KeLeaveCriticalRegion();
                DirectComposition::CBatch::`scalar deleting destructor'((DirectComposition::CBatch *)v21, v36);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, 1LL);
              }
              else
              {
                *(_DWORD *)(v31 + 380) = *((_DWORD *)v21 + 4);
                if ( (v21[4] & 8) != 0 )
                  *(_BYTE *)(v31 + 185) = 0;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v31 + 144), (PSLIST_ENTRY)v21);
                KeSetEvent(**(PRKEVENT **)(v31 + 160), 1, 0);
              }
              v21 = v30;
            }
            while ( v30 );
          }
          v22 = 0LL;
          v23 = (struct _ERESOURCE *)*((_QWORD *)v39 + 2);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v23, 1u);
          while ( 1 )
          {
            v24 = v22;
            v25 = *((_QWORD *)v39 + 7);
            if ( v22 < v25 )
            {
              v26 = (_QWORD *)(*((_QWORD *)v39 + 4) + v22 * *((_QWORD *)v39 + 8));
              do
              {
                if ( *v26 )
                  break;
                ++v24;
                v26 = (_QWORD *)((char *)v26 + *((_QWORD *)v39 + 8));
              }
              while ( v24 < v25 );
            }
            if ( v24 >= v25 )
              break;
            _mm_lfence();
            v22 = v24 + 1;
            v27 = *(_QWORD *)(v24 * *((_QWORD *)v39 + 8) + *((_QWORD *)v39 + 4));
            if ( !v27 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v39 + 2));
          KeLeaveCriticalRegion();
          v3 = v39;
          for ( j = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)v39 + 27);
                j != (DirectComposition::CConnection *)((char *)v39 + 216);
                j = *(DirectComposition::CBatchSharedMemoryPool **)j )
          {
            if ( *((_QWORD *)j + 6) )
            {
              if ( *(_QWORD *)(*((_QWORD *)j + 2) + 16LL) )
                MmUnmapViewOfSection();
              *((_QWORD *)j + 6) = 0LL;
            }
            *((_QWORD *)j + 4) = 0LL;
            *((_QWORD *)j + 5) = 0LL;
            if ( *((_QWORD *)j + 6) )
              DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(j);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v39 + 1));
          KeLeaveCriticalRegion();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v39, v15);
        v5 = v37;
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
