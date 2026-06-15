/*
 * XREFs of WPP_SF__guid_ @ 0x14002E76C
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
