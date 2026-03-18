/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0017B80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // rbx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // r14
  volatile signed __int32 *v7; // rsi
  int v8; // r12d
  char *v9; // r15
  volatile signed __int32 *i; // rcx
  const void *v11; // rdx
  char *v12; // r12
  unsigned __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // rax
  __int64 v21; // rbx
  signed int v22; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+24h] [rbp-74h]
  int v24; // [rsp+28h] [rbp-70h]
  DirectComposition::CCompositionFrame *v25; // [rsp+48h] [rbp-50h]
  int v26; // [rsp+A0h] [rbp+8h]
  int v28; // [rsp+B8h] [rbp+20h]

  v26 = 0;
  v23 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 + 8 < a1 || a1 + 8 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v4 = *(_QWORD *)a1;
    a1 = *(_QWORD *)a1 == 0LL ? 0xC000000D : 0;
    v22 = v4 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v22 = -1073741811;
  }
  if ( v22 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v6 = DefaultConnection;
      if ( DefaultConnection )
      {
        v7 = 0LL;
        v8 = -1073741275;
        v25 = 0LL;
        v9 = (char *)DefaultConnection + 200;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
        v9[8] = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v6 + 24);
              i != (volatile signed __int32 *)((char *)v6 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 7) == v4 )
          {
            _InterlockedIncrement(i - 2);
            v7 = i - 2;
            v25 = (DirectComposition::CCompositionFrame *)(i - 2);
            v8 = 0;
            break;
          }
        }
        if ( v9[8] )
          ExReleasePushLockExclusiveEx(v9, 0LL);
        else
          ExReleasePushLockSharedEx(v9);
        v22 = v8;
        if ( v8 >= 0 )
        {
          v12 = 0LL;
          v13 = 0LL;
          if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 2) )
          {
            v12 = (char *)*((_QWORD *)g_pTokenManager + 2);
            v13 = *((_QWORD *)g_pTokenManager + 3);
            v14 = 0;
          }
          else
          {
            v14 = -1073741823;
          }
          v22 = v14;
          if ( v14 >= 0 )
          {
            do
            {
              if ( *((_DWORD *)v7 + 24) )
              {
                v18 = *((_QWORD *)v7 + 11);
                v19 = 0;
                v20 = *(_QWORD *)(v18 + 2088);
                v11 = (const void *)(v20 + 20);
                v15 = *(_DWORD *)(v20 + 2068);
                v28 = *(_DWORD *)(v20 + 16);
                if ( *(_QWORD *)v20 != v18 + 16 )
                {
                  *(_QWORD *)(v18 + 2088) = *(_QWORD *)v20;
                  v19 = 1;
                }
                *((_DWORD *)v7 + 24) = v19 != 0;
              }
              else
              {
                v11 = 0LL;
                v15 = 0;
                v28 = 0;
              }
              v16 = *((_DWORD *)v7 + 24);
              v24 = v16;
              v23 = v16;
              if ( v15 )
              {
                v21 = v15;
                memmove(v12, v11, v15);
                v12 += v21;
                v13 -= v21;
                v26 += v28;
                v16 = v24;
              }
            }
            while ( v16 && v13 >= 0x800 );
          }
          if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 && v25 )
          {
            if ( *((_DWORD *)v25 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v25);
            Win32FreePool(v25);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v6, (unsigned int)v11);
      }
      else
      {
        v22 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v22 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v26;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v23;
  return (unsigned int)v22;
}
