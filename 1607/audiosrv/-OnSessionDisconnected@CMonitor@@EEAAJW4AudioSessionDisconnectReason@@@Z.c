/*
 * XREFs of ?OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180081230
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CMonitor::OnSessionDisconnected(CMonitor *this, enum AudioSessionDisconnectReason a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
  }
  v4 = operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = a2;
    v4[1] = this;
    if ( this )
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSessionDisconnect, v5, 0LL);
    v5[2] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      v5 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x29u,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          LastError);
      }
    }
  }
  free(v5);
  return 0LL;
}
