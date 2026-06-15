/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180081360
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??0SimpleVolumeChangedContext@@QEAA@PEAVCMonitor@@MHPEBU_GUID@@@Z @ 0x18007F03C (--0SimpleVolumeChangedContext@@QEAA@PEAVCMonitor@@MHPEBU_GUID@@@Z.c)
 *     WPP_SF_gd @ 0x180082524 (WPP_SF_gd.c)
 */

__int64 __fastcall CMonitor::OnSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  SimpleVolumeChangedContext *v7; // rax
  SimpleVolumeChangedContext *v8; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL);
  }
  v7 = (SimpleVolumeChangedContext *)operator new(0x28uLL);
  if ( v7 )
    v8 = SimpleVolumeChangedContext::SimpleVolumeChangedContext(v7, this, a2, a3, a4);
  else
    v8 = 0LL;
  if ( v8 )
  {
    ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSimpleVolumeChanged, v8, 0LL);
    *((_QWORD *)v8 + 4) = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      v8 = 0LL;
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
          0x2Cu,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          LastError);
      }
    }
  }
  free(v8);
  return 0LL;
}
