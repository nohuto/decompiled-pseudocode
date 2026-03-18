/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180037078
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800B7FF0 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800371B8 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180037258 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rdx
  _BYTE *v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  HANDLE v14; // [rsp+38h] [rbp-79h] BYREF
  _BYTE *v15; // [rsp+40h] [rbp-71h]
  __int64 v16; // [rsp+48h] [rbp-69h]
  _BYTE v17[160]; // [rsp+58h] [rbp-59h] BYREF

  v1 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v15 = v17;
  if ( !*((_BYTE *)this + 424) )
  {
    do
    {
      ResetEvent(this[52]);
      if ( *((_BYTE *)this + 424) )
        break;
      CMmcssTask::Clone((CMmcssTask *)((char *)this[50] + 80), (struct CMmcssTask *)(this + 54));
      v3 = CSurfaceManager::EnsureAdapterInfo((CSurfaceManager *)this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x20Fu);
      }
      else
      {
        v14 = this[52];
        v6 = *((unsigned int *)this + 136);
        LODWORD(v16) = v6;
        if ( (unsigned int)v6 > 5 )
        {
          v11 = 32 * v6;
          if ( !is_mul_ok(v6, 0x20uLL) )
            v11 = -1LL;
          v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v11);
          if ( !v12 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21Du);
            break;
          }
          v4 = (__int64)v15;
          if ( v15 != v17 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
          LODWORD(v6) = v16;
          v15 = (_BYTE *)v12;
        }
        v7 = 0LL;
        if ( (_DWORD)v6 )
        {
          do
          {
            v4 = 5 * v7;
            v8 = (unsigned int)v7;
            v7 = (unsigned int)(v7 + 1);
            v5 = &v15[32 * v8];
            *(_QWORD *)v5 = *((_QWORD *)this[65] + v4);
            *((_DWORD *)v5 + 2) = *((_DWORD *)this[65] + 2 * v4 + 4);
            *((_DWORD *)v5 + 3) = *((_DWORD *)this[65] + 2 * v4 + 6);
            v9 = *((_DWORD *)this[65] + 2 * v4 + 8);
            *((_QWORD *)v5 + 3) = 0LL;
            *((_DWORD *)v5 + 4) = v9;
          }
          while ( (unsigned int)v7 < (unsigned int)v16 );
        }
        v10 = NtTokenManagerThread(&v14, v4, v5, v7);
        if ( v10 < 0 )
        {
          v1 = v10 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 | 0x10000000, 0x23Au);
        }
        CSurfaceManager::ReleaseAdapterInfo((CSurfaceManager *)this);
      }
    }
    while ( !*((_BYTE *)this + 424) );
    if ( v15 != v17 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  return v1;
}
