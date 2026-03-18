/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180092308
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800922F0 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseAdapterHandles@CSurfaceManager@@AEAAXXZ @ 0x180087B30 (-ReleaseAdapterHandles@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ @ 0x180087BF0 (-EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A3DC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(CSurfaceManager *this)
{
  unsigned int v1; // r15d
  int v3; // eax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE *v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  _BYTE v14[24]; // [rsp+48h] [rbp-28h] BYREF

  v1 = 0;
  v11 = 0LL;
  v13 = 0LL;
  v12 = v14;
  if ( !*((_BYTE *)this + 424) )
  {
    do
    {
      ResetEvent(*((HANDLE *)this + 52));
      if ( *((_BYTE *)this + 424) )
        break;
      CMmcssTask::Clone((CMmcssTask *)(*((_QWORD *)this + 50) + 80LL), (LPCWCH *)this + 54);
      v3 = CSurfaceManager::EnsureAdapterHandles(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1F6u);
      }
      else
      {
        v11 = *((_QWORD *)this + 52);
        v5 = *((unsigned int *)this + 136);
        LODWORD(v13) = v5;
        if ( (unsigned int)v5 > 5 )
        {
          v8 = 4 * v5;
          if ( !is_mul_ok(v5, 4uLL) )
            v8 = -1LL;
          v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 v8);
          if ( !v9 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x203u);
            break;
          }
          if ( v12 != v14 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v12);
          LODWORD(v5) = v13;
          v12 = (_BYTE *)v9;
        }
        v6 = 0LL;
        if ( (_DWORD)v5 )
        {
          do
          {
            *(_DWORD *)&v12[4 * v6] = *(_DWORD *)(*((_QWORD *)this + 65) + 16LL * (unsigned int)v6 + 8);
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < (unsigned int)v13 );
        }
        v7 = NtTokenManagerThread(&v11, v4, v6);
        if ( v7 < 0 )
        {
          v1 = v7 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7 | 0x10000000, 0x21Au);
        }
        CSurfaceManager::ReleaseAdapterHandles(this);
      }
    }
    while ( !*((_BYTE *)this + 424) );
    if ( v12 != v14 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v12);
  }
  return v1;
}
