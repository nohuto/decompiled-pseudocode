/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0017E70
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0018A58 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00E40CC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v8; // rbx
  volatile signed __int32 *v9; // rax
  int v10; // ebx
  int Batches; // ebx
  volatile signed __int32 *v12; // rsi
  char *v13; // r12
  volatile signed __int32 *i; // rdx
  unsigned int v15; // edx
  struct _ERESOURCE *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  int v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 v21; // [rsp+28h] [rbp-50h]
  DirectComposition::CCompositionFrame *v22; // [rsp+30h] [rbp-48h]
  struct UCE_RDP_HEADER *v23[8]; // [rsp+38h] [rbp-40h] BYREF
  DirectComposition::CConnection *v25; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v21 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v20 = 0;
    v4 = v21;
  }
  else
  {
    v20 = -1073741811;
  }
  if ( v20 >= 0 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v6 )
    {
      v8 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      v9 = *(volatile signed __int32 **)(v6 + 24);
      if ( v9 && a1 == *(_QWORD *)(v6 + 16) )
      {
        _InterlockedAdd(v9, 1u);
        v25 = *(DirectComposition::CConnection **)(v6 + 24);
        v10 = 0;
        v4 = v21;
      }
      else
      {
        v10 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741823;
    }
    v20 = v10;
    if ( v10 >= 0 )
    {
      if ( v4 )
      {
        Batches = -1073741275;
        v12 = 0LL;
        v22 = 0LL;
        v13 = (char *)v25 + 200;
        ExAcquirePushLockSharedEx((char *)v25 + 200, 0LL);
        *((_BYTE *)v25 + 208) = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v25 + 24);
              i != (volatile signed __int32 *)((char *)v25 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 7) == v4 )
          {
            _InterlockedAdd(i - 2, 1u);
            v12 = i - 2;
            v22 = (DirectComposition::CCompositionFrame *)(i - 2);
            Batches = 0;
            break;
          }
        }
        if ( *((_BYTE *)v25 + 208) )
          ExReleasePushLockExclusiveEx(v13, 0LL);
        else
          ExReleasePushLockSharedEx(v13);
        if ( Batches >= 0 )
        {
          v16 = (struct _ERESOURCE *)*((_QWORD *)v25 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v16, 1u);
          if ( *((_DWORD *)v25 + 37) )
          {
            v12 = (volatile signed __int32 *)v22;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v25 + 36, 1, 2) == 2 )
            {
              v17 = *((_QWORD *)v22 + 10);
              *((_QWORD *)v22 + 10) = 0LL;
              v18 = (_QWORD *)*((_QWORD *)v25 + 14);
              if ( v18 )
              {
                while ( *v18 )
                  v18 = (_QWORD *)*v18;
                *v18 = v17;
              }
              else
              {
                *((_QWORD *)v25 + 14) = v17;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v25, v21, v23);
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
          ExReleaseResourceLite(*((PERESOURCE *)v25 + 1));
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
          {
            if ( v22 )
            {
              if ( *((_DWORD *)v22 + 18) != 3 )
                DirectComposition::CCompositionFrame::Discard(v22);
              Win32FreePool(v22);
            }
          }
        }
        v20 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v25, v23);
        v20 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v23[0];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF) == 1 && v25 )
        DirectComposition::CConnection::`scalar deleting destructor'(v25, v15);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v20;
}
