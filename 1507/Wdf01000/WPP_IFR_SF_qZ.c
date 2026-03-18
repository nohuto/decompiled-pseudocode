/*
 * XREFs of WPP_IFR_SF_qZ @ 0x1C0077588
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00106A0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qZ(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        _UNICODE_STRING *id)
{
  __int64 *v7; // rbx
  __int64 v9; // rdi
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rax
  __int64 *v12; // rcx
  const wchar_t *v13; // rax

  v7 = (__int64 *)id;
  v9 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
  {
    if ( id && id->Buffer )
      Length = id->Length;
    else
      Length = 10LL;
    if ( !id || (Buffer = id->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !id || (v12 = (__int64 *)id, !id->Length) )
      v12 = qword_1C0035090;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDriver_cpp_Traceguids,
      0xEu,
      &flags,
      8LL,
      v12,
      2LL,
      Buffer,
      Length,
      0LL);
  }
  if ( !v7 )
    goto LABEL_18;
  if ( v7[1] )
    v9 = *(unsigned __int16 *)v7;
  v13 = (const wchar_t *)v7[1];
  if ( !v13 )
LABEL_18:
    v13 = L"NULL";
  if ( !v7 || !*(_WORD *)v7 )
    v7 = qword_1C0035090;
  FxIFR(globals, 4u, 0x11u, WPP_FxDriver_cpp_Traceguids, 0xEu, &flags, 8LL, v7, 2LL, v13, v9, 0LL);
}
