/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C003AC20
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v7; // rbx
  volatile signed __int32 *v8; // rax
  DirectComposition::CCompositionFrame *v9; // rsi
  char *v10; // rdi
  volatile signed __int32 *v11; // rdx
  volatile signed __int32 *v12; // r15
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rdx
  volatile signed __int32 **v16; // rax
  __int64 v18; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v19; // [rsp+70h] [rbp+18h]
  DirectComposition::CCompositionFrame *v20; // [rsp+78h] [rbp+20h]

  v19 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v18 = *a2;
    if ( *a2 )
      v3 = 0;
    else
      v3 = -1073741811;
    if ( v3 >= 0 )
    {
      KeEnterCriticalRegion();
      v4 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      if ( CurrentProcessWin32Process )
        v4 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v4 )
      {
        v7 = *(struct _ERESOURCE **)(v4 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v7, 1u);
        v8 = *(volatile signed __int32 **)(v4 + 24);
        if ( v8 && a1 == *(_QWORD *)(v4 + 16) )
        {
          _InterlockedIncrement(v8);
          v19 = *(DirectComposition::CConnection **)(v4 + 24);
          v3 = 0;
        }
        else
        {
          v3 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v3 = -1073741823;
      }
      if ( v3 >= 0 )
      {
        v3 = -1073741275;
        v9 = 0LL;
        v20 = 0LL;
        v10 = (char *)v19 + 200;
        ExAcquirePushLockSharedEx((char *)v19 + 200, 0LL);
        *((_BYTE *)v19 + 208) = 0;
        v11 = (volatile signed __int32 *)*((_QWORD *)v19 + 24);
        v12 = (volatile signed __int32 *)((char *)v19 + 184);
        if ( v11 != (volatile signed __int32 *)((char *)v19 + 184) )
        {
          while ( *((_QWORD *)v11 + 7) != v18 )
          {
            v11 = (volatile signed __int32 *)*((_QWORD *)v11 + 1);
            if ( v11 == v12 )
              goto LABEL_20;
          }
          _InterlockedIncrement(v11 - 2);
          v9 = (DirectComposition::CCompositionFrame *)(v11 - 2);
          v20 = (DirectComposition::CCompositionFrame *)(v11 - 2);
          v3 = 0;
        }
LABEL_20:
        if ( *((_BYTE *)v19 + 208) )
          ExReleasePushLockExclusiveEx(v10);
        else
          ExReleasePushLockSharedEx(v10);
        if ( v3 >= 0 )
        {
          DirectComposition::CCompositionFrame::Discard(v9);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
          {
            if ( v20 )
            {
              if ( *((_DWORD *)v20 + 18) != 3 )
                DirectComposition::CCompositionFrame::Discard(v20);
              Win32FreePool();
            }
          }
        }
        ExAcquirePushLockExclusiveEx(v10, 0LL);
        *((_BYTE *)v19 + 208) = 1;
        v13 = (volatile signed __int32 *)*((_QWORD *)v19 + 24);
        if ( v13 != v12 )
        {
          while ( 1 )
          {
            v14 = v13 - 2;
            if ( *((_QWORD *)v13 + 7) == v18 )
              break;
            v13 = (volatile signed __int32 *)*((_QWORD *)v13 + 1);
            if ( v13 == v12 )
              goto LABEL_33;
          }
          v15 = *(_QWORD *)v13;
          v16 = (volatile signed __int32 **)*((_QWORD *)v13 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v13 + 8LL) != v13 || *v16 != v13 )
            __fastfail(3u);
          *v16 = (volatile signed __int32 *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v14 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(v13 - 2));
            if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
              Win32FreePoolImpl_0();
          }
        }
LABEL_33:
        if ( *((_BYTE *)v19 + 208) )
          ExReleasePushLockExclusiveEx(v10);
        else
          ExReleasePushLockSharedEx(v10);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v19);
      }
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
