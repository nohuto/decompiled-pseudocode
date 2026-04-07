/*
 * XREFs of ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081930 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180011734 (-Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002C6B8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180077E8C (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 *     ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180078460 (--$-0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D.c)
 *     ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180078584 (--1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079168 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::BitmapReceived(
        CImmersiveIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int64 a7)
{
  __int64 v8; // r14
  unsigned __int64 v11; // rcx
  bool v12; // bl
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  struct CBitmapSource *v16; // rdi
  unsigned int v17; // ebx
  DWORD v19; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwProcessId; // [rsp+44h] [rbp-BCh] BYREF
  struct CBitmapSource *v21; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[320]; // [rsp+50h] [rbp-B0h] BYREF

  v21 = 0LL;
  v8 = a4;
  WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::ImmersiveIconicBitmapReceived(
    (WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)v22,
    (char)a2);
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId) && a3 == dwProcessId )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      v19 = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &v19);
      v12 = v19 == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 570) & 1) != 0
    && (v11 = a5 * v8, v11 <= 0xFFFFFFFF)
    && (v14 = 4LL * (unsigned int)v11, v14 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v14
    && v12 )
  {
    v15 = CBitmapSource::Create(
            v8,
            a5,
            v8,
            a5,
            a6,
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v21);
    v16 = v21;
    v17 = v15;
    if ( v15 >= 0 )
    {
      *((_DWORD *)a2 + 42) = *a6 & 0xFF00 | ((unsigned __int8)*a6 << 16) | (unsigned __int8)BYTE2(*a6);
      CImmersiveIconicBitmapRegistry::_AcceptBitmap(this, a2, v16);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v15, 0x16Du);
    }
    if ( v16 )
      CBaseObject::Release(v16);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v11, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v17 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147024809, 0x169u);
  }
  wil::ActivityBase<1,35184372088832,5>::Stop((__int64)v22, v17);
  WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::~ImmersiveIconicBitmapReceived((WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)v22);
  return v17;
}
