/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0022940
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0022DB0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D4CC4 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rdi
  volatile signed __int32 *v13; // rax
  DirectComposition::CConnection *v14; // rdi
  int v15; // esi
  int Batches; // r15d
  volatile signed __int32 *v17; // rsi
  char *v18; // r13
  volatile signed __int32 *v19; // rdx
  unsigned int v20; // edx
  struct _ERESOURCE *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+20h] [rbp-58h]
  DirectComposition::CCompositionFrame *v27; // [rsp+28h] [rbp-50h]
  DirectComposition::CCompositionFrame *v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-48h]
  struct UCE_RDP_HEADER *v30[8]; // [rsp+38h] [rbp-40h] BYREF
  DirectComposition::CConnection *v31; // [rsp+98h] [rbp+20h]

  v30[0] = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v29 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    LODWORD(v25) = 0;
    KeEnterCriticalRegion();
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v25, v27);
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
        v14 = *(DirectComposition::CConnection **)(v6 + 24);
        v31 = v14;
        v15 = 0;
      }
      else
      {
        v15 = -1073741790;
        v14 = v31;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v15 = -1073741823;
      v14 = v31;
    }
    if ( v15 >= 0 )
    {
      if ( v29 )
      {
        Batches = -1073741275;
        v17 = 0LL;
        v28 = 0LL;
        v18 = (char *)v14 + 200;
        ExAcquirePushLockSharedEx((char *)v14 + 200, 0LL);
        *((_BYTE *)v14 + 208) = 0;
        v19 = (volatile signed __int32 *)*((_QWORD *)v14 + 24);
        if ( v19 != (volatile signed __int32 *)((char *)v14 + 184) )
        {
          while ( *((_QWORD *)v19 + 7) != v29 )
          {
            v19 = (volatile signed __int32 *)*((_QWORD *)v19 + 1);
            if ( v19 == (volatile signed __int32 *)((char *)v14 + 184) )
              goto LABEL_21;
          }
          _InterlockedIncrement(v19 - 2);
          v17 = v19 - 2;
          v28 = (DirectComposition::CCompositionFrame *)(v19 - 2);
          Batches = 0;
          v14 = v31;
        }
LABEL_21:
        if ( v18[8] )
          ExReleasePushLockExclusiveEx(v18, 0LL);
        else
          ExReleasePushLockSharedEx(v18, 0LL);
        if ( Batches >= 0 )
        {
          v21 = (struct _ERESOURCE *)*((_QWORD *)v14 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v21, 1u);
          if ( *((_DWORD *)v14 + 37) )
          {
            v17 = (volatile signed __int32 *)v28;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v14 + 36, 1, 2) == 2 )
            {
              v22 = *((_QWORD *)v28 + 10);
              *((_QWORD *)v28 + 10) = 0LL;
              v23 = (_QWORD *)*((_QWORD *)v31 + 14);
              if ( v23 )
              {
                for ( ; *v23; v23 = (_QWORD *)*v23 )
                  ;
                *v23 = v22;
              }
              else
              {
                *((_QWORD *)v31 + 14) = v22;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v31, v29, v30);
            }
            else
            {
              Batches = -1073740024;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*((PERESOURCE *)v14 + 1));
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 && v28 )
          {
            if ( *((_DWORD *)v28 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v28);
            Win32FreePool(v28);
          }
          v14 = v31;
        }
        v26 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v14, v30);
        v26 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v30[0];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 && v31 )
        DirectComposition::CConnection::`scalar deleting destructor'(v31, v20);
      v15 = v26;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
