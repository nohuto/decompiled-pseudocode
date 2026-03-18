/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C004C380
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048418 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048838 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C004C8C0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C004C8D8 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // edi
  struct DirectComposition::CConnection *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rdi
  int v14; // r15d
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdx
  char *v17; // rcx
  __int64 v18; // rdx
  struct CSM_SURFACE_UPDATE *v19; // r15
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v23; // r14d
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int SurfaceUpdate; // r14d
  const struct CFlipToken *v28; // rax
  volatile signed __int32 *v29; // r8
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r10d
  unsigned int v33; // r9d
  int v34; // eax
  __int64 v35; // r9
  volatile signed __int32 *v36; // r8
  __int64 v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+28h] [rbp-70h]
  CPushLock *v41; // [rsp+30h] [rbp-68h]
  DirectComposition::CCompositionFrame *v42; // [rsp+38h] [rbp-60h]
  __int64 v43; // [rsp+40h] [rbp-58h]
  unsigned __int64 v44; // [rsp+50h] [rbp-48h]
  int v45; // [rsp+A0h] [rbp+8h]
  unsigned int v46; // [rsp+A0h] [rbp+8h]
  int v47; // [rsp+B8h] [rbp+20h]
  int v48; // [rsp+B8h] [rbp+20h]

  v45 = 0;
  v47 = 0;
  if ( !a1 )
  {
    v5 = -1073741811;
    goto LABEL_43;
  }
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v43 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    LODWORD(v37) = 0;
  }
  else
  {
    v5 = -1073741811;
    LODWORD(v37) = -1073741811;
  }
  if ( v5 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, MmUserProbeAddress) != g_pepDwm )
    {
      v5 = -1073741790;
      goto LABEL_43;
    }
    KeEnterCriticalRegion();
    v6 = 0LL;
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v37, v39);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v13 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      v6 = *(struct DirectComposition::CConnection **)(v7 + 24);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)v6);
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    if ( !v6 )
    {
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CConnection::s_pSessionConnectionLock);
        v6 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( !v6 )
      {
        v5 = -1073741790;
LABEL_42:
        KeLeaveCriticalRegion();
        goto LABEL_43;
      }
    }
    v14 = -1073741275;
    v15 = 0LL;
    v42 = 0LL;
    ExAcquirePushLockSharedEx((char *)v6 + 200, 0LL);
    *((_BYTE *)v6 + 208) = 0;
    v16 = (volatile signed __int32 *)*((_QWORD *)v6 + 24);
    if ( v16 != (volatile signed __int32 *)((char *)v6 + 184) )
    {
      while ( *((_QWORD *)v16 + 7) != v43 )
      {
        v16 = (volatile signed __int32 *)*((_QWORD *)v16 + 1);
        if ( v16 == (volatile signed __int32 *)((char *)v6 + 184) )
          goto LABEL_20;
      }
      _InterlockedIncrement(v16 - 2);
      v15 = v16 - 2;
      v42 = (DirectComposition::CCompositionFrame *)(v16 - 2);
      v14 = 0;
    }
LABEL_20:
    v17 = (char *)v6 + 200;
    if ( *((_BYTE *)v6 + 208) )
      ExReleasePushLockExclusiveEx(v17, 0LL);
    else
      ExReleasePushLockSharedEx(v17, 0LL);
    v38 = v14;
    if ( v14 < 0 )
    {
LABEL_39:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v6, v18);
      v5 = v38;
      goto LABEL_42;
    }
    v19 = 0LL;
    v20 = 0LL;
    if ( g_pTokenManager && (v18 = *((_QWORD *)g_pTokenManager + 1)) != 0 )
    {
      v19 = (struct CSM_SURFACE_UPDATE *)*((_QWORD *)g_pTokenManager + 1);
      v20 = *((_QWORD *)g_pTokenManager + 2);
      v21 = 0;
    }
    else
    {
      v21 = -1073741823;
    }
    v38 = v21;
    if ( v21 < 0 )
    {
LABEL_38:
      if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 && v42 )
      {
        if ( *((_DWORD *)v42 + 18) != 3 )
          DirectComposition::CCompositionFrame::Discard(v42, v18);
        Win32FreePool();
      }
      goto LABEL_39;
    }
    v22 = v20 / 0x108;
    v48 = v22;
    v23 = 0;
    v18 = 0LL;
    v46 = 0;
    if ( !*((_DWORD *)v15 + 32) )
    {
      if ( !*((_QWORD *)v15 + 13) )
      {
        v24 = v15 + 34;
        if ( (_QWORD *)*v24 != v24 )
        {
          *((_QWORD *)v15 + 13) = *v24 - 8LL;
          *((_DWORD *)v15 + 30) = 1;
        }
      }
      v23 = *((_DWORD *)v15 + 30);
      if ( !v23 )
        goto LABEL_32;
      do
      {
        if ( !(_DWORD)v22 )
          break;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v15 + 13) + 72LL))(
                *((_QWORD *)v15 + 13),
                v18) )
          goto LABEL_64;
        v40 = *(_QWORD *)(*((_QWORD *)v15 + 13) + 32LL);
        v44 = *((_QWORD *)v15 + 8);
        SurfaceUpdate = CPushLock::AcquireLockShared((CPushLock *)(v40 + 32));
        if ( SurfaceUpdate >= 0 )
        {
          SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v40 + 24), v44, v19);
          CPushLock::ReleaseLock((CPushLock *)(v40 + 32));
        }
        if ( SurfaceUpdate >= 0 )
        {
          v28 = CFlipToken::FromToken(*((const struct CToken **)v15 + 13));
          if ( v28 )
            EtwTraceCompositionSurfaceObjectUpdateEvent(v40, *((unsigned int *)v28 + 25));
          v19 = (struct CSM_SURFACE_UPDATE *)((char *)v19 + 264);
          LODWORD(v22) = --v48;
          v18 = ++v46;
        }
        else
        {
LABEL_64:
          v18 = v46;
          LODWORD(v22) = v48;
        }
        v29 = *(volatile signed __int32 **)(*((_QWORD *)v15 + 13) + 8LL);
        if ( v29 == v15 + 34 )
        {
          *((_DWORD *)v15 + 30) = 0;
          *((_QWORD *)v15 + 13) = 0LL;
        }
        else
        {
          *((_QWORD *)v15 + 13) = v29 - 2;
        }
        v23 = *((_DWORD *)v15 + 30);
      }
      while ( v23 );
    }
    if ( v23 )
    {
LABEL_37:
      v45 = v18;
      v47 = v23;
      goto LABEL_38;
    }
LABEL_32:
    *((_DWORD *)v15 + 32) = 1;
    if ( !*((_QWORD *)v15 + 14) )
    {
      v25 = v15 + 38;
      if ( (_QWORD *)*v25 != v25 )
      {
        *((_QWORD *)v15 + 14) = *v25;
        *((_DWORD *)v15 + 31) = 1;
      }
    }
    v23 = *((_DWORD *)v15 + 31);
    if ( !v23 )
      goto LABEL_36;
    do
    {
      if ( !(_DWORD)v22 )
        break;
      v30 = *((_QWORD *)v15 + 14) - 40LL;
      v41 = (CPushLock *)v30;
      v31 = 0LL;
      v32 = *(_DWORD *)(v30 + 104);
      if ( *(_DWORD *)(v30 + 120) == v32 )
        *(_DWORD *)(v30 + 120) = 0;
      v33 = *(_DWORD *)(v30 + 120);
      if ( v33 < v32 )
        v31 = *(_QWORD *)(v30 + 96) + 32LL * v33;
      if ( v31 )
      {
        do
        {
          if ( !(_DWORD)v22 )
            break;
          v34 = CompositionSurfaceObject::GetSurfaceUpdate(
                  *(CompositionSurfaceObject **)(v31 + 8),
                  *((_QWORD *)v15 + 8),
                  v19);
          LODWORD(v22) = v48;
          LODWORD(v18) = v46;
          if ( v34 >= 0 )
          {
            v19 = (struct CSM_SURFACE_UPDATE *)((char *)v19 + 264);
            LODWORD(v22) = --v48;
            LODWORD(v18) = ++v46;
          }
          v31 = 0LL;
          v35 = (unsigned int)++*((_DWORD *)v41 + 30);
          if ( (unsigned int)v35 < *((_DWORD *)v41 + 26) )
            v31 = *((_QWORD *)v41 + 12) + 32 * v35;
        }
        while ( v31 );
        if ( v31 && !(_DWORD)v22 )
          break;
      }
      v36 = (volatile signed __int32 *)**((_QWORD **)v15 + 14);
      if ( v36 == v15 + 38 )
      {
        *((_DWORD *)v15 + 31) = 0;
        *((_QWORD *)v15 + 14) = 0LL;
      }
      else
      {
        *((_QWORD *)v15 + 14) = v36;
      }
      v23 = *((_DWORD *)v15 + 31);
    }
    while ( v23 );
    if ( !v23 )
LABEL_36:
      *((_DWORD *)v15 + 32) = 0;
    goto LABEL_37;
  }
LABEL_43:
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v45;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v47;
  return (unsigned int)v5;
}
