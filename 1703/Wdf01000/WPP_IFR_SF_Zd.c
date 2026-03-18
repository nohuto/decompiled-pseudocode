/*
 * XREFs of WPP_IFR_SF_Zd @ 0x1C0085BA8
 * Callers:
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0018B30 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Zd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *globals_0,
        const _UNICODE_STRING *level,
        int flags)
{
  const _UNICODE_STRING *v7; // rbx
  __int64 v10; // rdi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v13; // rcx
  wchar_t *v14; // rax

  v7 = level;
  v10 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 2) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( level && level->Buffer )
      Length = level->Length;
    else
      Length = 10LL;
    if ( !level || (Buffer = level->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !level || (v13 = level, !level->Length) )
      v13 = (const _UNICODE_STRING *)&unk_1C00AD1E0;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRegKey_cpp_Traceguids,
      _a2,
      v13,
      2LL,
      Buffer,
      Length,
      &flags,
      4LL,
      0LL);
  }
  if ( !level )
    goto LABEL_18;
  if ( level->Buffer )
    v10 = level->Length;
  v14 = level->Buffer;
  if ( !v14 )
LABEL_18:
    v14 = L"NULL";
  if ( !level || !level->Length )
    v7 = (const _UNICODE_STRING *)&unk_1C00AD1E0;
  FxIFR(globals, 2u, 2u, WPP_FxRegKey_cpp_Traceguids, _a2, v7, 2LL, v14, v10, &flags, 4LL, 0LL);
}
