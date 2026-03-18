/*
 * XREFs of DetermineInputTarget @ 0x1C0058B9C
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C00DC684 (DetermineInputTargetPrecedenceTransform.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

struct tagWND *__fastcall DetermineInputTarget(struct tagKE **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rdi
  struct tagWND *v5; // r14
  struct tagKE *v6; // rbx
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  int v17; // ecx
  struct tagKE *v19; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-78h] BYREF

  v4 = gspwndScreenCapture;
  v5 = 0LL;
  v6 = *a1;
  v19 = *a1;
  if ( !gspwndScreenCapture )
  {
    v4 = gspwndMouseOwner;
    if ( !gspwndMouseOwner )
    {
      v4 = (struct tagWND *)gspwndInternalCapture;
      if ( !gspwndInternalCapture )
      {
        v9 = IsThreadDesktopComposed(gptiCurrent);
        v12 = gspwndInternalCapture + 4;
        v13 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( v9 )
        {
          v14 = DCESpeedHitTest(v13, v12, v10, v11, (__int64)&v19, a4, (__int64)v20, (__int64)v21, 0LL, 0LL);
          v6 = v19;
          v5 = (struct tagWND *)v14;
        }
        else
        {
          v14 = SpeedHitTest(v13, v12, v10, v11, (__int64)v6, (__int64)v6, (__int64)v21, 0LL, 0LL);
        }
        v4 = (struct tagWND *)v14;
      }
    }
  }
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) && v4 )
  {
    if ( v4 == v5 )
    {
      *a1 = v6;
    }
    else if ( (unsigned int)DetermineInputTargetPrecedenceTransform(v4, &v19) )
    {
      if ( v19 && (unsigned int)NlsNullProc(v19, v15, v16) )
        TransformVector(v17, (_DWORD)a1, (_DWORD)a1 + 4, a4, 1);
    }
    else
    {
      PhysicalToLogicalDPIPointWithHitTest(a1, a1, a4, v4);
    }
  }
  return v4;
}
