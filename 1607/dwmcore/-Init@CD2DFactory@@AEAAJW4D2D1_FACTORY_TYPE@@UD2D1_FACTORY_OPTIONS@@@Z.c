/*
 * XREFs of ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x1800AABA0
 * Callers:
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800AAD78 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Init(void **this, enum D2D1_FACTORY_TYPE a2, struct D2D1_FACTORY_OPTIONS a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  D2D1_FACTORY_OPTIONS v8; // [rsp+50h] [rbp+18h] BYREF

  v8.debugLevel = a3.debugLevel;
  v4 = D2D1CreateFactory(D2D1_FACTORY_TYPE_MULTI_THREADED, &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f, &v8, this + 3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC3u);
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(void *, GUID *, char *))this[3])(
           this[3],
           &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
           (char *)this + 32);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC7u);
    else
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)this[4] + 48LL))(this[4], 0LL);
  }
  return v5;
}
