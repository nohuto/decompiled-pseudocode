/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C0019420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00198A8 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, unsigned int *a2, int *a3)
{
  __int64 v5; // rdi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // rsi
  DirectComposition::CCompositionFrame *v8; // r14
  char *v9; // r15
  volatile signed __int32 *i; // rcx
  int v11; // edi
  struct CSM_SURFACE_UPDATE *v12; // r10
  unsigned __int64 v13; // rcx
  int v14; // eax
  signed int v16; // [rsp+20h] [rbp-68h]
  DirectComposition::CCompositionFrame *v17; // [rsp+30h] [rbp-58h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v19; // [rsp+98h] [rbp+10h]
  int *v20; // [rsp+A0h] [rbp+18h]
  int SurfaceUpdates; // [rsp+A8h] [rbp+20h]

  v20 = a3;
  v19 = a2;
  v18 = 0;
  SurfaceUpdates = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a1 + 8 < a1 || a1 + 8 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v5 = *(_QWORD *)a1;
    a1 = *(_QWORD *)a1 == 0LL ? 0xC000000D : 0;
    v16 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v7 = DefaultConnection;
      if ( DefaultConnection )
      {
        v8 = 0LL;
        v17 = 0LL;
        v9 = (char *)DefaultConnection + 200;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
        v9[8] = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v7 + 24);
              i != (volatile signed __int32 *)((char *)v7 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 7) == v5 )
          {
            _InterlockedIncrement(i - 2);
            v8 = (DirectComposition::CCompositionFrame *)(i - 2);
            v17 = (DirectComposition::CCompositionFrame *)(i - 2);
            v11 = 0;
            goto LABEL_13;
          }
        }
        v11 = -1073741275;
LABEL_13:
        if ( v9[8] )
          ExReleasePushLockExclusiveEx(v9, 0LL);
        else
          ExReleasePushLockSharedEx(v9);
        v16 = v11;
        if ( v11 >= 0 )
        {
          v12 = 0LL;
          v13 = 0LL;
          if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 2) )
          {
            v12 = (struct CSM_SURFACE_UPDATE *)*((_QWORD *)g_pTokenManager + 2);
            v13 = *((_QWORD *)g_pTokenManager + 3);
            v14 = 0;
          }
          else
          {
            v14 = -1073741823;
          }
          v16 = v14;
          if ( v14 >= 0 )
            SurfaceUpdates = DirectComposition::CCompositionFrame::GetSurfaceUpdates(v8, v12, v13 / 0xC8, &v18);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 && v17 )
          {
            if ( *((_DWORD *)v17 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v17);
            Win32FreePool(v17);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7);
      }
      else
      {
        v16 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v16 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v18;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = SurfaceUpdates;
  return (unsigned int)v16;
}
