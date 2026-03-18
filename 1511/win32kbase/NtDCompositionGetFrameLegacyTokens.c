/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C003C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z @ 0x1C003D76C (-GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // edi
  DirectComposition::CConnection *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v10; // rdi
  int v11; // r15d
  volatile signed __int32 *v12; // r14
  volatile signed __int32 *v13; // rdx
  char *v14; // rcx
  unsigned __int8 *v15; // rdx
  char *v16; // r15
  unsigned __int64 v17; // r11
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v22; // rdi
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+24h] [rbp-74h]
  unsigned int v25; // [rsp+28h] [rbp-70h] BYREF
  int v26; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v27; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v28; // [rsp+38h] [rbp-60h] BYREF
  char *v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  DirectComposition::CCompositionFrame *v31; // [rsp+50h] [rbp-48h]
  int v32; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+B8h] [rbp+20h] BYREF

  v32 = 0;
  v26 = 0;
  v30 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v30 = *a1;
    if ( v30 )
      v5 = 0;
    else
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      if ( (PVOID)PsGetCurrentProcess(a1, MmUserProbeAddress) == g_pepDwm )
      {
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
        if ( v6 )
          goto LABEL_17;
        if ( DirectComposition::CConnection::s_pSessionConnectionLock )
        {
          DirectComposition::CCriticalSection::AcquireExclusive((DirectComposition::CCriticalSection *)DirectComposition::CConnection::s_pSessionConnectionLock);
          v6 = DirectComposition::CConnection::s_pSessionConnection;
          if ( DirectComposition::CConnection::s_pSessionConnection )
            _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
          ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
          KeLeaveCriticalRegion();
        }
        if ( v6 )
        {
LABEL_17:
          v11 = -1073741275;
          v12 = 0LL;
          v31 = 0LL;
          ExAcquirePushLockSharedEx((char *)v6 + 200, 0LL);
          *((_BYTE *)v6 + 208) = 0;
          v13 = (volatile signed __int32 *)*((_QWORD *)v6 + 24);
          if ( v13 != (volatile signed __int32 *)((char *)v6 + 184) )
          {
            while ( *((_QWORD *)v13 + 7) != v30 )
            {
              v13 = (volatile signed __int32 *)*((_QWORD *)v13 + 1);
              if ( v13 == (volatile signed __int32 *)((char *)v6 + 184) )
                goto LABEL_20;
            }
            _InterlockedIncrement(v13 - 2);
            v12 = v13 - 2;
            v31 = (DirectComposition::CCompositionFrame *)(v13 - 2);
            v11 = 0;
          }
LABEL_20:
          v14 = (char *)v6 + 200;
          if ( *((_BYTE *)v6 + 208) )
            ExReleasePushLockExclusiveEx(v14);
          else
            ExReleasePushLockSharedEx(v14);
          v23 = v11;
          if ( v11 >= 0 )
          {
            v16 = 0LL;
            v29 = 0LL;
            v17 = 0LL;
            v27 = 0LL;
            if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 2) )
            {
              v16 = (char *)*((_QWORD *)g_pTokenManager + 2);
              v29 = v16;
              v17 = *((_QWORD *)g_pTokenManager + 3);
              v27 = v17;
              v18 = 0;
            }
            else
            {
              v18 = -1073741823;
            }
            v23 = v18;
            if ( v18 >= 0 )
            {
              do
              {
                if ( *((_DWORD *)v12 + 24) )
                {
                  *((_DWORD *)v12 + 24) = CLegacyTokenBuffer::GetNextTokenBlock(
                                            *((CLegacyTokenBuffer **)v12 + 11),
                                            (const unsigned __int8 **)&v28,
                                            &v33,
                                            &v25);
                  v19 = v33;
                  v15 = v28;
                }
                else
                {
                  v15 = 0LL;
                  v28 = 0LL;
                  v19 = 0;
                  v33 = 0;
                  v25 = 0;
                }
                v20 = *((_DWORD *)v12 + 24);
                v24 = v20;
                v26 = v20;
                if ( v19 )
                {
                  v22 = v19;
                  memmove(v16, v15, v19);
                  v16 += v22;
                  v17 = v27 - v22;
                  v27 -= v22;
                  v32 += v25;
                  v20 = v24;
                }
              }
              while ( v20 && v17 >= 0x800 );
              v29 = v16;
            }
            if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 && v31 )
            {
              if ( *((_DWORD *)v31 + 18) != 3 )
                DirectComposition::CCompositionFrame::Discard(v31, (unsigned int)v15);
              Win32FreePool();
            }
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
            DirectComposition::CConnection::`scalar deleting destructor'(v6);
          v5 = v23;
        }
        else
        {
          v5 = -1073741790;
        }
        KeLeaveCriticalRegion();
      }
      else
      {
        v5 = -1073741790;
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v32;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v26;
  return (unsigned int)v5;
}
