/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C003A8A0
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C003D2B8 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C003D8A4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00A89F4 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(__int64 a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  char *v11; // rbx
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // r12
  int v14; // edi
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rcx
  unsigned int v17; // edx
  volatile signed __int32 *i; // r15
  CTokenManager *v19; // rcx
  volatile signed __int32 *v20; // rax
  DirectComposition::CCompositionFrame *v21; // rsi
  __int64 v22; // rdx
  volatile signed __int32 **v23; // rcx
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+28h] [rbp-90h]
  DirectComposition::CConnection *v28; // [rsp+38h] [rbp-80h]
  DirectComposition::CCompositionFrame *v29; // [rsp+40h] [rbp-78h]
  __int128 v30; // [rsp+58h] [rbp-60h]
  _OWORD v31[2]; // [rsp+68h] [rbp-50h] BYREF

  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v4 = *a2;
    v27 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v30 = a3[1];
    v31[0] = *a3;
    v31[1] = v30;
    if ( v4 )
      v5 = 0;
    else
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      v28 = 0LL;
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
          v28 = *(DirectComposition::CConnection **)(v6 + 24);
          v5 = 0;
          v4 = v27;
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
        v11 = (char *)v28 + 200;
        ExAcquirePushLockExclusiveEx((char *)v28 + 200, 0LL);
        *((_BYTE *)v28 + 208) = 1;
        v12 = (volatile signed __int32 *)*((_QWORD *)v28 + 24);
        v13 = (volatile signed __int32 *)((char *)v28 + 184);
        if ( v12 != (volatile signed __int32 *)((char *)v28 + 184) )
        {
          do
          {
            if ( *((_QWORD *)v12 + 7) >= v4 )
              break;
            v25 = (volatile signed __int32 *)*((_QWORD *)v12 + 1);
            v26 = *(_QWORD *)v12;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v12 + 8LL) != v12 || *(volatile signed __int32 **)v25 != v12 )
              __fastfail(3u);
            *(_QWORD *)v25 = v26;
            *(_QWORD *)(v26 + 8) = v25;
            DirectComposition::CCompositionFrame::Release((DirectComposition::CCompositionFrame *)(v12 - 2));
            v12 = v25;
          }
          while ( v25 != v13 );
        }
        if ( *((_BYTE *)v28 + 208) )
          ExReleasePushLockExclusiveEx(v11);
        else
          ExReleasePushLockSharedEx(v11);
        v14 = -1073741275;
        v15 = 0LL;
        v29 = 0LL;
        ExAcquirePushLockSharedEx(v11, 0LL);
        *((_BYTE *)v28 + 208) = 0;
        v16 = (volatile signed __int32 *)*((_QWORD *)v28 + 24);
        if ( v16 != v13 )
        {
          while ( *((_QWORD *)v16 + 7) != v4 )
          {
            v16 = (volatile signed __int32 *)*((_QWORD *)v16 + 1);
            if ( v16 == v13 )
              goto LABEL_28;
          }
          _InterlockedIncrement(v16 - 2);
          v15 = v16 - 2;
          v29 = (DirectComposition::CCompositionFrame *)(v16 - 2);
          v14 = 0;
          v4 = v27;
        }
LABEL_28:
        if ( *((_BYTE *)v28 + 208) )
          ExReleasePushLockExclusiveEx(v11);
        else
          ExReleasePushLockSharedEx(v11);
        if ( v14 >= 0 )
        {
          *((_DWORD *)v15 + 18) = 2;
          for ( i = (volatile signed __int32 *)*((_QWORD *)v15 + 17); i != v15 + 34; i = *(volatile signed __int32 **)i )
            (*(void (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)i - 1) + 48LL))((_QWORD *)i - 1, v31);
          v19 = (CTokenManager *)*((_QWORD *)v15 + 11);
          if ( v19 )
          {
            if ( g_pTokenManager )
              CTokenManager::ReturnLegacyTokenBufferInternal(v19, *((struct CLegacyTokenBuffer **)v15 + 11));
            else
              CLegacyTokenBuffer::`scalar deleting destructor'(v19, v17);
            *((_QWORD *)v15 + 11) = 0LL;
          }
          *((_DWORD *)v15 + 24) = 0;
          if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v15 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v29);
            Win32FreePool();
          }
          v4 = v27;
        }
        ExAcquirePushLockExclusiveEx(v11, 0LL);
        *((_BYTE *)v28 + 208) = 1;
        v20 = (volatile signed __int32 *)*((_QWORD *)v28 + 24);
        if ( v20 != v13 )
        {
          while ( 1 )
          {
            v21 = (DirectComposition::CCompositionFrame *)(v20 - 2);
            if ( *((_QWORD *)v20 + 7) == v4 )
              break;
            v20 = (volatile signed __int32 *)*((_QWORD *)v20 + 1);
            if ( v20 == v13 )
              goto LABEL_44;
          }
          v22 = *(_QWORD *)v20;
          v23 = (volatile signed __int32 **)*((_QWORD *)v20 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v20 + 8LL) != v20 || *v23 != v20 )
            __fastfail(3u);
          *v23 = (volatile signed __int32 *)v22;
          *(_QWORD *)(v22 + 8) = v23;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v21 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v21);
            if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
              Win32FreePoolImpl_0();
          }
        }
LABEL_44:
        if ( *((_BYTE *)v28 + 208) )
          ExReleasePushLockExclusiveEx(v11);
        else
          ExReleasePushLockSharedEx(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v28);
        v5 = v14;
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
