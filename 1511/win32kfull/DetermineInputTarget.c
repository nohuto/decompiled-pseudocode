/*
 * XREFs of DetermineInputTarget @ 0x1C0066180
 * Callers:
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F2358 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C010205C (DetermineInputTargetPrecedenceTransform.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01074E8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
 */

struct tagWND *__fastcall DetermineInputTarget(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rdi
  struct tagWND *v5; // r14
  __int64 v6; // rbx
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v18[64]; // [rsp+60h] [rbp-78h] BYREF

  v4 = gspwndScreenCapture;
  v5 = 0LL;
  v6 = *a1;
  v16 = *a1;
  if ( !gspwndScreenCapture )
  {
    v4 = gspwndMouseOwner;
    if ( !gspwndMouseOwner )
    {
      v4 = (struct tagWND *)gspwndInternalCapture;
      if ( !gspwndInternalCapture )
      {
        v9 = IsThreadDesktopComposed(gptiCurrent, a2, a3);
        v12 = gspwndInternalCapture + 4;
        v13 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( v9 )
        {
          v14 = DCESpeedHitTest(v13, v12, v10, v11, (__int64)&v16, a4, (__int64)v17, (__int64)v18, 0LL, 0LL);
          v6 = v16;
          v5 = (struct tagWND *)v14;
        }
        else
        {
          v14 = SpeedHitTest(v13, v12, v10, v11, v6, (__int64)v18, 0LL, 0LL);
        }
        v4 = (struct tagWND *)v14;
      }
    }
  }
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent, a2, a3) && v4 )
  {
    if ( v4 == v5 )
    {
      *a1 = v6;
    }
    else if ( (unsigned int)DetermineInputTargetPrecedenceTransform(v4, &v16) )
    {
      if ( v16 )
        TransformVector(v16, (_DWORD)a1, (_DWORD)a1 + 4, a4, 1);
    }
    else
    {
      PhysicalToLogicalDPIPointWithHitTest(a1, a1, a4, v4);
    }
  }
  return v4;
}
