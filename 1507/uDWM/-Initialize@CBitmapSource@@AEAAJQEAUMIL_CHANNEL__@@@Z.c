/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800176B8
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012B7C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B624 (-Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180040B68 (-Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(CBitmapSource *this, struct MIL_CHANNEL__ *const a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResource::Create(77LL, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x19Au);
  return v3;
}
