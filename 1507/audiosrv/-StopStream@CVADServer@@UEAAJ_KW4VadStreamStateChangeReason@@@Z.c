/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180014690
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x1800053E0 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerStopStream @ 0x180008A30 (AudioServerStopStream.c)
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180004340 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  char v10; // al
  bool v11; // si
  __int64 (__fastcall *v12)(CAudioSession *, struct CAudioStream *); // rbx
  int v13; // eax
  CAudioSession *v15; // rbx
  struct CAudioStream *v16; // rsi
  __int64 (__fastcall *v17)(CAudioSession *, struct CAudioStream *, unsigned int); // rdi
  int v18; // eax
  _WORD v19[2]; // [rsp+38h] [rbp-49h] BYREF
  char v20; // [rsp+3Ch] [rbp-45h]
  __int128 v21; // [rsp+50h] [rbp-31h]
  int v22; // [rsp+64h] [rbp-1Dh]
  __int64 v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]
  __int64 v30; // [rsp+A0h] [rbp+1Fh]
  __int64 v31; // [rsp+A8h] [rbp+27h]

  v3 = 0;
  v4 = a3;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v19, 0, 0x40uLL);
    v23 = 0LL;
    v24 = 0;
    v29 = 0LL;
    v31 = 0LL;
    v19[0] = 120;
    v26 = *(unsigned int *)(a1 + 64);
    v28 = *(unsigned __int8 *)(a1 + 220);
    v22 = 0x20000;
    v21 = AEWMIGUID_AUDIOSRV;
    v20 = 2;
    v25 = a1;
    v27 = a2;
    v30 = v4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v19);
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  if ( *(_DWORD *)(a1 + 216) && (v8 = *(_QWORD *)(a1 + 168)) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 224);
    if ( a2 == *(_QWORD *)(v9 + 56) )
    {
      v10 = *(_BYTE *)(a1 + 220);
      v11 = !v10 || (_DWORD)v4 == 3;
      if ( v10 )
      {
        v12 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *))(*(_QWORD *)v8 + 256LL);
        if ( v12 == CAudioSession::StopStream )
          v13 = CAudioSession::StopStream(*(CAudioSession **)(a1 + 168), *(struct CAudioStream **)(a1 + 224));
        else
          v13 = v12(*(CAudioSession **)(a1 + 168), *(struct CAudioStream **)(a1 + 224));
        v3 = v13;
        if ( v13 < 0 )
          goto LABEL_15;
        *(_DWORD *)(a1 + 296) = v4;
        *(_BYTE *)(a1 + 220) = 0;
      }
      if ( v11 )
      {
        v15 = *(CAudioSession **)(a1 + 168);
        v16 = *(struct CAudioStream **)(a1 + 224);
        v17 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, unsigned int))(*(_QWORD *)v15 + 296LL);
        if ( v17 == CAudioSession::NotifyStreamSuspensionStateChanged )
          v18 = CAudioSession::NotifyStreamSuspensionStateChanged(v15, v16, 1u);
        else
          v18 = v17(v15, v16, 1u);
        v3 = v18;
      }
    }
    else
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          50LL,
          &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
          a2,
          *(_QWORD *)(v9 + 56));
      }
      v3 = -2147024809;
    }
  }
  else
  {
    v3 = -2004287487;
  }
LABEL_15:
  LeaveCriticalSection(v7);
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      51LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v3);
  }
  return (unsigned int)v3;
}
