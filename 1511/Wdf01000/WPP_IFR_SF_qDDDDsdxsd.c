/*
 * XREFs of WPP_IFR_SF_qDDDDsdxsd @ 0x1C008C9F8
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C002F2C8 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDDDDsdxsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        unsigned int _a6,
        unsigned int _a7,
        unsigned int _a8,
        unsigned int _a9,
        const char *_a10,
        int globals_0,
        __int64 level,
        const char *flags,
        int id)
{
  const char *v15; // rdi
  const char *v16; // r14
  const char *v17; // rsi
  __int64 v18; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  const char *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // rcx
  __int64 v29; // rbx

  v15 = flags;
  v16 = "NULL";
  v17 = _a10;
  v18 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( flags )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( flags[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = "NULL";
    if ( flags )
      v22 = flags;
    if ( _a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( _a10[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = "NULL";
    if ( _a10 )
      v25 = _a10;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_InterruptObject_cpp_Traceguids,
      0x18u,
      &_a5,
      8LL,
      &_a6,
      4LL,
      &_a7,
      4LL,
      &_a8,
      4LL,
      &_a9,
      4LL,
      v25,
      v24,
      &globals_0,
      4LL,
      &level,
      8LL,
      v22,
      v21,
      &id,
      4LL,
      0LL);
  }
  if ( v15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v15[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  v28 = "NULL";
  if ( v15 )
    v28 = v15;
  if ( v17 )
  {
    do
      ++v18;
    while ( v17[v18] );
    v29 = v18 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( v17 )
    v16 = v17;
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_InterruptObject_cpp_Traceguids,
    0x18u,
    &_a5,
    8LL,
    &_a6,
    4LL,
    &_a7,
    4LL,
    &_a8,
    4LL,
    &_a9,
    4LL,
    v16,
    v29,
    &globals_0,
    4LL,
    &level,
    8LL,
    v28,
    v27,
    &id,
    4LL,
    0LL);
}
