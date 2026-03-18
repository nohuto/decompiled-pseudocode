/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C0045A60
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002BF0 (Win32FreePoolImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00476B0 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C006B374 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00706F4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(__int64 a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rbx
  volatile signed __int32 *v13; // rax
  char *v14; // rbx
  volatile signed __int32 *v15; // rax
  volatile signed __int32 *v16; // r12
  int v17; // edi
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rcx
  unsigned int v20; // edx
  volatile signed __int32 *i; // r15
  CLegacyTokenBuffer *v22; // rdi
  volatile signed __int32 *v23; // rax
  DirectComposition::CCompositionFrame *v24; // rsi
  __int64 v25; // rdx
  volatile signed __int32 **v26; // rcx
  unsigned int v27; // edx
  CTokenManager *v29; // r15
  CLegacyTokenBuffer *v30; // rcx
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-98h]
  int v35; // [rsp+20h] [rbp-98h]
  unsigned __int64 v36; // [rsp+28h] [rbp-90h]
  unsigned __int64 v37; // [rsp+28h] [rbp-90h]
  DirectComposition::CConnection *v38; // [rsp+38h] [rbp-80h]
  DirectComposition::CCompositionFrame *v39; // [rsp+40h] [rbp-78h]
  __int128 v40; // [rsp+58h] [rbp-60h]
  _OWORD v41[2]; // [rsp+68h] [rbp-50h] BYREF

  if ( !a2 || !a3 )
    return (unsigned int)-1073741811;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v4 = *a2;
  v36 = *a2;
  if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
    a3 = (_OWORD *)MmUserProbeAddress;
  v40 = a3[1];
  v41[0] = *a3;
  v41[1] = v40;
  if ( v4 )
    v5 = 0;
  else
    v5 = -1073741811;
  LODWORD(v34) = v5;
  if ( v5 >= 0 )
  {
    v38 = 0LL;
    KeEnterCriticalRegion();
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v34, v36);
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
        v38 = *(DirectComposition::CConnection **)(v6 + 24);
        v5 = 0;
        v4 = v37;
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
    if ( v5 < 0 )
    {
LABEL_49:
      KeLeaveCriticalRegion();
      return (unsigned int)v5;
    }
    v14 = (char *)v38 + 200;
    ExAcquirePushLockExclusiveEx((char *)v38 + 200, 0LL);
    *((_BYTE *)v38 + 208) = 1;
    v15 = (volatile signed __int32 *)*((_QWORD *)v38 + 24);
    v16 = (volatile signed __int32 *)((char *)v38 + 184);
    if ( v15 != (volatile signed __int32 *)((char *)v38 + 184) )
    {
      do
      {
        if ( *((_QWORD *)v15 + 7) >= v4 )
          break;
        v32 = (volatile signed __int32 *)*((_QWORD *)v15 + 1);
        v33 = *(_QWORD *)v15;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15 || *(volatile signed __int32 **)v32 != v15 )
          __fastfail(3u);
        *(_QWORD *)v32 = v33;
        *(_QWORD *)(v33 + 8) = v32;
        DirectComposition::CCompositionFrame::Release((DirectComposition::CCompositionFrame *)(v15 - 2));
        v15 = v32;
      }
      while ( v32 != v16 );
    }
    if ( *((_BYTE *)v38 + 208) )
      ExReleasePushLockExclusiveEx(v14, 0LL);
    else
      ExReleasePushLockSharedEx(v14, 0LL);
    v17 = -1073741275;
    v18 = 0LL;
    v39 = 0LL;
    ExAcquirePushLockSharedEx(v14, 0LL);
    *((_BYTE *)v38 + 208) = 0;
    v19 = (volatile signed __int32 *)*((_QWORD *)v38 + 24);
    if ( v19 != v16 )
    {
      while ( *((_QWORD *)v19 + 7) != v4 )
      {
        v19 = (volatile signed __int32 *)*((_QWORD *)v19 + 1);
        if ( v19 == v16 )
          goto LABEL_28;
      }
      _InterlockedIncrement(v19 - 2);
      v18 = v19 - 2;
      v39 = (DirectComposition::CCompositionFrame *)(v19 - 2);
      v17 = 0;
      v4 = v37;
    }
LABEL_28:
    if ( *((_BYTE *)v38 + 208) )
      ExReleasePushLockExclusiveEx(v14, 0LL);
    else
      ExReleasePushLockSharedEx(v14, 0LL);
    v35 = v17;
    if ( v17 < 0 )
    {
LABEL_35:
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      *((_BYTE *)v38 + 208) = 1;
      v23 = (volatile signed __int32 *)*((_QWORD *)v38 + 24);
      if ( v23 != v16 )
      {
        while ( 1 )
        {
          v24 = (DirectComposition::CCompositionFrame *)(v23 - 2);
          if ( *((_QWORD *)v23 + 7) == v4 )
            break;
          v23 = (volatile signed __int32 *)*((_QWORD *)v23 + 1);
          if ( v23 == v16 )
            goto LABEL_44;
        }
        v25 = *(_QWORD *)v23;
        v26 = (volatile signed __int32 **)*((_QWORD *)v23 + 1);
        if ( *(volatile signed __int32 **)(*(_QWORD *)v23 + 8LL) != v23 || *v26 != v23 )
          __fastfail(3u);
        *v26 = (volatile signed __int32 *)v25;
        *(_QWORD *)(v25 + 8) = v26;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24, 0xFFFFFFFF) == 1 )
        {
          if ( *((_DWORD *)v24 + 18) != 3 )
            DirectComposition::CCompositionFrame::Discard(v24);
          if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
            Win32FreePoolImpl_0();
        }
      }
LABEL_44:
      if ( *((_BYTE *)v38 + 208) )
        ExReleasePushLockExclusiveEx(v14, 0LL);
      else
        ExReleasePushLockSharedEx(v14, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v38, v27);
      v5 = v35;
      goto LABEL_49;
    }
    *((_DWORD *)v18 + 18) = 2;
    for ( i = (volatile signed __int32 *)*((_QWORD *)v18 + 17); i != v18 + 34; i = *(volatile signed __int32 **)i )
      (*(void (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)i - 1) + 48LL))((_QWORD *)i - 1, v41);
    v22 = (CLegacyTokenBuffer *)*((_QWORD *)v18 + 11);
    if ( !v22 )
    {
LABEL_33:
      *((_DWORD *)v18 + 24) = 0;
      if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
      {
        if ( *((_DWORD *)v18 + 18) != 3 )
          DirectComposition::CCompositionFrame::Discard(v39);
        Win32FreePool();
      }
      v4 = v37;
      goto LABEL_35;
    }
    v29 = g_pTokenManager;
    v30 = (CLegacyTokenBuffer *)*((_QWORD *)v18 + 11);
    if ( g_pTokenManager )
    {
      CLegacyTokenBuffer::Reset(v30);
      if ( *((_DWORD *)v29 + 20) <= 3u )
      {
        ExAcquirePushLockExclusiveEx((char *)v29 + 56, 0LL);
        v31 = *((_QWORD *)v29 + 8);
        *(_QWORD *)v22 = v31;
        *((_QWORD *)v22 + 1) = (char *)v29 + 64;
        if ( *(CTokenManager **)(v31 + 8) != (CTokenManager *)((char *)v29 + 64) )
          __fastfail(3u);
        *(_QWORD *)(v31 + 8) = v22;
        *((_QWORD *)v29 + 8) = v22;
        ++*((_DWORD *)v29 + 20);
        ExReleasePushLockExclusiveEx((char *)v29 + 56, 0LL);
        goto LABEL_55;
      }
      v30 = v22;
    }
    CLegacyTokenBuffer::`scalar deleting destructor'(v30, v20);
LABEL_55:
    *((_QWORD *)v18 + 11) = 0LL;
    goto LABEL_33;
  }
  return (unsigned int)v5;
}
