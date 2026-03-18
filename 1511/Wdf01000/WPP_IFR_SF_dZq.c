/*
 * XREFs of WPP_IFR_SF_dZq @ 0x1C006DE58
 * Callers:
 *     LockVerifierSection @ 0x1C006DC1C (LockVerifierSection.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dZq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        int globals_0,
        _UNICODE_STRING *level,
        const void *flags)
{
  __int64 *v8; // rbx
  __int64 v11; // rdi
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rax
  __int64 *v14; // rcx
  const wchar_t *v15; // rax

  v8 = (__int64 *)level;
  v11 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
  {
    if ( level && level->Buffer )
      Length = level->Length;
    else
      Length = 10LL;
    if ( !level || (Buffer = level->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !level || (v14 = (__int64 *)level, !level->Length) )
      v14 = qword_1C00386D0;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_globals_cpp_Traceguids,
      _a2,
      &globals_0,
      4LL,
      v14,
      2LL,
      Buffer,
      Length,
      &flags,
      8LL,
      0LL);
  }
  if ( !v8 )
    goto LABEL_18;
  if ( v8[1] )
    v11 = *(unsigned __int16 *)v8;
  v15 = (const wchar_t *)v8[1];
  if ( !v15 )
LABEL_18:
    v15 = L"NULL";
  if ( !v8 || !*(_WORD *)v8 )
    v8 = qword_1C00386D0;
  FxIFR(globals, 4u, 0x11u, WPP_globals_cpp_Traceguids, _a2, &globals_0, 4LL, v8, 2LL, v15, v11, &flags, 8LL, 0LL);
}
