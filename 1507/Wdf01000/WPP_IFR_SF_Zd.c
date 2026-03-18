/*
 * XREFs of WPP_IFR_SF_Zd @ 0x1C0080CAC
 * Callers:
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0023958 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Zd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *globals_0,
        _UNICODE_STRING *level,
        int flags)
{
  __int64 *v7; // rbx
  __int64 v10; // rdi
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rax
  __int64 *v13; // rcx
  unsigned __int16 *v14; // rax

  v7 = (__int64 *)level;
  v10 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 2) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( level && level->Buffer )
      Length = level->Length;
    else
      Length = 10LL;
    if ( !level || (Buffer = level->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !level || (v13 = (__int64 *)level, !level->Length) )
      v13 = qword_1C0035090;
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
    v7 = qword_1C0035090;
  FxIFR(globals, 2u, 2u, WPP_FxRegKey_cpp_Traceguids, _a2, v7, 2LL, v14, v10, &flags, 4LL, 0LL);
}
