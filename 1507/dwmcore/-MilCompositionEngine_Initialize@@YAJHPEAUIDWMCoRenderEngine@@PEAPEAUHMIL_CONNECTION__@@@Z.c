/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800942E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18009432C (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(
        int a1,
        struct IDWMCoRenderEngine *a2,
        struct HMIL_CONNECTION__ **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CConnection *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( a3 )
  {
    v4 = CConnection::Create(a1, a2, &v7);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801699B0, 1u, v4, 0x54u);
    else
      *a3 = v7;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801699B0, 1u, -2147024809, 0x50u);
  }
  return v5;
}
