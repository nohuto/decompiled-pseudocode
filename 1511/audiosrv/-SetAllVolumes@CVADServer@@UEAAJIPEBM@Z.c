/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180021E70
 * Callers:
 *     AudioServerSetAllVolumes @ 0x180038650 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001FB90 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  _DWORD *v7; // rsi
  TraceLoggingHProvider v8; // r10
  int v9; // edi
  unsigned int v10; // eax
  float *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  float v14; // eax
  __int64 (__fastcall *v15)(CAudioStream *); // rbx
  __int64 v17; // rdx

  v4 = a2;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v7 = (_DWORD *)*((_QWORD *)this + 26);
  if ( v7 && *((_DWORD *)this + 50) )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v7, v4);
      v8 = WPP_GLOBAL_Control;
    }
    if ( (_DWORD)v4 == v7[18] )
    {
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v4 )
      {
        v11 = a3;
        while ( *v11 >= 0.0 && *v11 <= 1.0 )
        {
          ++v10;
          ++v11;
          if ( v10 >= (unsigned int)v4 )
          {
            v12 = 0LL;
            v13 = v4;
            do
            {
              v14 = a3[v12++];
              *(float *)(v12 * 4 + *((_QWORD *)v7 + 12) - 4) = v14;
              --v13;
            }
            while ( v13 );
            goto LABEL_19;
          }
        }
        v9 = -2147024809;
        if ( v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v8 + 28) & 0x40) != 0
          && *((_BYTE *)v8 + 25) >= 2u )
        {
          v17 = 54LL;
          goto LABEL_27;
        }
      }
      else
      {
LABEL_19:
        v15 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v7 + 128LL);
        if ( v15 == CAudioStream::RecalculateVolume )
          CAudioStream::RecalculateVolume((CAudioStream *)v7);
        else
          v15((CAudioStream *)v7);
      }
    }
    else
    {
      v9 = -2147024809;
      if ( v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v8 + 28) & 0x40) != 0
        && *((_BYTE *)v8 + 25) >= 2u )
      {
        v17 = 53LL;
LABEL_27:
        WPP_SF_D(*((_QWORD *)v8 + 2), v17, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, 2147942487LL);
      }
    }
  }
  else
  {
    v9 = -2004287487;
  }
  LeaveCriticalSection(v6);
  if ( v9 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      73LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v9);
  }
  return (unsigned int)v9;
}
