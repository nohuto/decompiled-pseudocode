/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180021D80
 * Callers:
 *     AudioServerGetAllVolumes @ 0x180038430 (AudioServerGetAllVolumes.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // rdi
  TraceLoggingHProvider v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8

  v4 = a2;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 74LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v7 = *((_QWORD *)this + 26);
  if ( v7 && *((_DWORD *)this + 50) )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        50LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        *((_QWORD *)this + 26));
      v8 = WPP_GLOBAL_Control;
    }
    if ( (_DWORD)v4 == *(_DWORD *)(v7 + 72) )
    {
      v9 = 0;
      if ( (_DWORD)v4 )
      {
        v10 = 0LL;
        v11 = v4;
        do
        {
          ++v10;
          a3[v10 - 1] = *(float *)(v10 * 4 + *(_QWORD *)(v7 + 96) - 4);
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v9 = -2147024809;
      if ( v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v8 + 28) & 0x40) != 0
        && *((_BYTE *)v8 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v8 + 2), 51LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, 2147942487LL);
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
      75LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v9);
  }
  return (unsigned int)v9;
}
