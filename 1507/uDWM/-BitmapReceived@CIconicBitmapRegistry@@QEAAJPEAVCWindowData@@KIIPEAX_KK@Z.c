/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180079D24 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180030F0C (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003B70C (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18006BA3C (-Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 *     ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18006D71C (--$-0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18006DBB4 (--1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18006DC88 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x18006FC54 (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CWindowIconic ****this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        int nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  unsigned int v9; // ebx
  __int64 v10; // r14
  unsigned __int64 v13; // rcx
  bool v14; // r15
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  DWORD v20; // ebx
  unsigned int v21; // r8d
  DWORD v22; // r15d
  unsigned int v23; // r9d
  int v24; // eax
  CBaseObject *v25; // rsi
  struct CBitmapSource *v26; // r8
  DWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-B8h] BYREF
  CBaseObject *v30; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[320]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = 0;
  v10 = a4;
  v30 = 0LL;
  WindowFrameLoggingTelemetry::IconicBitmapReceived::IconicBitmapReceived(
    (WindowFrameLoggingTelemetry::IconicBitmapReceived *)v31,
    (char)a2);
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId) && a3 == dwProcessId )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      v28[0] = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, v28);
      v14 = v28[0] == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 554) & 1) != 0
    && (v13 = (unsigned int)nNumber * v10, v13 <= 0xFFFFFFFF)
    && (v16 = 4LL * (unsigned int)v13, v16 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v16
    && v14 )
  {
    if ( CIconicBitmapRegistry::CanAcceptBitmap((CIconicBitmapRegistry *)this, a2) )
    {
      if ( (unsigned int)DwmGetIdealIconicThumbnailSize(v18, (struct tagSIZE *)v28) )
      {
        v20 = v28[0];
        v21 = v10;
        v22 = v28[1];
        v23 = nNumber;
        if ( (int)v10 <= (int)v28[0] || (signed int)(v28[1] * v10) > (signed int)(nNumber * v28[0]) )
        {
          if ( nNumber > (int)v28[1] && (signed int)(v28[1] * v10) > (signed int)(nNumber * v28[0]) )
          {
            v21 = MulDiv(v10, v28[1], nNumber);
            v23 = v22;
          }
        }
        else
        {
          v23 = MulDiv(nNumber, v28[0], v10);
          v21 = v20;
        }
        v24 = CBitmapSource::Create(
                v10,
                nNumber,
                v21,
                v23,
                a6,
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v30);
        v25 = v30;
        v9 = v24;
        if ( v24 >= 0 )
        {
          v26 = v30;
          *((_BYTE *)a2 + 554) &= ~2u;
          *((_BYTE *)a2 + 554) |= 2 * (a8 & 1);
          CIconicBitmapRegistry::AcceptBitmap(this, a2, v26);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v24, 0x251u);
        }
        if ( v25 )
          CBaseObject::Release(v25);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_qp(v19, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
        v9 = -2147467259;
        MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147467259, 0x240u);
      }
    }
    else if ( ((unsigned __int8)v18 & (unsigned __int8)Microsoft_Windows_Dwm_UdwmEnableBits) != 0 )
    {
      Template_qp(v17, (__int64)&UdwmManageIconicThumbnail_Info, v18, *((_QWORD *)a2 + 5));
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v13, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147024809, 0x230u);
  }
  wil::ActivityBase<1,35184372088832,5>::Stop(v31, v9);
  WindowFrameLoggingTelemetry::IconicBitmapReceived::~IconicBitmapReceived((WindowFrameLoggingTelemetry::IconicBitmapReceived *)v31);
  return v9;
}
