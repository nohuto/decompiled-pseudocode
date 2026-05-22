/*
 * XREFs of ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8
 * Callers:
 *     ?RefreshMotionValues@GestureSession@@SAJXZ @ 0x180037180 (-RefreshMotionValues@GestureSession@@SAJXZ.c)
 *     ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180037EFC (-__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@CraneCarryRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038740 (-__StaticInitConfig@CraneCarryRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038FD0 (-__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x18003975C (-__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@CraneGrabRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180039D34 (-__StaticInitConfig@CraneGrabRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z @ 0x18003A3E4 (-__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureSession::ReadRegConfigValue(HKEY a1, const WCHAR *a2, unsigned __int16 a3, int a4)
{
  int v4; // ebx
  int v5; // r9d
  float v6; // xmm0_4
  __int16 Data; // [rsp+40h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+50h] [rbp+18h] BYREF
  DWORD Type; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v4) = a3;
  v5 = a4 - 1;
  if ( !v5 )
  {
    v6 = (float)a3 * GestureSession::s_PhysicalScaleFactor;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    v6 = (float)a3 * GestureSession::s_LogicalScaleFactor;
LABEL_5:
    v4 = (int)v6;
  }
  if ( a1 )
  {
    cbData = 4;
    if ( !RegQueryValueExW(a1, a2, 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v4) = Data;
  }
  return (unsigned __int16)v4;
}
