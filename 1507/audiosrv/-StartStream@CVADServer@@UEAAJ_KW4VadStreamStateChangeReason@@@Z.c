/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x1800147F0
 * Callers:
 *     AudioServerStartStream @ 0x180008E60 (AudioServerStartStream.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXE_K111111@Z @ 0x180089F08 (-AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXE_K111111@Z.c)
 */

__int64 __fastcall CVADServer::StartStream(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r14
  int v6; // esi
  unsigned int v7; // ecx
  struct _GUID *v8; // r8
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 (__fastcall *v11)(CAudioSession *, struct CAudioStream *); // rsi
  int started; // eax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(CProcess *); // rbx
  unsigned int Data1; // ecx
  _WORD v19[2]; // [rsp+58h] [rbp-49h] BYREF
  char v20; // [rsp+5Ch] [rbp-45h]
  __int128 v21; // [rsp+70h] [rbp-31h]
  int v22; // [rsp+84h] [rbp-1Dh]
  __int64 v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  unsigned __int64 v25; // [rsp+98h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  __int64 v29; // [rsp+B8h] [rbp+17h]
  unsigned __int64 v30; // [rsp+C0h] [rbp+1Fh]
  __int64 v31; // [rsp+C8h] [rbp+27h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+108h] [rbp+67h]

  v3 = a3;
  v6 = 0;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v19, 0, 0x40uLL);
    v26 = *(unsigned int *)(a1 + 64);
    v28 = *(unsigned __int8 *)(a1 + 220);
    v19[0] = 120;
    v22 = 0x20000;
    v21 = AEWMIGUID_AUDIOSRV;
    v20 = 2;
    v23 = 0LL;
    v24 = 0;
    v25 = a1;
    v27 = a2;
    v29 = 1LL;
    v30 = v3;
    v31 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v19);
  }
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v8 = &WPP_GLOBAL_Control;
  if ( *(_DWORD *)(a1 + 216) && (v9 = *(_QWORD *)(a1 + 168)) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 224);
    if ( a2 == *(_QWORD *)(v10 + 56) )
    {
      if ( *(_BYTE *)(a1 + 220) )
      {
        Data1 = WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x30u,
            (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
        }
        AEWMILOG_AUDIOSRV_STREAM_START_STOP(
          Data1,
          (void *)*(unsigned __int8 *)(a1 + 220),
          *(_DWORD *)(a1 + 64),
          a1,
          *(unsigned int *)(a1 + 64),
          a2,
          *(unsigned __int8 *)(a1 + 220),
          1uLL,
          v3,
          3uLL);
      }
      else if ( (_DWORD)v3 != 3
             || (v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 296LL))(
                        *(_QWORD *)(a1 + 168),
                        *(_QWORD *)(a1 + 224),
                        0LL),
                 v6 >= 0) )
      {
        if ( (_DWORD)v3 == 2 || (_DWORD)v3 == *(_DWORD *)(a1 + 296) )
        {
          if ( g_u32AEWMILogLevel >= 3 )
          {
            memset_0(v19, 0, 0x40uLL);
            v22 = 0x20000;
            v19[0] = 120;
            v26 = *(unsigned int *)(a1 + 64);
            v28 = *(unsigned __int8 *)(a1 + 220);
            v21 = AEWMIGUID_AUDIOSRV;
            v20 = 2;
            v23 = 0LL;
            v24 = 0;
            v25 = a1;
            v27 = a2;
            v29 = 1LL;
            v30 = v3;
            v31 = 1LL;
            EtwLogTraceEvent(g_hAEWMITraceHandle, v19);
          }
          v11 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *))(**(_QWORD **)(a1 + 168) + 248LL);
          if ( v11 == CAudioSession::StartStream )
            started = CAudioSession::StartStream(*(CAudioSession **)(a1 + 168), *(struct CAudioStream **)(a1 + 224));
          else
            started = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct _GUID *))v11)(
                        *(_QWORD *)(a1 + 168),
                        *(_QWORD *)(a1 + 224),
                        v8);
          v6 = started;
          if ( started >= 0 )
          {
            v13 = *(_QWORD *)(a1 + 168);
            *(_BYTE *)(a1 + 220) = 1;
            v14 = *(_QWORD *)(v13 + 712);
            if ( v14 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(v13 + 712));
            v15 = *(_QWORD *)(v13 + 712);
            v16 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v15 + 48LL);
            if ( v16 != CProcess::GetTsSessionId )
              v16(*(CProcess **)(v13 + 712));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
        else
        {
          AEWMILOG_AUDIOSRV_STREAM_START_STOP(
            v7,
            (void *)*(unsigned __int8 *)(a1 + 220),
            *(_DWORD *)(a1 + 64),
            a1,
            *(unsigned int *)(a1 + 64),
            a2,
            *(unsigned __int8 *)(a1 + 220),
            1uLL,
            v3,
            2uLL);
        }
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
          47LL,
          &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
          a2,
          *(_QWORD *)(v10 + 56));
      }
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2004287487;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ( v6 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      49LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
