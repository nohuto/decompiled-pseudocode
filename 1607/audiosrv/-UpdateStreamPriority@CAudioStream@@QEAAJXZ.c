/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A4DC
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013044 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001A160 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  int v2; // ebx
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 (*v7)(void); // rax
  int IsCaptureStream; // eax
  BOOL v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, _QWORD); // rax
  int updated; // eax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v18 = 0LL;
  v3 = *((_DWORD *)this + 87);
  v17 = -1;
  v4 = *((_QWORD *)this + 8);
  v5 = *(_QWORD *)(v4 + 864);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *(_QWORD *)(v4 + 864);
  v18 = v6;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager) )
  {
    v7 = *(__int64 (**)(void))(*((_QWORD *)this + 1) + 56LL);
    if ( (char *)v7 == (char *)CAudioStream::IsCaptureStream )
      IsCaptureStream = CAudioStream::IsCaptureStream((CAudioStream *)((char *)this + 8));
    else
      IsCaptureStream = v7();
    v9 = IsCaptureStream != 0;
    v10 = *(_QWORD *)g_PolicyManager;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
    v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD, int, unsigned int *))(v10 + 56))(
           g_PolicyManager,
           v9,
           *((unsigned int *)this + 120),
           *((unsigned __int8 *)this + 344),
           v11,
           &v17);
    v12 = v17;
  }
  else
  {
    v12 = 0LL;
    v17 = 0;
  }
  if ( v2 < 0 )
    goto LABEL_19;
  if ( (_DWORD)v12 != *((_DWORD *)this + 87) )
  {
    *((_DWORD *)this + 87) = v12;
    v13 = *((_QWORD *)this + 7);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v13 + 192LL);
    if ( v14 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority(v13, 1LL, v12, v3);
    else
      updated = v14(v13, 1LL, v12, v3);
    v2 = updated;
  }
  if ( v2 < 0 )
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CAudioStream::UpdateStreamPriority", 0x481u, v2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v2;
}
