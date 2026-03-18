/*
 * XREFs of WPP_IFR_SF_Z @ 0x1C006DD14
 * Callers:
 *     FxInitialize @ 0x1C0020804 (FxInitialize.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Z(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        _UNICODE_STRING *id)
{
  __int64 *v6; // rbx
  __int64 v8; // rdi
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rax
  __int64 *v11; // rcx
  unsigned __int16 *v12; // rax

  v6 = (__int64 *)id;
  v8 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
  {
    if ( id && id->Buffer )
      Length = id->Length;
    else
      Length = 10LL;
    if ( !id || (Buffer = id->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !id || (v11 = (__int64 *)id, !id->Length) )
      v11 = qword_1C00386D0;
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
    v6 = qword_1C00386D0;
  FxIFR(globals, 5u, 0x11u, WPP_globals_cpp_Traceguids, 0xDu, v6, 2LL, v12, v8, 0LL);
}
