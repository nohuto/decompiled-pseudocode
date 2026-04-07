/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x180019EB4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015814 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039C3C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180049AA0 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(CBitmapSource *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResource::Create(4LL, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x158u);
  return v3;
}
