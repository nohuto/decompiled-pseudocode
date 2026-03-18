/*
 * XREFs of ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C010C2C4
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 *     ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C010C340 (-ReadTabletButtonIndex@@YAJIPEAK@Z.c)
 *     ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01D92F4 (-ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 */

void RegisterTabletButtonHandler(void)
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  _DWORD v2[2]; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall *v3)(struct DEVICEINFO *); // [rsp+28h] [rbp-10h]
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v2[0] = 589825;
  v2[1] = 256;
  v0 = 0;
  v3 = TabletButtonHandler;
  do
  {
    if ( (int)ReadTabletButtonIndex(v0, &v4) >= 0 )
    {
      v1 = (unsigned __int64)v4 << 7;
      ReadTabletButtonConfig(
        v0,
        L"PrimaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1));
      ReadTabletButtonConfig(
        v0,
        L"PrimaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 32));
      ReadTabletButtonConfig(
        v0,
        L"SecondaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 64));
      ReadTabletButtonConfig(
        v0,
        L"SecondaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 96));
    }
    ++v0;
  }
  while ( v0 < 0xA );
  RegisterRawInputDevices((__int64)v2, 1u, 1u);
}
