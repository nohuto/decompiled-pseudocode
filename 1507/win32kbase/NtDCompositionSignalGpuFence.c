/*
 * XREFs of NtDCompositionSignalGpuFence @ 0x1C006B170
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SignalGpuFence@CCompositionFrame@DirectComposition@@QEAAJU_LUID@@_K1@Z @ 0x1C006B314 (-SignalGpuFence@CCompositionFrame@DirectComposition@@QEAAJU_LUID@@_K1@Z.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C006B374 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C006B3A0 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 */

__int64 __fastcall NtDCompositionSignalGpuFence(
        unsigned __int64 *a1,
        struct _LUID *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  int CompositionFrame; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v9; // rdi
  unsigned int v10; // edx
  DirectComposition::CCompositionFrame *v12; // [rsp+40h] [rbp-28h] BYREF
  struct _LUID v13; // [rsp+70h] [rbp+8h]

  v4 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v4 = *a1;
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    v13 = *a2;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a3;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      a4 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *a4;
    CompositionFrame = 0;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v9 = DefaultConnection;
      if ( DefaultConnection )
      {
        CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(DefaultConnection, v4, &v12);
        if ( CompositionFrame >= 0 )
        {
          CompositionFrame = DirectComposition::CCompositionFrame::SignalGpuFence(v12, v13, v5, v6);
          DirectComposition::CCompositionFrame::Release(v12);
        }
        DirectComposition::CConnection::Release(v9, v10);
      }
      else
      {
        CompositionFrame = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)CompositionFrame;
}
