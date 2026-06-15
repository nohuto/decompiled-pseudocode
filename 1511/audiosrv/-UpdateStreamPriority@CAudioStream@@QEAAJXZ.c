/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800209E0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026CB0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026EA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  int v2; // ebp
  unsigned int v3; // r12d
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // esi
  int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v12 = 0LL;
  v3 = *((_DWORD *)this + 47);
  v11 = -1;
  v4 = *((_QWORD *)this + 8);
  v5 = *(_QWORD *)(v4 + 864);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v4 + 864));
  v6 = *(_QWORD *)(v4 + 864);
  v12 = v6;
  if ( (*(unsigned int (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager) )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8) != 0;
    v7 = *(_QWORD *)g_PolicyManager;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
    v2 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD, _QWORD, int, int *, __int64))(v7 + 56))(
           g_PolicyManager,
           (unsigned int)v2,
           *((unsigned int *)this + 76),
           *((unsigned __int8 *)this + 184),
           v8,
           &v11,
           -2LL);
    if ( v2 < 0 )
    {
LABEL_10:
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          44LL,
          &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          (unsigned int)v2);
      }
      goto LABEL_14;
    }
    v9 = v11;
  }
  else
  {
    v9 = 0;
    v11 = 0;
  }
  if ( v9 != *((_DWORD *)this + 47) )
  {
    *((_DWORD *)this + 47) = v9;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 192LL))(
           *((_QWORD *)this + 7),
           1LL,
           v9,
           v3);
  }
  if ( v2 < 0 )
    goto LABEL_10;
LABEL_14:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v2;
}
