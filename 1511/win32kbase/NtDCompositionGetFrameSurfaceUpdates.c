/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C0072F78 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0074A40 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // edi
  DirectComposition::CConnection *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v10; // rdi
  int v11; // r15d
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdx
  char *v14; // rcx
  struct CSM_SURFACE_UPDATE *v15; // r15
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  CompositionSurfaceObject *v24; // r14
  const struct CFlipToken *v25; // rax
  volatile signed __int32 *v26; // r8
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  int SurfaceUpdate; // eax
  __int64 v32; // r9
  volatile signed __int32 *v33; // r8
  int v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  DirectComposition::CCompositionFrame *v37; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+90h] [rbp+8h]
  unsigned int v39; // [rsp+90h] [rbp+8h]
  int v40; // [rsp+A8h] [rbp+20h]
  int v41; // [rsp+A8h] [rbp+20h]

  v38 = 0;
  v40 = 0;
  if ( !a1 )
  {
    v5 = -1073741811;
    goto LABEL_43;
  }
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v36 = *a1;
  if ( *a1 )
    v5 = 0;
  else
    v5 = -1073741811;
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
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v10 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      v6 = *(DirectComposition::CConnection **)(v7 + 24);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)v6);
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    if ( !v6 )
    {
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        DirectComposition::CCriticalSection::AcquireExclusive((DirectComposition::CCriticalSection *)DirectComposition::CConnection::s_pSessionConnectionLock);
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
    v11 = -1073741275;
    v12 = 0LL;
    v37 = 0LL;
    ExAcquirePushLockSharedEx((char *)v6 + 200, 0LL);
    *((_BYTE *)v6 + 208) = 0;
    v13 = (volatile signed __int32 *)*((_QWORD *)v6 + 24);
    if ( v13 != (volatile signed __int32 *)((char *)v6 + 184) )
    {
      while ( *((_QWORD *)v13 + 7) != v36 )
      {
        v13 = (volatile signed __int32 *)*((_QWORD *)v13 + 1);
        if ( v13 == (volatile signed __int32 *)((char *)v6 + 184) )
          goto LABEL_20;
      }
      _InterlockedIncrement(v13 - 2);
      v12 = v13 - 2;
      v37 = (DirectComposition::CCompositionFrame *)(v13 - 2);
      v11 = 0;
    }
LABEL_20:
    v14 = (char *)v6 + 200;
    if ( *((_BYTE *)v6 + 208) )
      ExReleasePushLockExclusiveEx(v14);
    else
      ExReleasePushLockSharedEx(v14);
    v34 = v11;
    if ( v11 < 0 )
    {
LABEL_39:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v6);
      v5 = v34;
      goto LABEL_42;
    }
    v15 = 0LL;
    v16 = 0LL;
    if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 2) )
    {
      v15 = (struct CSM_SURFACE_UPDATE *)*((_QWORD *)g_pTokenManager + 2);
      v16 = *((_QWORD *)g_pTokenManager + 3);
      v17 = 0;
    }
    else
    {
      v17 = -1073741823;
    }
    v34 = v17;
    if ( v17 < 0 )
    {
LABEL_38:
      if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 && v37 )
      {
        if ( *((_DWORD *)v37 + 18) != 3 )
          DirectComposition::CCompositionFrame::Discard(v37);
        Win32FreePool();
      }
      goto LABEL_39;
    }
    v18 = v16 / 0x108;
    v41 = v18;
    v19 = 0;
    v20 = 0LL;
    v39 = 0;
    if ( !*((_DWORD *)v12 + 32) )
    {
      if ( !*((_QWORD *)v12 + 13) )
      {
        v21 = v12 + 34;
        if ( (_QWORD *)*v21 != v21 )
        {
          *((_QWORD *)v12 + 13) = *v21 - 8LL;
          *((_DWORD *)v12 + 30) = 1;
        }
      }
      v19 = *((_DWORD *)v12 + 30);
      if ( !v19 )
        goto LABEL_32;
      do
      {
        if ( !(_DWORD)v18 )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v12 + 13) + 72LL))(
               *((_QWORD *)v12 + 13),
               v20)
          && (v24 = *(CompositionSurfaceObject **)(*((_QWORD *)v12 + 13) + 32LL),
              CompositionSurfaceObject::GetSurfaceUpdate(v24, *((_QWORD *)v12 + 8), v15) >= 0) )
        {
          v25 = CFlipToken::FromToken(*((const struct CToken **)v12 + 13));
          if ( v25 )
            EtwTraceCompositionSurfaceObjectUpdateEvent(v24, *((unsigned int *)v25 + 25));
          v15 = (struct CSM_SURFACE_UPDATE *)((char *)v15 + 264);
          LODWORD(v18) = --v41;
          v20 = ++v39;
        }
        else
        {
          v20 = v39;
          LODWORD(v18) = v41;
        }
        v26 = *(volatile signed __int32 **)(*((_QWORD *)v12 + 13) + 8LL);
        if ( v26 == v12 + 34 )
        {
          *((_DWORD *)v12 + 30) = 0;
          *((_QWORD *)v12 + 13) = 0LL;
        }
        else
        {
          *((_QWORD *)v12 + 13) = v26 - 2;
        }
        v19 = *((_DWORD *)v12 + 30);
      }
      while ( v19 );
    }
    if ( v19 )
    {
LABEL_37:
      v38 = v20;
      v40 = v19;
      goto LABEL_38;
    }
LABEL_32:
    *((_DWORD *)v12 + 32) = 1;
    if ( !*((_QWORD *)v12 + 14) )
    {
      v22 = v12 + 38;
      if ( (_QWORD *)*v22 != v22 )
      {
        *((_QWORD *)v12 + 14) = *v22;
        *((_DWORD *)v12 + 31) = 1;
      }
    }
    v19 = *((_DWORD *)v12 + 31);
    if ( !v19 )
      goto LABEL_36;
    do
    {
      if ( !(_DWORD)v18 )
        break;
      v27 = *((_QWORD *)v12 + 14) - 40LL;
      v35 = v27;
      v28 = 0LL;
      v29 = *(_DWORD *)(v27 + 104);
      if ( *(_DWORD *)(v27 + 120) == v29 )
        *(_DWORD *)(v27 + 120) = 0;
      v30 = *(_DWORD *)(v27 + 120);
      if ( v30 < v29 )
        v28 = *(_QWORD *)(v27 + 96) + 32LL * v30;
      if ( v28 )
      {
        do
        {
          if ( !(_DWORD)v18 )
            break;
          SurfaceUpdate = CompositionSurfaceObject::GetSurfaceUpdate(
                            *(CompositionSurfaceObject **)(v28 + 8),
                            *((_QWORD *)v12 + 8),
                            v15);
          LODWORD(v18) = v41;
          LODWORD(v20) = v39;
          if ( SurfaceUpdate >= 0 )
          {
            v15 = (struct CSM_SURFACE_UPDATE *)((char *)v15 + 264);
            LODWORD(v18) = --v41;
            LODWORD(v20) = ++v39;
          }
          v28 = 0LL;
          v32 = (unsigned int)++*(_DWORD *)(v35 + 120);
          if ( (unsigned int)v32 < *(_DWORD *)(v35 + 104) )
            v28 = *(_QWORD *)(v35 + 96) + 32 * v32;
        }
        while ( v28 );
        if ( v28 && !(_DWORD)v18 )
          break;
      }
      v33 = (volatile signed __int32 *)**((_QWORD **)v12 + 14);
      if ( v33 == v12 + 38 )
      {
        *((_DWORD *)v12 + 31) = 0;
        *((_QWORD *)v12 + 14) = 0LL;
      }
      else
      {
        *((_QWORD *)v12 + 14) = v33;
      }
      v19 = *((_DWORD *)v12 + 31);
    }
    while ( v19 );
    if ( !v19 )
LABEL_36:
      *((_DWORD *)v12 + 32) = 0;
    goto LABEL_37;
  }
LABEL_43:
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v38;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v40;
  return (unsigned int)v5;
}
