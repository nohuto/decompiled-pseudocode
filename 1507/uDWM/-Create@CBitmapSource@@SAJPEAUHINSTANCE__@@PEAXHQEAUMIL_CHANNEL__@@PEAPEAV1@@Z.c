/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180040AE8
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x180040CF4 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180040B68 (-Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        HINSTANCE a1,
        void *a2,
        unsigned int a3,
        struct MIL_CHANNEL__ *const a4,
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeStream, 0x60u);
  }
  else
  {
    v8 = CBitmapSource::Create(v10, v11, a4, a5);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x65u);
  }
  return v7;
}
