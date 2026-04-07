/*
 * XREFs of ?Initialize@CResource@@IEAAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@@Z @ 0x1800179BC
 * Callers:
 *     ?Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180003BE4 (-Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = (_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = a3;
  v4 = MilResource_CreateOrAddRefOnChannel(a3, a2, a1 + 24);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x44u);
  }
  else if ( !*v3 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
  }
  return v5;
}
