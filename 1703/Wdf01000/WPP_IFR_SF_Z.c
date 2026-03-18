/*
 * XREFs of WPP_IFR_SF_Z @ 0x1C0080910
 * Callers:
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Z(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        const _UNICODE_STRING *id)
{
  const _UNICODE_STRING *v6; // rbx
  __int64 v8; // rdi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v11; // rcx
  wchar_t *v12; // rax

  v6 = id;
  v8 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
  {
    if ( id && id->Buffer )
      Length = id->Length;
    else
      Length = 10LL;
    if ( !id || (Buffer = id->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !id || (v11 = id, !id->Length) )
      v11 = (const _UNICODE_STRING *)&unk_1C00AD1E0;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_globals_cpp_Traceguids,
      0xDu,
      v11,
      2LL,
      Buffer,
      Length,
      0LL);
  }
  if ( !id )
    goto LABEL_18;
  if ( id->Buffer )
    v8 = id->Length;
  v12 = id->Buffer;
  if ( !v12 )
LABEL_18:
    v12 = L"NULL";
  if ( !id || !id->Length )
    v6 = (const _UNICODE_STRING *)&unk_1C00AD1E0;
  FxIFR(globals, 5u, 0x11u, WPP_globals_cpp_Traceguids, 0xDu, v6, 2LL, v12, v8, 0LL);
}
