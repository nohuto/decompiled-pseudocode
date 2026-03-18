/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C0045800
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002BF0 (Win32FreePoolImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  int v11; // ebx
  DirectComposition::CCompositionFrame *v12; // rbx
  int v13; // r14d
  char *v14; // rsi
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // r15
  volatile signed __int32 *i; // rcx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rdx
  volatile signed __int32 **v20; // rax
  unsigned int v21; // edx
  __int64 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v26; // [rsp+70h] [rbp+18h]
  DirectComposition::CCompositionFrame *v27; // [rsp+78h] [rbp+20h]

  v26 = 0LL;
  v24 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v24 = *a2;
    LODWORD(v23) = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    LODWORD(v23) = -1073741811;
  }
  if ( (int)v23 >= 0 )
  {
    KeEnterCriticalRegion();
    v3 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6, v7, v23, v24);
    if ( CurrentProcessWin32Process )
      v3 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v3 )
    {
      v9 = *(struct _ERESOURCE **)(v3 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v9, 1u);
      v10 = *(volatile signed __int32 **)(v3 + 24);
      if ( v10 && a1 == *(_QWORD *)(v3 + 16) )
      {
        _InterlockedIncrement(v10);
        v26 = *(DirectComposition::CConnection **)(v3 + 24);
        v11 = 0;
      }
      else
      {
        v11 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v3 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v11 = -1073741823;
    }
    LODWORD(v23) = v11;
    if ( v11 >= 0 )
    {
      v12 = 0LL;
      v13 = -1073741275;
      v27 = 0LL;
      v14 = (char *)v26 + 200;
      ExAcquirePushLockSharedEx((char *)v26 + 200, 0LL);
      *((_BYTE *)v26 + 208) = 0;
      v15 = (volatile signed __int32 *)*((_QWORD *)v26 + 24);
      v16 = (volatile signed __int32 *)((char *)v26 + 184);
      while ( v15 != v16 )
      {
        if ( *((_QWORD *)v15 + 7) == v25 )
        {
          _InterlockedIncrement(v15 - 2);
          v12 = (DirectComposition::CCompositionFrame *)(v15 - 2);
          v27 = (DirectComposition::CCompositionFrame *)(v15 - 2);
          v13 = 0;
          break;
        }
        v15 = (volatile signed __int32 *)*((_QWORD *)v15 + 1);
      }
      if ( *((_BYTE *)v26 + 208) )
        ExReleasePushLockExclusiveEx(v14, 0LL);
      else
        ExReleasePushLockSharedEx(v14, 0LL);
      LODWORD(v23) = v13;
      if ( v13 >= 0 )
      {
        DirectComposition::CCompositionFrame::Discard(v12);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
        {
          if ( v27 )
          {
            if ( *((_DWORD *)v27 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v27);
            Win32FreePool();
          }
        }
      }
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      *((_BYTE *)v26 + 208) = 1;
      for ( i = (volatile signed __int32 *)*((_QWORD *)v26 + 24);
            i != v16;
            i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
      {
        v18 = i - 2;
        if ( *((_QWORD *)i + 7) == v25 )
        {
          v19 = *(_QWORD *)i;
          v20 = (volatile signed __int32 **)*((_QWORD *)i + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)i + 8LL) != i || *v20 != i )
            __fastfail(3u);
          *v20 = (volatile signed __int32 *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v18 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(i - 2));
            if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
              Win32FreePoolImpl_0();
          }
          break;
        }
      }
      if ( *((_BYTE *)v26 + 208) )
        ExReleasePushLockExclusiveEx(v14, 0LL);
      else
        ExReleasePushLockSharedEx(v14, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v26, v21);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v23;
}
