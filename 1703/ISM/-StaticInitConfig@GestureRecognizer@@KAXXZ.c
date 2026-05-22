/*
 * XREFs of ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180036244 (--0GestureSession@@AEAA@XZ.c)
 *     ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180037630 (-GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerCon.c)
 * Callees:
 *     ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x180036D6C (-OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180037EFC (-__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@CraneCarryRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038740 (-__StaticInitConfig@CraneCarryRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038FD0 (-__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x18003975C (-__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@CraneGrabRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180039D34 (-__StaticInitConfig@CraneGrabRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z @ 0x18003A3E4 (-__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z.c)
 */

void GestureRecognizer::StaticInitConfig(void)
{
  HKEY v0; // rcx
  int v1; // ebx
  LSTATUS v2; // eax
  DWORD cbData; // [rsp+50h] [rbp+18h] BYREF
  DWORD Type; // [rsp+58h] [rbp+20h] BYREF
  __int16 Data; // [rsp+60h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+30h] BYREF

  if ( !GestureRecognizer::s_fConfigRead )
  {
    hKey = 0LL;
    GestureSession::OpenConfigRegKey(&hKey);
    ClickRecognizer::__StaticInitConfig(hKey);
    DragRecognizer::__StaticInitConfig(hKey);
    FlickRecognizer::__StaticInitConfig(hKey);
    v0 = hKey;
    v1 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 3.0);
    if ( hKey )
    {
      cbData = 4;
      v2 = RegQueryValueExW(hKey, L"PinchStretchMinimumUpdateThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData);
      v0 = hKey;
      if ( !v2 && Type == 4 )
        LOWORD(v1) = Data;
    }
    PinchStretchRecognizer::s_minimumUpdateThreshold = v1;
    TwoFingerGestureRecognizer::__StaticInitConfig(v0);
    CraneGrabRecognizer::__StaticInitConfig(hKey);
    CraneCarryRecognizer::__StaticInitConfig(hKey);
    if ( hKey )
      RegCloseKey(hKey);
    GestureRecognizer::s_fConfigRead = 1;
  }
}
