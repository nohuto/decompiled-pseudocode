/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0046AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z @ 0x1C004765C (-GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  struct DirectComposition::CConnection *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rdi
  int v13; // r15d
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // rdx
  char *v16; // rcx
  unsigned __int8 *v17; // rdx
  char *v18; // r15
  unsigned __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  __int64 v24; // rdi
  __int64 v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+24h] [rbp-74h]
  __int64 v28; // [rsp+28h] [rbp-70h] BYREF
  __int64 v29; // [rsp+30h] [rbp-68h]
  char *v30; // [rsp+38h] [rbp-60h]
  unsigned __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v32; // [rsp+48h] [rbp-50h] BYREF
  DirectComposition::CCompositionFrame *v33; // [rsp+50h] [rbp-48h]
  int v34; // [rsp+A0h] [rbp+8h]
  _DWORD *v35; // [rsp+B0h] [rbp+18h]
  unsigned int v36; // [rsp+B8h] [rbp+20h] BYREF

  v35 = a3;
  v34 = 0;
  HIDWORD(v28) = 0;
  v29 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v29 = *a1;
    if ( v29 )
    {
      v4 = 0;
      LODWORD(v25) = 0;
    }
    else
    {
      v4 = -1073741811;
      LODWORD(v25) = -1073741811;
    }
    if ( v4 >= 0 )
    {
      if ( (PVOID)PsGetCurrentProcess(a1, MmUserProbeAddress) == g_pepDwm )
      {
        KeEnterCriticalRegion();
        v5 = 0LL;
        v6 = 0LL;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v25, v28);
        if ( CurrentProcessWin32Process )
          v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
        if ( v6 )
        {
          v12 = *(struct _ERESOURCE **)(v6 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v12, 1u);
          v5 = *(struct DirectComposition::CConnection **)(v6 + 24);
          if ( v5 )
            _InterlockedIncrement((volatile signed __int32 *)v5);
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
          KeLeaveCriticalRegion();
        }
        if ( v5 )
          goto LABEL_17;
        if ( DirectComposition::CConnection::s_pSessionConnectionLock )
        {
          DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CConnection::s_pSessionConnectionLock);
          v5 = DirectComposition::CConnection::s_pSessionConnection;
          if ( DirectComposition::CConnection::s_pSessionConnection )
            _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
          ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
          KeLeaveCriticalRegion();
        }
        if ( v5 )
        {
LABEL_17:
          v13 = -1073741275;
          v14 = 0LL;
          v33 = 0LL;
          ExAcquirePushLockSharedEx((char *)v5 + 200, 0LL);
          *((_BYTE *)v5 + 208) = 0;
          v15 = (volatile signed __int32 *)*((_QWORD *)v5 + 24);
          if ( v15 != (volatile signed __int32 *)((char *)v5 + 184) )
          {
            while ( *((_QWORD *)v15 + 7) != v29 )
            {
              v15 = (volatile signed __int32 *)*((_QWORD *)v15 + 1);
              if ( v15 == (volatile signed __int32 *)((char *)v5 + 184) )
                goto LABEL_20;
            }
            _InterlockedIncrement(v15 - 2);
            v14 = v15 - 2;
            v33 = (DirectComposition::CCompositionFrame *)(v15 - 2);
            v13 = 0;
          }
LABEL_20:
          v16 = (char *)v5 + 200;
          if ( *((_BYTE *)v5 + 208) )
            ExReleasePushLockExclusiveEx(v16, 0LL);
          else
            ExReleasePushLockSharedEx(v16, 0LL);
          v26 = v13;
          if ( v13 >= 0 )
          {
            v18 = 0LL;
            v30 = 0LL;
            v19 = 0LL;
            v31 = 0LL;
            if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 1) )
            {
              v18 = (char *)*((_QWORD *)g_pTokenManager + 1);
              v30 = v18;
              v19 = *((_QWORD *)g_pTokenManager + 2);
              v31 = v19;
              v20 = 0;
            }
            else
            {
              v20 = -1073741823;
            }
            v26 = v20;
            if ( v20 >= 0 )
            {
              do
              {
                if ( *((_DWORD *)v14 + 24) )
                {
                  *((_DWORD *)v14 + 24) = CLegacyTokenBuffer::GetNextTokenBlock(
                                            *((CLegacyTokenBuffer **)v14 + 11),
                                            (const unsigned __int8 **)&v32,
                                            &v36,
                                            (unsigned int *)&v28);
                  v21 = v36;
                  v17 = v32;
                }
                else
                {
                  v17 = 0LL;
                  v32 = 0LL;
                  v21 = 0;
                  v36 = 0;
                  LODWORD(v28) = 0;
                }
                v22 = *((_DWORD *)v14 + 24);
                v27 = v22;
                HIDWORD(v28) = v22;
                if ( v21 )
                {
                  v24 = v21;
                  memmove(v18, v17, v21);
                  v18 += v24;
                  v19 -= v24;
                  v34 += v28;
                  v22 = v27;
                }
              }
              while ( v22 && v19 >= 0x800 );
              v30 = v18;
              v31 = v19;
            }
            if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 && v33 )
            {
              if ( *((_DWORD *)v33 + 18) != 3 )
                DirectComposition::CCompositionFrame::Discard(v33, (unsigned int)v17);
              Win32FreePool();
            }
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
            DirectComposition::CConnection::`scalar deleting destructor'(v5, (unsigned int)v17);
          v4 = v26;
        }
        else
        {
          v4 = -1073741790;
        }
        KeLeaveCriticalRegion();
        a3 = v35;
      }
      else
      {
        v4 = -1073741790;
        a3 = v35;
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v34;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = HIDWORD(v28);
  return (unsigned int)v4;
}
