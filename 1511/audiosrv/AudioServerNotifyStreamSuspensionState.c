/*
 * XREFs of AudioServerNotifyStreamSuspensionState @ 0x1800035B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800887B8 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall AudioServerNotifyStreamSuspensionState(CVADServer *this, unsigned __int64 a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  int v8; // ebx
  _WORD v10[2]; // [rsp+28h] [rbp-19h] BYREF
  char v11; // [rsp+2Ch] [rbp-15h]
  __int128 v12; // [rsp+40h] [rbp-1h]
  int v13; // [rsp+54h] [rbp+13h]
  __int64 v14; // [rsp+58h] [rbp+17h]
  int v15; // [rsp+60h] [rbp+1Fh]
  CVADServer *v16; // [rsp+68h] [rbp+27h]
  __int64 v17; // [rsp+70h] [rbp+2Fh]
  unsigned __int64 v18; // [rsp+78h] [rbp+37h]
  __int64 v19; // [rsp+80h] [rbp+3Fh]
  __int64 v20; // [rsp+88h] [rbp+47h]
  __int64 v21; // [rsp+90h] [rbp+4Fh]

  v5 = a4;
  v6 = a3;
  EnterCriticalSection(&g_csVadList);
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v10, 0, 0x40uLL);
    v14 = 0LL;
    v15 = 0;
    v21 = 0LL;
    v10[0] = 112;
    v17 = *((unsigned int *)this + 16);
    v13 = 0x20000;
    v12 = AEWMIGUID_AUDIOSRV;
    v11 = 1;
    v16 = this;
    v18 = a2;
    v19 = v6;
    v20 = v5;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v10);
  }
  v8 = CVADServer::NotifyStreamSuspensionStateChanged(this, a2, (_DWORD)v5 != 0);
  UpdateOffloadPowerRequest();
  LeaveCriticalSection(&g_csVadList);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      86LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v8);
  }
  return (unsigned int)v8;
}
