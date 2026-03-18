/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0012CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00131C0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D69EC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rdi
  volatile signed __int32 *v10; // rax
  DirectComposition::CConnection *v11; // rdi
  int v12; // esi
  int Batches; // r15d
  volatile signed __int32 *v14; // rsi
  char *v15; // r13
  volatile signed __int32 *v16; // rdx
  unsigned int v17; // edx
  struct _ERESOURCE *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  int v22; // [rsp+20h] [rbp-58h]
  DirectComposition::CCompositionFrame *v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  struct UCE_RDP_HEADER *v25[8]; // [rsp+38h] [rbp-40h] BYREF
  DirectComposition::CConnection *v26; // [rsp+98h] [rbp+20h]

  v25[0] = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v24 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
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
        v11 = *(DirectComposition::CConnection **)(v6 + 24);
        v26 = v11;
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
        v11 = v26;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741823;
      v11 = v26;
    }
    if ( v12 >= 0 )
    {
      if ( v24 )
      {
        Batches = -1073741275;
        v14 = 0LL;
        v23 = 0LL;
        v15 = (char *)v11 + 200;
        ExAcquirePushLockSharedEx((char *)v11 + 200, 0LL);
        *((_BYTE *)v11 + 208) = 0;
        v16 = (volatile signed __int32 *)*((_QWORD *)v11 + 24);
        if ( v16 != (volatile signed __int32 *)((char *)v11 + 184) )
        {
          while ( *((_QWORD *)v16 + 7) != v24 )
          {
            v16 = (volatile signed __int32 *)*((_QWORD *)v16 + 1);
            if ( v16 == (volatile signed __int32 *)((char *)v11 + 184) )
              goto LABEL_21;
          }
          _InterlockedIncrement(v16 - 2);
          v14 = v16 - 2;
          v23 = (DirectComposition::CCompositionFrame *)(v16 - 2);
          Batches = 0;
          v11 = v26;
        }
LABEL_21:
        if ( v15[8] )
          ExReleasePushLockExclusiveEx(v15);
        else
          ExReleasePushLockSharedEx(v15);
        if ( Batches >= 0 )
        {
          v18 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v18, 1u);
          if ( *((_DWORD *)v11 + 37) )
          {
            v14 = (volatile signed __int32 *)v23;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v11 + 36, 1, 2) == 2 )
            {
              v19 = *((_QWORD *)v23 + 10);
              *((_QWORD *)v23 + 10) = 0LL;
              v20 = (_QWORD *)*((_QWORD *)v26 + 14);
              if ( v20 )
              {
                for ( ; *v20; v20 = (_QWORD *)*v20 )
                  ;
                *v20 = v19;
              }
              else
              {
                *((_QWORD *)v26 + 14) = v19;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v26, v24, v25);
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
          ExReleaseResourceLite(*((PERESOURCE *)v11 + 1));
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 && v23 )
          {
            if ( *((_DWORD *)v23 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v23);
            Win32FreePool(v23);
          }
          v11 = v26;
        }
        v22 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v11, v25);
        v22 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v25[0];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 && v26 )
        DirectComposition::CConnection::`scalar deleting destructor'(v26, v17);
      v12 = v22;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
