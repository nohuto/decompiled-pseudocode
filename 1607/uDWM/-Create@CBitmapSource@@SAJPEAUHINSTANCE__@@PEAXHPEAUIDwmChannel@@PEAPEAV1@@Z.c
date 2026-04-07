/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180049A20
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180049AA0 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        HINSTANCE a1,
        void *a2,
        unsigned int a3,
        struct IDwmChannel *a4,
        struct CBitmapSource **a5)
{
  HRESULT ThemeStream; // eax
  unsigned int v7; // ebx
  int v8; // eax
  void *v10; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  ThemeStream = GetThemeStream(a2, 0, 0, 213, &v10, &v11, a1);
  v7 = ThemeStream;
  if ( ThemeStream < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ThemeStream, 0x4Fu);
  }
  else
  {
    v8 = CBitmapSource::Create(v10, v11, a4, a5);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x52u);
  }
  return v7;
}
