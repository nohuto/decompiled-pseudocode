/*
 * XREFs of AudioServerNotifyStreamSuspensionState @ 0x1800053E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180014690 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerNotifyStreamSuspensionState(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64, __int64); // rbx
  int v10; // eax
  int v11; // ebx
  _WORD v13[2]; // [rsp+28h] [rbp-19h] BYREF
  char v14; // [rsp+2Ch] [rbp-15h]
  __int128 v15; // [rsp+40h] [rbp-1h]
  int v16; // [rsp+54h] [rbp+13h]
  __int64 v17; // [rsp+58h] [rbp+17h]
  int v18; // [rsp+60h] [rbp+1Fh]
  __int64 *v19; // [rsp+68h] [rbp+27h]
  __int64 v20; // [rsp+70h] [rbp+2Fh]
  __int64 v21; // [rsp+78h] [rbp+37h]
  __int64 v22; // [rsp+80h] [rbp+3Fh]
  __int64 v23; // [rsp+88h] [rbp+47h]
  __int64 v24; // [rsp+90h] [rbp+4Fh]

  v5 = a4;
  v6 = a3;
  EnterCriticalSection(&g_csVadList);
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v13, 0, 0x40uLL);
    v17 = 0LL;
    v18 = 0;
    v24 = 0LL;
    v13[0] = 112;
    v20 = *((unsigned int *)a1 + 16);
    v16 = 0x20000;
    v15 = AEWMIGUID_AUDIOSRV;
    v14 = 1;
    v19 = a1;
    v21 = a2;
    v22 = v6;
    v23 = v5;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v13);
  }
  v8 = *a1;
  if ( (_DWORD)v5 )
  {
    v9 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 64);
    if ( (char *)v9 == (char *)CVADServer::StopStream )
      v10 = CVADServer::StopStream(a1, a2, 3LL);
    else
      v10 = v9(a1, a2, 3LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 56))(a1, a2, 3LL);
  }
  v11 = v10;
  UpdateOffloadPowerRequest();
  LeaveCriticalSection(&g_csVadList);
  if ( v11 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      92LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v11);
  }
  return (unsigned int)v11;
}
